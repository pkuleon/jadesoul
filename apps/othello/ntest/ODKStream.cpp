// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#include "ODKStream.h"
#include "Pos2.h"
#include "../GDK/GGSMessage.h"
#include "../GDK/SGMessages.h"

#include "Player.h"

#include <iostream>
using namespace std;

void CODKStream::Handle(const CMsg& msg) {
	cout << msg.sRawText << "\n";
}

void CODKStream::HandleLogin() {
	BaseLogin();
	(*this) << "mso\n";
	flush();
}

void CODKStream::HandleTell(const CMsgGGSTell& msg) {
	cout << msg.sFrom << " " << msg.sText << "\n";
	if (msg.sFrom=="n2" || msg.sFrom=="adsfadsf" || msg.sFrom=="unic") {
		if (msg.sText=="quit")
			Logout();
		else if (msg.sText==":reload openings")
			InitForcedOpenings();
		else {
			(*this) << msg.sText << "\n";
			flush();
		}
	}
}

void CODKStream::HandleUnknown(const CMsgGGSUnknown& msg) {
	cout << "Unknown GGS message: \n";
	Handle(msg);
}

// create a service, if the sLogin is a service type supported by this app
CSGBase* CODKStream::CreateService(const string& sUserLogin) {
	CSGBase* pService=NULL;
	if (!HasService(sLogin)) {
		if (sUserLogin=="/os") {
			pService=new CSGNovello(this);
		}
		if (pService)
			loginToPService[sUserLogin]=pService;
	}

	return pService;
}

////////////////////////////
// CSGNovello
////////////////////////////

CSGNovello::CSGNovello(ggsstream* apgs) : CSG<COsRules>(apgs) {
	int open;
	int strength = PComputer()->pcp->Strength();

	if (strength>12)
		open=1;
	else if (strength>8)
		open=2;
	else if (strength>6)
		open=4;
	else if (strength>4)
		open=8;
	else
		open=16;

	(*pgs) << "ts trust +\n"
			<< "tell /os open " << open << "\n";
	pgs->flush();
}

void CSGNovello::HandleGameOver(const TMsgMatchDelta& msg,const string& idg) {
	if (msg.match.IsPlaying(pgs->GetLogin()))
		PComputer()->EndGame(idToGame[idg]);
	BaseGameOver(msg, idg);
}

void CSGNovello::HandleJoin(const TMsgJoin& msg) {
	BaseJoin(msg);
	MakeMoveIfNeeded(msg.idg);
}

void CSGNovello::HandleMatchDelta(const TMsgMatchDelta& msg) {
	if (msg.match.IsPlaying(pgs->GetLogin()) && msg.fPlus)
		PComputer()->StartMatch(msg.match);
	BaseMatchDelta(msg);
}

void CSGNovello::HandleRequestDelta(const TMsgRequestDelta& msg) {
	BaseRequestDelta(msg);
	bool fGeneric = msg.request.pis[1].sName.empty();

	if (msg.fPlus && (fGeneric || msg.IAmChallenged(this))) {
		if (msg.request.cType=='S' ||
			(msg.RequireBoardSize(8, this, !fGeneric) &&
			msg.RequireColor("s?",this, !fGeneric) &&
			msg.RequireAnti(false,this, !fGeneric) &&
			msg.RequireMaxOpponentClock(CSGClock(60*60,0,2*60),this, !fGeneric) &&
			msg.RequireMinMyClock(CSGClock(60,0,0),this, !fGeneric) &&
			msg.RequireRandDiscs(4,24,this, !fGeneric)))
			(*pgs) << "t /os accept " << msg.idr << "\n";
		else
			(*pgs) << "t /os decline " << msg.idr << "\n";

		pgs->flush();
	}
}

void CSGNovello::HandleUnknown(const TMsgUnknown& msg) {
	cout << "Unknown /os message: ";
	Handle(msg);
}

void CSGNovello::HandleUpdate(const TMsgUpdate& msg) {
	BaseUpdate(msg);
	MakeMoveIfNeeded(msg.idg);
}

// helper function for join and update messages
void CSGNovello::MakeMoveIfNeeded(const string& idg) {
	COsGame* pgame=dynamic_cast<COsGame*>(PGame(idg));
	
	// the computer player needs to know if this is game 1 of a synch match
	//	so it can use the appropriate hashtable
	bool fSynchGame1=false;
	u4 loc = idg.find('.',1);
	if (loc!=idg.npos && loc+1 < idg.size())
		fSynchGame1= idg[loc+1]=='1';

	QSSERT(pgame);
	if (pgame!=NULL) {
		bool fMyMove=pgame->ToMove(pgs->GetLogin());
		CSGMoveListItem mli;

		PComputer()->Update(*pgame, fMyMove, mli);

		if (fMyMove) {
			(*pgs) << "tell /os play " << idg << " " << mli << "\n";
			pgs->flush();
		}
	}
	else
		QSSERT(0);
}