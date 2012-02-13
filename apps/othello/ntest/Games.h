// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// game header routines

#pragma once

#include <vector>
#include <stdio.h>

using namespace std;

#include "Player.h"
#include "Moves.h"
#include "NodeStats.h"
#include "../GDK/OsObjects.h"

// options
extern bool fPrintBoard, printResult, printSeriesResult, printSeriesProgress, fPrintExtensionInfo;
extern char* saveGameFile;

void Compare(CPlayerComputer& computer1, CPlayerComputer& computer2);

class CGame : public COsGame {
public:
	CGame(CPlayer* plBlack, CPlayer* plWhite);
	CGame(CPlayer* plBlack, CPlayer* plWhite, double t);

	void InitializePlayers(CPlayer* plBlack, CPlayer* plWhite, double t);
	void Initialize(char sBoard[NN+1], bool fBlackMove);

	int Play();

	int Load(const char* fn);
	void SetInfo();
	void SetDefaultStart();

	//void SetStartPos(const CBitBoard& bb);

protected:
	CPlayer* ppls[2];
};

// Saved Games
class CSavedGame {
public:
	char sBlackName[9], sWhiteName[9];
	bool fComplete, fPublic;
	int nResult;
	CQPosition posStart;
	TMoveList ml;

	CSavedGame();
	CSavedGame(const char* sNewBlackName, const char* sNewWhiteName, bool fNewComplete, bool fNewPublic, int nNewResult, TMoveList mlNew);
	bool FPrint(FILE* fp, int nVersion=3);
	bool FScan(FILE* fp, int nVersion=3);

protected:
	bool FScan0(FILE* fp);
	bool FScan1(FILE* fp);
	bool FScan2(FILE* fp, bool fStartPos);

	bool FPrint2(FILE* fp);
	bool FPrint3(FILE* fp);
};

inline CSavedGame::CSavedGame() {};