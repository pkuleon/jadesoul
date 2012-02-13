// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// book header file

#pragma once

#ifndef _BOOK_H
#define _BOOK_H

#include <string.h>
#include <map>
using namespace std;

#include "Utils.h"
#include "BitBoard.h"
#include "Timing.h"

class CQPosition;
class CBookData;
class CSavedGame;
class CPlayerComputer;
class CMoves;
class CMoveValue;
class CMVK;

class CBoni {
public:
	CBoni();

	CValue blackBonus;	// add to black/subtract from white for a black win
	CValue drawBonus;	// add to black/subtract from white for a draw
	CValue whiteBonus;	// add to black/subtract from white for a white win

	bool operator==(const CBoni& b);
	bool operator!=(const CBoni& b);
};

istream& operator>>(istream& is, CBoni& boni);

//enum TSolved { kUnknown, kLoss, kDraw, kWin };

class CBookValue {
public:
	CValue vHeuristic, vBlack, vWhite;

	// setting v values
	void Clear();
	void SetLeaf(CValue v, bool afWLDSolved);
	void SetBranch(const CBookValue& valueNew);
	void SetWLDSolved(bool fWLDSolved);

	// assignment (assign values to black and white)
	void AssignLeaf(const CBoni& boni);
	void AssignBranch();
	void Deassign();

	// merging together
	void MergeTerminalValue(CValue vTerminal, const CBoni& boni);
	void MinValues();
	void Merge(const CBookValue& sbv, int pass);

	// information
	bool Win() const;
	bool Draw() const;
	bool Loss() const;
	bool IsSolved() const;
	bool IsAssigned() const;
	bool IsSetAndAssigned() const;
	CValue VMover(bool fBlackMove) const;
	CValue VMover(bool fBlackMove, int vContempt, int nPass) const;

	// I/O
	void Out(ostream& os, bool fReverse=0) const;

protected:
	bool fSet;			// true if v has been set
	bool fAssigned;		// true if black and white values have been assigned
	bool fWLDSolved;	// solved for WLD?

	char SolvedChar() const;
};

inline ostream& operator<<(ostream& os, const CBookValue& bv) { bv.Out(os); return os; };

inline bool CBookValue::IsAssigned() const { return fAssigned;}
inline bool CBookValue::IsSetAndAssigned() const { return fSet && fAssigned;}
inline void CBookValue::SetWLDSolved(bool afWLDSolved) { fWLDSolved=afWLDSolved; }
class CBookData {
public:
	CBookData();
	//CBookData(CHeightInfo ahi, CValue av, CValue aCutoff);

	// update routines
	bool IncreaseHeight(const CHeightInfo& hi, int nEmpty);
	void StoreRoot(CHeightInfo hi, int nEmpty, CValue value, CValue vCutoff, bool fFull, const CBoni& boni);
	void StoreLeaf(CHeightInfo hi, int nEmpty, CValue value, const CBoni& boni);

	// correction routines
	void AllSubnodesInBook();
	void AssignBranchValues(const CBookValue& valuesNew);
	void IncrementGameCount(int iGameType);
	void UpgradeToBranch();
	void CorrectBranchness();

	// Information
	CValue Cutoff() const { return cutoff; }
	const CHeightInfo& Hi() const;
	const CBookValue& Values() const;

	bool IsMoreImportantThan(const CBookData& bd2) const;

	void Out(ostream& os, bool fReverse=0) const;

	bool IsLeaf() const;
	bool IsBranch() const;
	bool IsUleaf() const;
	bool IsSolved() const;

	int GameCount() const;

	// these are here for a very bad reason, don't use them
	bool IsRoot() const;
	void SetRoot(bool fRoot);

protected:
	CHeightInfo hi;
	CValue cutoff;
	CBookValue values;
	u4 nGames[2];

	bool fRoot;	// true if has been the root of a search tree => branch or solved

	enum TLeafness { kULeaf, kBranch, kSolved } ;
	TLeafness Leafness() const;

	friend class CBook;
};

inline ostream& operator<<(ostream& os, const CBookData& bd) { bd.Out(os); return os; }

class CBookType {
public:
	char bookName[200];
};

inline bool operator<(const CBookType&a, const CBookType&b) {return strcmp(a.bookName, b.bookName)<0;}

class CBook;
struct CWindow;
class COsGame;
class CSearchInfo;

const int nEmptyBookMax=NN-3;

class CBook {
public:
	static CBook* FindBook(char evalType, char coeffSet, CCalcParams* pcp);
	static void Clean();

	CBook(const char* filename);
	~CBook();

	bool SetBoni(const CBoni& aBoni);
	void SetComputer(CPlayerComputer* pComputer);

	const CBookData* FindMinimal(const CBitBoard& board) const;
	CBookData* FindMinimal(const CBitBoard& board);
	const CBookData* FindMinimal(const CBitBoard& board, int nEmpty) const;
	CBookData* FindMinimal(const CBitBoard& board, int nEmpty);
	const CBookData* FindAnyReflection(const CBitBoard& board) const;
	CBookData* FindAnyReflection(const CBitBoard& board);
	const CBookData* FindAnyReflection(const CBitBoard& board, int nEmpty) const;
	CBookData* FindAnyReflection(const CBitBoard& board, int nEmpty);

	// load info from book. return TRUE if found
	bool Load(const CBitBoard& board, CHeightInfo hi, CValue alpha, CValue beta, CValue& value);
	bool Load(const CBitBoard& board, CHeightInfo hi, CValue alpha, CValue beta, CValue& value, int nEmpty);
	bool GetRandomMove(const CQPosition& pos, const CSearchInfo& si, CMVK& mvk) const;
	bool GetEdmundMove(const CBitBoard& board, bool fBlackMove, CMoveValue& mv, bool fPrintEdmund) const;
	int NEdmundNodes() const;

	// store info in book
	void StoreLeaf(const CBitBoard& board, CHeightInfo hi, CValue value);
	void StoreRoot(const CBitBoard& board, CHeightInfo hi, CValue value, CValue vCutoff, bool fFull);

	// get info
	int NEmptyMin() const;
	const CBoni& Boni() const;

	// save data to file
	void Mirror();
	void WriteErr();
	void Write();
	void WriteVersion0();
	void WriteVersion1();

	void ReadErr();
	void ReadVersion0(FILE* fp);
	void ReadVersion1(FILE* fp);

	// Correction and assignment
	void CorrectAll(int& nSearches);
	void CorrectPosition(CQPosition pos, int& nSearches);
	void CorrectPosition(CQPosition pos, CBookData* bd, int& nSearches);
	void CorrectGame(const COsGame& game, int iGameType, int& nSearches, bool fEdmundAfter);
	void PlayEdmundGame(const CBitBoard& board, bool fBlackMove, CMoveValue& mv);
	void PlayEdmundGames();
#ifndef EXTERNAL
	void JoinBook(const char* fn);
#endif

	// data. public so we can let the coefficient calculator iterate through it
	map<CBitBoard,CBookData> entries[nEmptyBookMax];


protected:
	string bookname;
	static map<CBookType, CBook*> bookList;
	CBoni boni;
	CPlayerComputer *pComputer;
	int tLastWrite;
	int nHashErr;

	void IncreaseHeight(CQPosition pos, CBookData* bd, CHeightInfo hi, int& nSearches);
	void MaxSubnodeValues(const CQPosition& pos, CBookData* bd,
							 CBookValue& bv, CBookValue& bvUleaf,
							 CMoves& movesNonbook, int& nSearches);
	void EndgameError(const CQPosition& pos, const CBookData* bd, const CBookValue& bv, int& nSearches);

};

//inline int CBook::MinHeight() const {return minHeight;}
inline const CBoni& CBook::Boni() const { return boni;}

inline void CBookValue::MinValues() {
	vHeuristic=vBlack=vWhite=-kInfinity;
	fWLDSolved=false;
}

inline bool CBookValue::Win() const {
	return fWLDSolved && vHeuristic>0;
}

inline bool CBookValue::Draw() const {
	return fWLDSolved && vHeuristic==0;
}

inline bool CBookValue::Loss() const {
	return fWLDSolved && vHeuristic<0;
}

#pragma warning(disable: 4800) 
inline bool CBookValue::IsSolved() const {
	return fWLDSolved;
}
#pragma warning(default: 4800)

inline const CHeightInfo& CBookData::Hi() const {
	return hi;
}

inline const CBookValue& CBookData::Values() const {
	return values;
}

inline bool CBookData::IsLeaf() const {
	return !IsBranch();
}

inline int CBookData::GameCount() const {
	return nGames[0]+nGames[1];
}

inline bool CBookData::IsBranch() const {
	return fRoot && !IsSolved();
}

inline bool CBookData::IsUleaf() const {
	return !fRoot && !IsSolved();
}

inline bool CBookData::IsSolved() const {
	return values.IsSolved();
}

inline bool CBookData::IsRoot() const {
	return fRoot;
}

inline void CBookData::SetRoot(bool afRoot) {
	fRoot=afRoot;
}

inline bool CBoni::operator==(const CBoni& b) {
	return blackBonus==b.blackBonus && whiteBonus==b.whiteBonus && drawBonus==b.drawBonus;
}

inline CBoni::CBoni(): blackBonus(kMaxBonus), drawBonus(kMaxBonus), whiteBonus(-kMaxBonus) {
}

inline bool CBoni::operator!=(const CBoni& b) {
	return blackBonus!=b.blackBonus || whiteBonus!=b.whiteBonus || drawBonus!=b.drawBonus;
}

inline istream& operator>>(istream& is, CBoni& boni) {
	return is >> boni.blackBonus >> boni.drawBonus >> boni.whiteBonus;
}

#endif // _BOOK_H