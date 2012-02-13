// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#include "../GDK/ggsstream.h"
#include "../GDK/SG.h"
#include "../GDK/OsObjects.h"

class CPlayerComputer;

class CODKStream: public ggsstream {
public:
	virtual void Handle				(const CMsg& msg);
	virtual void HandleLogin			();
	virtual void HandleTell			(const CMsgGGSTell& msg);
	virtual void HandleUnknown		(const CMsgGGSUnknown& msg);

	virtual CSGBase* CreateService(const string& sUserLogin);

	CPlayerComputer* pComputer;
};

class CSGNovello : public CSG<COsRules> {
public:
	CSGNovello(ggsstream* apgs);

	virtual void HandleGameOver		(const TMsgMatchDelta& msg, const string& idg);
	virtual void HandleJoin			(const TMsgJoin& msg);
	virtual void HandleMatchDelta		(const TMsgMatchDelta& msg);
	virtual void HandleRequestDelta	(const TMsgRequestDelta& msg);
	virtual void HandleUnknown		(const TMsgUnknown& msg);
	virtual void HandleUpdate			(const TMsgUpdate& msg);

	virtual void MakeMoveIfNeeded(const string& idg);

	CPlayerComputer* PComputer() { return ((CODKStream*)pgs)->pComputer; };
};
