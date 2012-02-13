// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// othello program

#pragma warning(disable: 4786)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <io.h>
#include "Debug.h"
#include <ctype.h>
#include <strstream>
#include <iomanip>
#include <string>

using namespace std;

#include "Book.h"
#include "options.h"
#include "main.h"
#include "QPosition.h"
#include "Player.h"
#include "Games.h"
#include "NodeStats.h"
#include "Evaluator.h"
#include "Test.h"
#include "TreeDebug.h"
#include "MPCStats.h"
#include "Pos2.h"
#include "FastFlip.h"
#include "ODKStream.h"
#include "Cache.h"

#ifndef _WIN32
#define __cdecl
#endif

extern bool fPrintMoveSearch;
extern bool fPrintCorrections;

enum modality { kSpeedTest, kCalcMPC, kPosValues, kGetStartPos, 
				kAssignBook, kEdmundBook, kJoinBooks,
				kAnalyze, kAnalyzeEdmund,
				kGame, kGameEdmund, kGGS,
				kCompare } mode;

#define RANDSEED time(0)
//#define RANDSEED 7

const int defaultMatchMinutes=15;
const int defaultMatchDepth=10;

extern string fnOpening;

CPlayer *pPlH=NULL, *pPl1=NULL, *pPl2=NULL;

CPlayer* GetPlayer(char c, const CComputerDefaults& cd1, const CComputerDefaults& cd2) {
	switch (c) {
	case 'h':
		if (pPlH==NULL)
			pPlH=new CPlayerHuman;
		return pPlH;
	case '1':
		if (pPl1==NULL)
			pPl1=new CPlayerComputer(cd1);
		return pPl1;
	case '2':
		if (pPl2==NULL)
			pPl2=new CPlayerComputer(cd2);
		return pPl2;
	default:
		cerr << "Unknown player type " << c << "\n";
		_ASSERT(0);
		exit(-1);
		return(NULL);
	}
}

void CleanPlayers() {
	if (pPlH)
		delete pPlH;
	if (pPl1)
		delete pPl1;
	if (pPl2)
		delete pPl2;
}

void Init() {
	setbuf(stdout, 0);
	srand(RANDSEED);

	InitFastFlip();
	InitFastFlipPatterns();
	InitConfigToPotMob();
	cout << setprecision(3);
	cerr << setprecision(3);

	extern void InitNewFF();
	InitNewFF();

#ifdef _DEBUG
	int tmpFlag = _CrtSetDbgFlag( _CRTDBG_REPORT_FLAG );
	tmpFlag |= _CRTDBG_LEAK_CHECK_DF;
	_CrtSetDbgFlag( tmpFlag );
#endif

	void InitFFBonus();
	InitFFBonus();
	InitForcedOpenings();
}

void Clean() {
	CleanConfigToPotMob();
	CleanFastFlipPatterns();
	CBook::Clean();
	CEvaluator::Clean();
	CleanPlayers();
}

void PrintStuff(bool fPrintStuff) {
	fPrintExtensionInfo=fPrintStuff;
	fPrintBoard=printResult=fPrintStuff;
	fPrintAbort=fPrintStuff;
}

void Test() {
	CBitBoard::Test();
}

int __cdecl main(int argc, char**argv, char**envp) {
	time_t end_time;
	int nGames;
	const char* submode;

	cout << "Copyright (c) Chris Welty\nAll Rights Reserved\n\n";

	////////////////////////////////////////
	// Table Initialization
	////////////////////////////////////////

	Init();

	Test();

	CComputerDefaults cd1, cd2;
	ReadParameters(cd1,cd2);
	ParseCommandLine(argc, argv, submode, cd1, nGames);

	CNodeStats start, end;

	start.Read();

	////////////////////////////////////////
	// Special modes requiring no players
	////////////////////////////////////////

	if (mode==kSpeedTest) {
		PrintStuff(false);
		TestMoveSpeed(cd1.MinutesOrDepth(), nGames, argv[1]+1);
	}

	///////////////////////////////////////////
	// All other modes
	///////////////////////////////////////////

	else {
		fPrintTimeUsed=fPrintMoveSearch=false;

		switch(mode) {
		case kGame:
		case kGameEdmund:
			{
			PrintStuff(true);

			cd1.fEdmundAfter=cd2.fEdmundAfter=(mode==kGameEdmund);
			CPlayer* p0=GetPlayer(submode[0],cd1,cd2);
			CPlayer* p1=GetPlayer(submode[1],cd1,cd2);

			bool fAlternate = strlen(submode)>2 && submode[2]=='*';

			while (nGames-->0) {
				bool fSwap=fAlternate && nGames&1==1;
				if (fSwap)
					CGame(p1, p0).Play();
				else
					CGame(p0, p1).Play();
			}
			break;
			}
		case kCompare:{
			PrintStuff(false);
			fCompareMode=true;

			cd2.sCalcParams=cd1.sCalcParams;
			cd1.booklevel=cd2.booklevel=CComputerDefaults::kNoBook;

			CPlayerComputer computer1(cd1);
			CPlayerComputer  computer2(cd2);
			Compare(computer1, computer2);
			break;
					  }
		case kCalcMPC: {
			cd1.booklevel=CComputerDefaults::kNoBook;
			CPlayerComputer computer1(cd1);
			CalcMPCStats(&computer1, cd1.MinutesOrDepth());
			break;
					   }
		case kPosValues: {
			cd1.booklevel=CComputerDefaults::kNoBook;
			CPlayerComputer computer1(cd1);
			CalcPosValues(&computer1, submode[0]=='a');
			break;
						 }
		case kEdmundBook: {
			cd1.booklevel=CComputerDefaults::kNegamaxBook;
			CPlayerComputer computer1(cd1);
			PrintStuff(true);
			if (computer1.book) {
				computer1.book->SetComputer(&computer1);
				cout << computer1.book->NEdmundNodes() << " edmund nodes detected.\n";
				computer1.book->PlayEdmundGames();
			}
			else {
				cerr << "ERR: You need a book to use Edmund mode\n";
			}
			break;
						 }

#ifndef EXTERNAL
		case kJoinBooks: {
			CPlayerComputer computer1(cd1);
			if (computer1.book) {
				computer1.book->SetComputer(&computer1);
				string fn(fnBaseDir);
				fn+="coefficients/join.book";
				computer1.book->JoinBook(fn.c_str());
			}
			else {
				cerr << "ERR: You need a book to use JoinBooks mode\n";
			}
			break;
						 }
		case kGGS:
			{
			cd1.vContempts[0]=cd1.vContempts[1]=0;
			CPlayerComputer computer1(cd1);
			CODKStream gs;
			if ((!gs.Connect("opal.cs.ualberta.ca",5000) || !gs.Connect("opal.cs.ualberta.ca",4000))  && 
				gs.Login(computer1.Name(),"?")==0) {
				gs.pComputer=&computer1;
				gs.Process();
			}
			}
			break;
#endif
		case kAnalyze:
		case kAnalyzeEdmund:
			{
			cd1.fEdmundAfter= mode==kAnalyzeEdmund;
			CPlayerComputer computer1(cd1);
			if (computer1.book==NULL) {
				cerr << "ERR: You need a book to use Analyze mode\n";
			}
			else {
				PrintStuff(true);

				computer1.fAnalyzingDeferred=true;

				COsGame game;
				switch(submode[0]) {
				case 'g':
					while (cin >> game)
						if (!game.mt.fRand)
							computer1.AnalyzeGame(game);
					break;
				case 'i':
					while (game.InIOS(cin))
						if (!game.mt.fRand)
							computer1.AnalyzeGame(game);
					break;
				case 'l':
					while (game.InLogbook(cin))
						if (!game.mt.fRand)
							computer1.AnalyzeGame(game);
					break;
				case '0':
				case '1':
				case '2':
					while (game.InOldNtest(cin, submode[0]-'0'))
						if (!game.mt.fRand)
							computer1.AnalyzeGame(game);
					break;
				case 'k': {
					// special, because file must be opened as binary
					#ifdef _WIN32
						const char* fn="c:\\allinf.oko";
					#else
						const char* fn="fn="base/allinf.oko";
					#endif

					ifstream ifs(fn, ios::binary);

					PrintStuff(false);

					int nGames;
					for (nGames=0; game.InLogKitty(ifs); nGames++) {
						if (!game.mt.fRand) {
							if (nGames%50==0)
								cout << "\n" << setw(5) << nGames << " ";
								computer1.AnalyzeGame(game);
							cout << ".";
						}
					}
						  }
					break;
				default:
					cout << "Unknown file type '" << submode << "' for analyze mode\n";
					cerr << "Unknown file type '" << submode << "' for analyze mode\n";
				}

			}
			break;
			}
		case kGetStartPos: {
			/*
			FILE* fp=fopen("CompareStart.pos","wb");
			QSSERT(fp);
			if (fp) {
				int nAcceptable, nEmpty;
				CValue v, vCutoff=kStoneValue;

				map<CBitBoard,CBookData>::iterator i;
				for (nEmpty=40; nEmpty<41; nEmpty++) {
					nAcceptable=0;
					map<CBitBoard,CBookData>& entries=computer1.book->entries[nEmpty];
					for(i=entries.begin(); i!=entries.end(); i++) {
						const CBookValue& bv=(*i).second.Values();
						QSSERT(bv.IsAssigned());
						v=bv.v;
						if (v>=-vCutoff && v<=vCutoff) {
							nAcceptable++;
							fwrite(&((*i).first),sizeof((*i).first),1,fp);
						}
					}
					cout << nEmpty << " empty: " << nAcceptable << "/" << entries.size() << " are acceptable\n";
				}
				fclose(fp);
			}
			break;
			*/
						   }
		case kAssignBook: {
			cd1.booklevel=CComputerDefaults::kNegamaxBook;
			CPlayerComputer computer1(cd1);
			break;	// it's done when creating computer1
						  }
		default:
			cerr << "that mode is not currently supported\n";
			cout << "that mode is not currently supported\n";
			break;
		}

	}

	extern int nStableChecks;
	extern int nProven;

	cout << nProven << " / " << nStableChecks << " = " << (double)nProven*100/nStableChecks << "% stable checks proved WLD\n";
	//PrintBookReadData();
	time(&end_time);
	printf("\n\nRun completed at GMT %s\n",asctime(gmtime(&end_time)));
	end.Read();
	cout << (end-start) << "\n";

	Clean();

	return 0;
}

///////////////////////////////////////
// command-line options
///////////////////////////////////////

void ParseCommandLine(int argc, char* argv[], const char*& submode, 
					  CComputerDefaults& cd, int& nGames) {
	// defaults
	submode='\0';
	nGames=1;

	// overrides by command line
	if (argc>1) {
		submode=argv[1];
		switch(*(submode++)) {
		case 'a': mode=kAnalyze; break;
		case 'A': mode=kAnalyzeEdmund; break;
		case 'c': mode=kCompare; break;
		case 'e': mode=kEdmundBook; break;
		case 'g': mode=kGame; break;
		case 'G': mode=kGameEdmund; break;
#ifndef EXTERNAL
		case 'i': mode=kGGS; break;
		case 'j': mode=kJoinBooks; break;
#endif
		case 'm': mode=kCalcMPC; break;
		case 'n': mode=kAssignBook; break;
		case 'p': mode=kPosValues; break;
		//case 's': mode=kGetStartPos; break;
		case 't': mode=kSpeedTest; break;

		default:
			cerr << "unknown or dangerous mode '" << argv[1] << "'\n";
			cout << "unknown or dangerous mode '" << argv[1] << "'\n";
			_exit(1);
		}
	}

	// argument 2 : time control
	double tMatch=defaultMatchMinutes*60;

	if (argc>2) {
		cd.sCalcParams=argv[2];
	}

	// argument 3 : number of games in a series
	if (argc>3) {
		int nGamesTemp=atol(argv[3]);
		if (nGamesTemp>0)
			nGames=nGamesTemp;
		else
			fprintf(stderr, "The third argument (number of games) must be greater than 0!\n");
	}

	// argument 4: opening file name
	if (argc>4) {
		fnOpening=argv[4];
	}
}

void ReadMachineParameters(istream& isBig) {
	string sLine;
	getline(isBig, sLine);
	istrstream is(sLine.c_str());

	// read the following parameters:
	//	int maxCacheMem - size in bytes available for cache (in file in MB,converted here to bytes)
	//	double dGHz - Approx processor speed

	//	first set default values in case we can't read for some reason
	maxCacheMem=10;
	dGHz=0.4;

	is >> maxCacheMem >> dGHz;

	// convert MBytes to bytes in maxCacheMem
	maxCacheMem<<=20;

}

void ReadParameters(CComputerDefaults& cd1, CComputerDefaults& cd2) {
	string fn(fnBaseDir);
	fn+="parameters.txt";
	ifstream fParams(fn.c_str());
	
	ReadMachineParameters(fParams);
	fParams >> cd1 >> cd2;
}