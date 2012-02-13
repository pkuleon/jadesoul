// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// CPlayer classes

#pragma once

#include "options.h"
#include "Moves.h"
#include "QPosition.h"
#include "Timing.h"
#include "Book.h"

class CCache;
class CEvaluator;
class CMPCStats;

class CSavedGame;
#include "../GDK/OsObjects.h"

class CSearchInfo;

typedef  CSGMatch COsMatch;

class CPlayer {
public:
	
	CPlayer();
	~CPlayer();

	enum TCheatcode {kCheatNone, kCheatUndo, kCheatAutoplay, kCheatContinue, kCheatSwitch};

	// game playing
	virtual void StartMatch(const COsMatch& match);
	virtual TCheatcode  Update(COsGame& game, int flags, CSGMoveListItem& mli);
	virtual TCheatcode  GetMove(COsGame& game, int flags, CSGMoveListItem& mli)=0;
	virtual void EndGame(const COsGame& game);

	// display info
	void SetName(const char* newName);
	void SetName(const char* newName, int number);
	const char* Name() const;

	// Information about the player
	virtual bool NeedsBoardDisplayed() const;
	virtual bool IsHuman() const = 0;
	virtual TMoveSignal MoveSignal() const = 0;

	enum {
		kMyMove=1, kNoPrint=2, kAllowCheats=4,
	};

protected:
	char sName[32];
	char *fnSaveGame;
};

class CPlayerHuman : public CPlayer {
public:
	CPlayerHuman();
	CPlayerHuman(const char* sName);

	// game playing
	virtual TCheatcode GetMove(COsGame& game, int flags, CSGMoveListItem& mli);


	// information about the player
	virtual bool NeedsBoardDisplayed() const;
	virtual bool IsHuman() const;
	virtual TMoveSignal MoveSignal() const; // how this player will signal its opponent it wants to move during a toot

protected:
	// cheat codes. These read stdin for parameters and call the respective COsGame function
	bool Load(COsGame& game);
	bool Save(const COsGame& game);
};

class CComputerDefaults {
public:
	CComputerDefaults();

	char cEval, cCoeffSet;
	string sCalcParams;

	CValue vContempts[2];
	
	int iPruneMidgame, iPruneEndgame, nRandShifts[2];
	bool fEdmundAfter;
	u4 fsPrint, fsPrintOpponent;
	enum {kNoBook, kBook, kNegamaxBook} booklevel;

	int MinutesOrDepth() const;

	istream& In(istream& is);

protected:
	static CValue FloatToContempt(double fContempt);
};

inline istream& operator>>(istream& is, CComputerDefaults& cd) {
	return cd.In(is);
}

class CPlayerComputer : public CPlayer {
public:
	CBook* book;
	CEvaluator* eval;
	CCache *caches[2];
	bool fHasCachedPos[2];
	CCalcParams *pcp;
	CMPCStats *mpcs;
	CComputerDefaults cd;
	bool toot;
	bool solved, hasBacktracked, fAverageTime, fInBook;
	bool fAnalyzingDeferred;
	CValue solvedValue;

	//CPlayerComputer(char anEval, char aCoeffSet, CCalcParams* pcp, int iPrune, bool fBook=true, bool fCNABook=true);
	CPlayerComputer(const CComputerDefaults& acd);
	~CPlayerComputer();

	// game playing
	virtual void StartMatch(const COsMatch& match);
	virtual TCheatcode GetMove(COsGame& game, int flags, CSGMoveListItem& mli);
	virtual void EndGame(const COsGame& game);


	// Routine to get a move
	void Clear();
	void GetChosen(const CQPosition& pos, const CSearchInfo& si, CMVK& chosen, bool fUseBook=true);

	// Post-game analysis
	void AnalyzeGame(const COsGame& game);
	void Backtrack(const COsGame& game);
	void PrintAnalysis(const COsGame& game);

	// misc
	static u4 LogCacheSize(CCalcParams* pcp, int iPrune);
	int AdjustedHeight(const CQPosition& pos) const;

	// information about the player
	virtual TMoveSignal MoveSignal() const;
	virtual bool IsHuman() const;
	virtual bool FDeferAnalysis() const;

protected:
	void SetParameters(const CQPosition& pos, bool fUseBook, int iCache);
	void SetParameters(bool fUseBook, int iCache);
	void SetupBook(bool fCNABook);
	static int DefaultRandomness();
	void GetBookVariability(const COsGame& game, CSearchInfo& si);
	CCache* GetCache(int iCache);
	CQPosition posCached[2];
};
