// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#include "Pos2All.h"
#include "BitBoard.h"
#include "Utils.h"
#include "Cache.h"
#include "Evaluator.h"
#include "Debug.h"
#include <ctype.h>
#include <stdio.h>
#include "NodeStats.h"
#include "Patterns.h"
#include "Book.h"
#include "options.h"
#include "TreeDebug.h"
#include "MPCStats.h"
#include <algorithm>
#include "Moves.h"
#include "FastFlip.h"
#include "QPosition.h"
#include <iomanip>
#include "math.h"
#include "Timing.h"
#include <fstream>

// debugging defines
#define CHECK_SOLVER 0	// if true, check each NovelloSolve result using endgame.c
#define CHECK_CONSISTENCY 0 // if true, check bitboard and patterns after each MakeMoveK and UndoMoveK

const int potMobAdd=0;
const int potMobShift=1;

// position capture info
const bool fCapturePositions=false;
const int cpLeftShift=21;
extern FILE* cpFile;
extern int nCapturedPositions;
int nCaptureWait=0;

// book search depths
const int kBookReadDepth=6;	// maximum depth to read from book
const int kBookWriteDepth=1; // maximum depth to write to book
extern int hBookRead, hBookWrite;
const int nAbortCheck=1<<14; // check for aborts every few evals

// search params
const int khSortDefault=3;
extern int hSort;
int hSolveNoParity=6;
extern int hNegascout;
CEvaluator* evaluator;

// debugging constants
const bool fCNAPrintEvents = false;
const bool fCNAPrintTree = false;
const bool fCNAPrintPositions = false;
extern int nEmptyCNAPrint;
extern bool fPrintTimeUsed;
extern bool fPrintWLD;
const bool fPrintBookReads=false;
extern int* nBookReads;
extern bool fPrintMoveSearch;

u4 holeParity;

/////////////////////////////////////////////////////////
// Initialization routines
////////////////////////////////////////////////////////


typedef unsigned char u1;
typedef unsigned long u4;

class CInitPos2 {
public:
	static void Init();
	static void Clean();

	CInitPos2() {Init();};
	~CInitPos2() {Clean();};
protected:
	static bool fInit;
	static void InitNewHash();
	static void InitHashLine(i4* hashtable, i4& hash, bool fCenter2=false);
} initPos2;

bool CInitPos2::fInit=false;

i4 hash1[6561], hash2[6561], hash3[6561], hash4[6561], 
	hash5[6561], hash6[6561], hash7[6561], hash0[6561];

void CInitPos2::Init() {
	if (!fInit) {
		// initialize position capture info
		if (fCapturePositions) {
			string fn(fnBaseDir);
			fn+="captured.pos";
			cpFile=fopen(fn.c_str(),"a+b");
			if (!cpFile)
				fprintf(stderr, "Can't open cpFile!!!\n");
			SetRandomCapture();
		}
		// Initialize active table for edges and diagonals
		InitNewHash();
		fInit=true;
	}
}

void CInitPos2::InitHashLine(i4* hashtable, i4& hash, bool fCenter2) {
	int i;
	for (i=0; i<6561; i++)
		hashtable[i]=hash*(i-3280);
	hash*=6561;
}

void CInitPos2::InitNewHash() {
	i4 hash;

	hash=1;
	InitHashLine(hash0, hash);
	InitHashLine(hash1, hash);
	InitHashLine(hash2, hash);
	InitHashLine(hash3, hash, true);
	InitHashLine(hash4, hash, true);
	InitHashLine(hash5, hash);
	InitHashLine(hash6, hash);
	InitHashLine(hash7, hash);
}

void CInitPos2::Clean() {
	if (fInit) {
		fInit=false;
	}
}

/////////////////////////////////////////////////////////
// lookup tables used to calculate minimal reflection
////////////////////////////////////////////////////////

class CBookInit {
public:
	CBookInit();
} bookInit;

int configToRconfig[6561];

CBookInit::CBookInit(){
	int config, rconfig;
	int trits[16];

	for (config=0; config<6561; config++) {
		ConfigToTrits(config,8,trits);
		rconfig=TritsToRConfig(trits,8);
		configToRconfig[config]=rconfig;
	}
}

class CReflection  {
public:
	union {
		u1 u1s[16];
		u2 u2s[8];
		u4 u4s[4];
	};

	CReflection& operator=(const CReflection&r2);
};

inline bool operator<(const CReflection& r1, const CReflection& r2) {
	if (r1.u4s[0]!=r2.u4s[0])
		return r1.u4s[0]<r2.u4s[0];
	if (r1.u4s[1]!=r2.u4s[1])
		return r1.u4s[1]<r2.u4s[1];
	if (r1.u4s[2]!=r2.u4s[2])
		return r1.u4s[2]<r2.u4s[2];
	return r1.u4s[3]<r2.u4s[3];
}

inline CReflection& CReflection::operator=(const CReflection& r2) {
	u4s[0]=r2.u4s[0];
	u4s[1]=r2.u4s[1];
	u4s[2]=r2.u4s[2];
	u4s[3]=r2.u4s[3];

	return *this;
}


///////////////////////////////////////////////////////////////////////////////
// hash calculations
///////////////////////////////////////////////////////////////////////////////

u4 Hash() {
	int hash;
	hash=hash0[configs[0]] + hash1[configs[1]] +
		hash2[configs[2]] + hash3[configs[3]] +
		hash4[configs[4]] + hash5[configs[5]] +
		hash6[configs[6]] + hash7[configs[7]];
	return hash;
}

///////////////////////////////////////////////////////////////////////////////
// position variables
///////////////////////////////////////////////////////////////////////////////

extern CCache* cache;

// 'global variables' stored here for customer routines but passed as parameters by internal routines
int nEmpty_, nDiscDiff_;
bool fBlackMove_;


// initialize position.
void Initialize() {
	Initialize("...........................O*......*O...........................", true);
}

// inputs:
//	text representing the board
// updates global variables:
//	nEmpty_ - number of empty squares on the board
//	nDiscDiff_ - mover squares-opponent squares
void Initialize(const char* sBoard, bool fBlackMove) {
	int square, direction, pattern, value;
	TConfig* pConfig;

	// clear configs
	for (pattern=0; pattern<=knPats; pattern++)
		configs[pattern]=0;
	nDiscDiff_=nEmpty_=0;

	// add each square to the appropriate configs
	for (square=0; square<NN; square++) {
		value=TextToValue(sBoard[square]);
		// calculate nDiscDiff and nEmpty.
		if(SIGNED_CONFIGS)
			nDiscDiff_+=value;
		else
			nDiscDiff_+=value-1;
		if (value==EMPTY)
			nEmpty_++;

		for (direction=0; direction<4; direction++) {
			pConfig=sdToPConfig[square][direction];
			switch(value) {
			case 0:
				break;
			case 1:
				*pConfig+=sdToValue[square][direction];
				break;
			case -1:
				*pConfig-=sdToValue[square][direction];
				break;
			case 2:
				*pConfig+=sdToValue[square][direction]+sdToValue[square][direction];
				break;
			default:
				QSSERT(0);
			}
		}
	}

	fBlackMove_=fBlackMove;
	if (!fBlackMove)
		nDiscDiff_=-nDiscDiff_;

	CEmpty::Initialize(sBoard);
	bb.Initialize(sBoard, fBlackMove_);
}

void Initialize(const CBitBoard& bb, bool fBlackMove) {
	char sBoard[NN+1];

	bb.GetSBoardNormalized(sBoard, fBlackMove);
	Initialize(sBoard, fBlackMove);
}


///////////////////////////////////////////////////////////////////////////////
// Move routines
///////////////////////////////////////////////////////////////////////////////

// Play a move on the board. mc-' ' is square number from 0..63
//	will probably crash if mc is not valid.
// return true if mc is valid.
bool PlayMove(TMoveCode mc, int fPass) {
	int pass, square;

	square=mc-' ';

	// sometimes a square of -1 is a pass:
	if (square==-1 && !fPass) {
		pass=PassIfBB();
		return !pass;
	}
	else if (square>=NN | square<0)
		return false;

	// pass before the move if needed (or return false, depending on passCode)
	if (fPass & 1) {
		pass=PassIfBB();
		if (pass==2) {
			return false;
		}
	}

	// check move validity
	if(!ValidEmptyMove(fBlackMove_,square)) {
		return false;
	}

	// make the move
	MakeMoveBB(square);

	// pass after the move if needed
	if (fPass&2) {
		PassIfBB();
	}

	// all done
	return true;
}


// Play a move on the board. mc-' ' is square number from 0..63
//	will probably crash if mc is not valid.
// return true if mc is valid.
bool PlayMoveBB(TMoveCode mc, int fPass) {
	int pass, square;

	square=mc-' ';

	if (square>=NN | square<0)
		return false;

	// pass before the move if needed (or return false, depending on passCode)
	if (fPass & 1) {
		pass = PassIfBB();
		if (pass==2) {
			return false;
		}
	}

	// check move validity
	if(!ValidEmptyMove(fBlackMove_,square)) {
		return false;
	}

	// make the move
	MakeMoveBB(square);

	// pass after the move if needed
	if (fPass&2) {
		PassIfBB();
	}

	// all done
	return true;
}

bool PlayMoves(TMoveList mvs, int nMoves, int fPass) {
		while (nMoves--)
		if (!PlayMove(*mvs++, fPass))
			return false;
	return true;
}

// Pass if there is no valid move
// return 0: no pass, 1: player passed but opponent had a move, 2:player and opponent both passed
//	fBlackMove is inverted in cases 1 and 2.
int PassIfBB() {
	CMoves moves;
	return CalcMovesAndPassBB(moves);
}

int ValidEmptyMove(bool fBlackMove, int square) {
	CEmpty* em;

	// check that the square is empty
	// if so,return ValidMove()
	for (em=emptyHead.next; em!=emEOL; em=em->next)	{
		if (em->square==square)
			return ValidMove(fBlackMove, square);
	}

	// square is not empty
	return false;
}

// make a move on the board. Update fBlackMove and remove the square from the empty list.
// precondition: this is a legal move
void MakeMoveBB(int square, int& nFlipped, CUndoInfo& ui) {
	nFlipped=GetCountAndFlipBB(fBlackMove_, square, ui);
#ifdef _DEBUG
	if(!nFlipped) {
		Print();
		char buf[65];
		cout << "Board Text: " << GetText(buf) << "\n";
		printf("move %c%c flips no discs\n",ColText(square),RowText(square));
		QSSERT(0);
	}
#endif
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-(nFlipped+nFlipped+1+nDiscDiff_);
	nEmpty_--;
	CEmpty::RemoveParity(square);
	bb.InvertColors();
	nBBFlips++;
#if CHECBB_CONSISTENCY
	CheckConsistency();
#endif
}

void MakeMoveBB(int square) {
	CUndoInfo ui;
	int nFlipped;

	MakeMoveBB(square, nFlipped, ui);
}

void MakeMoveAndPassBB(CMove move, int& nFlipped, CUndoInfo& ui, int& pass) {
	CMoves moves;

	MakeMoveBB(move.Square(), nFlipped, ui);
	pass=CalcMovesAndPassBB(moves);
}

// undo a move on the board.
// inputs:
//		square - square number of the previous move
//		nFlipped - number of discs flipped by the previous move
//		ui - undo information from the previous move
// side effects:
//		Update configs, configsBB, fBlackMove_, nDiscDiff_, nEmpty_, and remove the square from the empty list.
// output:
//		undo info needed for undo info
// return:
//		the number of discs flipped (0 if not a legal move)
void UndoMoveBB(CEmpty* pem, int nFlipped, CUndoInfo& ui) {
	bb.InvertColors();
	ui.FlipBB(fBlackMove_);
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-(nFlipped+nFlipped+1+nDiscDiff_);
	nEmpty_++;
	pem->AddParity();
	QSSERT(nFlipped);
#if CHECK_CONSISTENCY
	CheckConsistency();
#endif
}

void UndoMoveBB(int square, int nFlipped, CUndoInfo& ui) {
	bb.InvertColors();
	ui.FlipBB(fBlackMove_);
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-(nFlipped+nFlipped+1+nDiscDiff_);
	nEmpty_++;
	CEmpty::AddParity(square);
	QSSERT(nFlipped);
#if CHECK_CONSISTENCY
	CheckConsistency();
#endif
}

void UndoMoveAndPassBB(CMove move, int nFlipped, CUndoInfo& ui, int& nPass) {
	if (nPass)
		UndoPassBB();
	UndoMoveBB(move.Square(), nFlipped, ui);
}

///////////////////////////////////////////////////////////////////////////////
// Debug and print routines
///////////////////////////////////////////////////////////////////////////////

void Print() {
	Print(fBlackMove_);
}

void Print(bool fBlackMove) {
	FPrint(stdout,fBlackMove);
}

void FPrint(FILE* fp) {
	FPrint(fp, fBlackMove_);
}

void FPrint(FILE* fp, bool fBlackMove) {
	int row, nColors[3];

	FPrintHeader(fp);

	nColors[0]=nColors[1]=nColors[2]=0;
	for (row=0; row<N; row++)
		FPrintRow(fp, row, configs[row], nColors);

	FPrintHeader(fp);

	fprintf(fp, "\nBlack: %d  White: %d  Empty: %d\n\n",nColors[2],nColors[0],nColors[1]);
	fprintf(fp, "%s to move\n",fBlackMove?"Black":"White");
}

void PrintConfigs() {
	int pattern=0;

	printf("R:  ");
	while (pattern<8)
		printf("%6d",configs[pattern++]);

	printf("\n/: ");
	while (pattern<19)
		printf("%6d",configs[pattern++]);

	printf("\nC: ");
	while (pattern<27)
		printf("%6d",configs[pattern++]);

	printf("\n\\: ");
	while (pattern<38)
		printf("%6d",configs[pattern++]);

	printf("\n");

	u2 ids[nPatternsJ];
	GetIDsJ(ids);
	cout << "IDs normalized for black-to-move\n";
	pattern=0;
	printf("R1:  ");
	while (pattern<4)
		printf("%6d",ids[pattern++]);

	printf("\nR2: ");
	while (pattern<8)
		printf("%6d",ids[pattern++]);

	printf("\nR3: ");
	while (pattern<12)
		printf("%6d",ids[pattern++]);

	printf("\nR4: ");
	while (pattern<16)
		printf("%6d",ids[pattern++]);

	printf("\nD8: ");
	while (pattern<18)
		printf("%6d",ids[pattern++]);

	printf("\nD7: ");
	while (pattern<22)
		printf("%6d",ids[pattern++]);

	printf("\nD6: ");
	while (pattern<26)
		printf("%6d",ids[pattern++]);

	printf("\nD5: ");
	while (pattern<30)
		printf("%6d",ids[pattern++]);

	printf("\ntriangle: ");
	while (pattern<34)
		printf("%6d",ids[pattern++]);

	printf("\n2x4: ");
	while (pattern<42)
		printf("%6d",ids[pattern++]);

	printf("\n2x5: ");
	while (pattern<50)
		printf("%6d",ids[pattern++]);

	printf("\nEdge+2x: ");
	while (pattern<54)
		printf("%6d",ids[pattern++]);

	printf("\nMobility: ");
	while (pattern<56)
		printf("%6d",ids[pattern++]);

	printf("\nPot Mob: ");
	while (pattern<58)
		printf("%6d",ids[pattern++]);

	printf("\nParity: ");
	while (pattern<59)
		printf("%6d",ids[pattern++]);

};

char* GetText(char* sBoard) {
	int row,col,sq,item,pattern;

	for (sq=row=0; row<N; row++) {
		pattern=configs[row];
		for (col=0; col<N; col++) {
			item=pattern%3;
			if (SIGNED_CONFIGS){
				if (item<-1)
					item+=3;
				else if (item>1)
					item-=3;
			}
			pattern=(pattern-item)/3;
			sBoard[sq++]=ValueToText(item);
		}
	}

	sBoard[sq]=0;
	return sBoard;
}

i1* GetItems(i1* itemsBoard) {
	int row,col,sq,item,pattern;

	for (sq=row=0; row<N; row++) {
		pattern=configs[row];
		for (col=0; col<N; col++) {
			item=pattern%3;
			if (item<-1)
				item+=3;
			else if (item>1)
				item-=3;
			pattern=(pattern-item)/3;
			itemsBoard[sq++]=item;
		}
	}

	return itemsBoard;
}

void PrintsdToValue() {
	int direction, row, col;

	printf("sdToValue table:\n\n");

	for (direction=0; direction<4; direction++) {
		printf("direction %d:\n",direction);
		for (row=0; row<N; row++) {
			for (col=0; col<N; col++) {
				printf("%5d",sdToValue[row*N+col][direction]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

void PrintSquareDirectionToPattern() {
	int direction, row, col;

	printf("squareToPatterns table:\n\n");

	for (direction=0; direction<4; direction++) {
		printf("direction %d:\n",direction);
		for (row=0; row<N; row++) {
			for (col=0; col<N; col++) {
				printf("%5d",sdToPattern[row*N+col][direction]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

///////////////////////////////////////////////////////////////////////////////
// Get flips routines
///////////////////////////////////////////////////////////////////////////////

inline void GetFlips(bool fBlackMove, int square, CUndoInfo& ui) {
	int cf0, cf1, cf2, cf3;
	TConfig** dToPConfig=sdToPConfig[square];
	CRowFlip*** dcToPrf=colorsdcToPrf[fBlackMove][square];

	// get configs
	cf0 = *(dToPConfig[0]);
	cf1 = *(dToPConfig[1]);
	cf2 = *(dToPConfig[2]);
	cf3 = *(dToPConfig[3]);

	// convert configs to black-to-move configs for lookup
	if (!fBlackMove) {
		cf0=-cf0;
		cf1=-cf1;
		cf2=-cf2;
		cf3=-cf3;
	}

	// get flips
	ui.prfs[0]=dcToPrf[0][cf0];
	ui.prfs[1]=dcToPrf[1][cf1];
	ui.prfs[2]=dcToPrf[2][cf2];
	ui.prfs[3]=dcToPrf[3][cf3];

#ifdef _DEBUG
	if (!(ui.prfs[0] && ui.prfs[1] && ui.prfs[2] && ui.prfs[3])) {
		printf("\nERR in GetFlips() at square %c%c:\n",ColText(square),RowText(square));
		Print();
		printf ("\nBitboard was:\n");
		bb.Print(fBlackMove_);
		QSSERT(0);
	}
#endif
}

int GetCountAndFlipBB(bool fBlackMove, int square, CUndoInfo& ui) {
	int nFlipped;

	GetFlips(fBlackMove, square, ui);
	nFlipped=ui.NFlipped();
	if (nFlipped)
		ui.FlipBB(fBlackMove);

	return nFlipped;
}

///////////////////////////////////////////////////////////////////
// Debug and print functions - protected
///////////////////////////////////////////////////////////////////

void FPrintHeader(FILE* fp) {
	int col;

	fprintf(fp, "  ");
	for (col=0; col<N; col++)
		fprintf(fp, "%c ",col+'A');
	fprintf(fp, "\n");
}

void FPrintRow(FILE* fp, int row, int config, int nColors[3]) {
	int col, item;

	// print row number
	fprintf(fp, "%-2d", row+1);

	// break row apart into values and print value
	for (col=0; col<N; col++) {
		item=config%3;
		if (SIGNED_CONFIGS) {
			if (item<-1)
				item+=3;
			else if (item>1)
				item-=3;
		}
		config=(config-item)/3;
		fprintf(fp, "%c ",ValueToText(item));
		nColors[item+SIGNED_CONFIGS]++;
	}

	//print row number at right of row
	fprintf(fp, "%2d\n", row+1);
}

int NovelloSolve(const CBitBoard& bb, int alpha, int beta,  bool fBlackMove) {
	// initialize the board
	Initialize(bb, fBlackMove);
	return NovelloSolve(alpha, beta, fBlackMove);
}

#define JCW_SOLVER 0
const bool fPrintStableText=false;

#include "stabn.h"

#if CHECK_SOLVER | JCW_SOLVER
#include "endgame.h"
#endif
typedef unsigned long long U8;

inline int CountBits(U8 bits) {
	u4 mask;
	u4 &b0=*(u4*)(&bits);
	u4 &b1=((u4*)(&bits))[1];

	mask=0x55555555;
	b0=(b0&mask) + ((b0&~mask)>>1);
	b1=(b1&mask) + ((b1&~mask)>>1);

	mask=0x33333333;
	b0=(b0&mask) + (b1&mask) + ((b0&~mask)>>2) + ((b1&~mask)>>2);

	mask=0x0F0F0F0F;
	b0=(b0&mask) + ((b0&~mask)>>4);

	mask=0x00FF00FF;
	b0=(b0&mask) + ((b0&~mask)>>8);

	mask=0x0000FFFF;
	b0=(b0&mask) + ((b0&~mask)>>16);

	return b0;
}

int nStableChecks=0;
int nProven=0;

int NovelloSolve(int alpha, int beta,  bool fBlackMove) {
	int value;
#if CHECK_SOLVER | JCW_SOLVER
	char sBoardText[NN+1];
#endif

	QSSERT(alpha<beta);

	// convert from novello values (kStoneValue pts/disc) to standard (1 pt/disc)
	// alpha rounded down, beta rounded up
	if (kStoneValue==128) {
		alpha>>=7;
		beta=(beta+kStoneValue-1)>>7;
	}
	else {
		if (alpha<0)
			alpha-=kStoneValue-1;
		alpha/=kStoneValue;

		if (beta>0)
			beta+=kStoneValue-1;
		beta/=kStoneValue;
	}

	QSSERT(alpha<beta);

	// solve
	CHAB hab;
	hab.nEmpty=nEmpty_;
	hab.nDiscDiff=nDiscDiff_;
	hab.alpha=alpha;
	hab.beta=beta;
	if (fBlackMove_)
		value=AB_BlackToMove(hab);
	else
		value=AB_WhiteToMove(hab);
#if CHECK_SOLVER
	CheckValue(GetText(sBoardText),alpha,beta,fBlackMove,value);
#endif
	
	if (kStoneValue==128)
		return value<<7;
	else
		return kStoneValue*value;
}

inline int CalcMoves(CMoves& moves) {
	return bb.CalcMoves(moves);
}

int TerminalValue() {
	if (kStoneValue==128)
		return nDiscDiff_<<7;
	else
		return nDiscDiff_*kStoneValue;
}

// CalcMovesAndPass - calc moves. decide if the mover needs to pass, and pass if he does
// inputs:
//	none
// outputs:
//	moves - the moves available
//	pass -	0 if the next player can move
//			1 if the next player must pass but game is not over
//			2 if both players must pass and game is over
//	If pass>0 the position is left with one move passed
//		(and you must call UndoPass before UndoMove)
int CalcMovesAndPassBase(CMoves& moves) {
	if (CalcMoves(moves))
		return 0;
	else {
		PassBase();
		if (CalcMoves(moves))
			return 1;
		else
			return 2;
	}
}

int CalcMovesAndPassBB(CMoves& moves) {
	if (CalcMoves(moves))
		return 0;
	else {
		PassBB();
		if (CalcMoves(moves))
			return 1;
		else
			return 2;
	}
}

int CalcMovesAndPassBB(CMoves& moves, const CMoves& submoves) {
	if (submoves.HasMoves()) {
		moves=submoves;
		return 0;
	}
	else {
		PassBB();
		if (CalcMoves(moves))
			return 1;
		else
			return 2;
	}
}





void TestIU() {
	int nFlipped;
	CUndoInfo ui;
	const int F5=045, F6=055;
	u8 test;
	bool test2;

	Initialize();
	MakeMoveBB(F5);

	printf("Board is:\n");
	Print();
	printf("Bitboard is:\n");
	bb.Print(fBlackMove_);
	test=bb.empty & bb.mover;
	test2=!test;
	QSSERT(!(bb.empty&bb.mover));

	MakeMoveBB(F6,nFlipped,ui);
	printf("\n%d squares flipped.\n\n",nFlipped);

	printf("Board is:\n");
	Print();
	printf("Bitboard is:\n");
	bb.Print(fBlackMove_);
	QSSERT(!(bb.empty&bb.mover));

	UndoMoveBB(F5,nFlipped,ui);
	printf("\n%d squares unflipped.\n\n",nFlipped);

	printf("Board is:\n");
	Print();
	printf("Bitboard is:\n");
	bb.Print(fBlackMove_);
	QSSERT(!(bb.empty&bb.mover));
}

int nConsistencyChecks=0;

void CheckConsistency() {
	u2 configsCheck[knPats+1];
	CBitBoard bbCheck;
	char sBoard[NN+1];
	bool fFailed;
	int nEmptyCheck, nDiscDiffCheck;
	int i;
	u8 emptiesCheck, empties;
	CEmpty* pem;

	// count number of checks to allow us to break in just before a specified check
	nConsistencyChecks++;

	// store old values
	bbCheck=bb;
	for(i=0;i<=knPats;i++)
		configsCheck[i]=configs[i];
	emptiesCheck.u4s[0]=emptiesCheck.u4s[1]=0;
	for (pem=emptyHead.next; pem!=emEOL; pem=pem->next)
		emptiesCheck.u1s[Row(pem->square)]|=1<<Col(pem->square);
	nEmptyCheck=nEmpty_;
	nDiscDiffCheck=nDiscDiff_;

	GetText(sBoard);
	Initialize(sBoard,fBlackMove_);
	empties.u4s[0]=empties.u4s[1]=0;
	for (pem=emptyHead.next; pem!=emEOL; pem=pem->next)
		empties.u1s[Row(pem->square)]|=1<<Col(pem->square);

	// check old values
	fFailed=false;
	if (empties!=emptiesCheck) {
		fFailed=true;
		printf("Empties failed! was %08X,%08X\n",emptiesCheck.u4s[0],emptiesCheck.u4s[1]);
		printf("          should be %08X,%08X\n",empties.u4s[0],empties.u4s[1]);
		printf("             xor =  %08X,%08X\n",empties.u4s[0]^emptiesCheck.u4s[0],empties.u4s[1]^emptiesCheck.u4s[1]);
	}
	if (bbCheck!=bb) {
		fFailed=true;
		printf("Bitboard failed!\n");
		printf("was\n");
		bbCheck.Print(fBlackMove_);
		printf("should be\n");
		bb.Print(fBlackMove_);
	}
	for (i=0;i<=knPats;i++)
		if(configsCheck[i]!=configs[i]) {
			fFailed=true;
			printf("configs[%d] was %d, should be %d\n",i,(int)configsCheck[i],configs[i]);
		}

	if (nEmptyCheck!=nEmpty_) {
		fFailed=true;
		printf("nEmpty_ was %d, should be %d\n",nEmptyCheck,nEmpty_);
	}
	if (nDiscDiffCheck!=nDiscDiff_) {
		fFailed=true;
		printf("nDiscDiff_ was %d, should be %d\n",nDiscDiffCheck,nDiscDiff_);
	}
	if(fFailed) {
		printf("Consistency check %d failed. Board is:\n",nConsistencyChecks);
		Print(fBlackMove_);
		QSSERT(0);
	}
}

const int jPatternToKPattern[] = {
	0,7,19,26,	// R1
	1,6,20,25,	// R2
	2,5,21,24,	// R3
	3,4,22,23,	// R4
	13,32,		// D8
	12,14,31,33,// D7
	11,15,30,34,// D6
	10,16,29,35,// D5
};

const int nJPatternToKPattern = sizeof(jPatternToKPattern)/sizeof(int);

/////////////////////////////////////////////////////////////
// Valuation routines
/////////////////////////////////////////////////////////////

// Calculate the ids of the two corner patterns for which we have the four edge patterns.
//	Store the ids in ids[0], ids[1].
void IdsTrianglePatternsJ(u2* ids, int pattern1, int pattern2, int pattern3, int pattern4) {
	TConfig config1, config2, config3, config4;
	u4 configsTriangle;

	// get edge patterns
	config1=configs[pattern1];
	config2=configs[pattern2];
	config3=configs[pattern3];
	config4=configs[pattern4];

	// calculate config values
	configsTriangle=row1ToTriangle[config1]+row2ToTriangle[config2]+row3ToTriangle[config3]+row4ToTriangle[config4];

	// get configs
	config1=configsTriangle&0xFFFF;
	config2=configsTriangle>>16;
	if (!fBlackMove_) {
		config1=mapsJ[C4J].NConfigs()-1-config1;
		config2=mapsJ[C4J].NConfigs()-1-config2;
	}

	// get ids
	ids[0]=mapsJ[C4J].ConfigToID(config1);
	ids[1]=mapsJ[C4J].ConfigToID(config2);
}

// get ids for all edge patterns and store in appropriate arrays
void IdsEdgePatternsJ(u2* ids2x4, u2* ids2x5, u2* idsEdgeXX, int pattern1, int pattern2) {
	TConfig config1, config2, configXX;
	u4 configs2x5, configs2x4;

	// get row configs adjusted for side to move
	config1=configs[pattern1];
	config2=configs[pattern2];
	if (!fBlackMove_) {
		config1=6560-config1;
		config2=6560-config2;
	}

	// get pattern configs, packed
	configs2x4=row1To2x4[config1]+row2To2x4[config2];
	configs2x5=row1To2x5[config1]+row2To2x5[config2];
	configXX=config1+(config1<<1)+row2ToXX[config2];

	// store ids
	ids2x4[0]=mapsJ[C2x4J].ConfigToID(configs2x4&0xFFFF);
	ids2x4[1]=mapsJ[C2x4J].ConfigToID(configs2x4>>16);
	ids2x5[0]=mapsJ[C2x5J].ConfigToID(configs2x5&0xFFFF);
	ids2x5[1]=mapsJ[C2x5J].ConfigToID(configs2x5>>16);
	idsEdgeXX[0]=mapsJ[CR1XXJ].ConfigToID(configXX);
}

void Ids3x3Patterns(u2* ids, int pattern1, int pattern2, int pattern3) {
	u4 c2;

	TConfig config1=configs[pattern1], config2=configs[pattern2], config3=configs[pattern3];
	if (!fBlackMove_) {
		config1=6560-config1;
		config2=6560-config2;
		config3=6560-config3;
	}
	c2=row1To3x3[config1]+row2To3x3[config2]+row3To3x3[config3];
	//cout << "Row configs: " << config1 << " " << config2 << " " << config1 << " -> " << (c2&0xFFFF) << ", " << (c2>>16) << "\n";
	ids[0]=Base3ToR33ID(c2&0xFFFF);
	ids[1]=Base3ToR33ID(c2>>16);
}

void GetIDsJ(u2 ids[nPatternsJ]) {
	u2 jPattern, kPattern, pattern2, config, mapsize;
	u4 nMovesPlayer, nMovesOpponent;
	int iMap;

	// straight lines
	for (jPattern=0; jPattern<nJPatternToKPattern; jPattern++) {
		kPattern=jPatternToKPattern[jPattern];
		iMap=patternToMapJ[jPattern];
		QSSERT(mapsJ[iMap].NConfigs()==mapsK[patternToMapK[kPattern]].NConfigs());
		if (fBlackMove_)
			config=configs[kPattern];
		else
			config=mapsJ[iMap].NConfigs()-configs[kPattern]-1;
		ids[jPattern]=mapsK[iMap].ConfigToID(config);
	}

	// C4
	IdsTrianglePatternsJ(ids+30, 0, 1, 2, 3);
	IdsTrianglePatternsJ(ids+32, 7, 6, 5, 4);

	// C2x4J, etc.
	IdsEdgePatternsJ(ids+34, ids+42, ids+50, 0, 1);
	IdsEdgePatternsJ(ids+36, ids+44, ids+51, 7, 6);
	IdsEdgePatternsJ(ids+38, ids+46, ids+52,19,20);
	IdsEdgePatternsJ(ids+40, ids+48, ids+53,26,25);
	jPattern=54;

	// mobility
	// if we're not using mobility the values are set to the arbitrary
	// value of 1. (Not 0, since the evaluator might try to pass if it receives a mobility of 0)
	CalcMobility(nMovesPlayer, nMovesOpponent);

	config=nMovesPlayer;
	ids[jPattern]=config;
	jPattern++;
	config=nMovesOpponent;
	ids[jPattern]=config;
	jPattern++;

	// potential mobility
	ids[jPattern]=ids[jPattern+1]=0;
	for (pattern2=0; pattern2<38; pattern2++) {
		config=configs[pattern2];
		mapsize=mapsK[patternToMapK[pattern2]].size;
		ids[jPattern]+=configToPotMob[fBlackMove_][mapsize][config];
		ids[jPattern+1]+=configToPotMob[!fBlackMove_][mapsize][config];
	}
	if (ids[jPattern]>=63)
		ids[jPattern]=63;
	ids[jPattern]=(ids[jPattern]+potMobAdd)>>potMobShift;
	jPattern++;
	if (ids[jPattern]>=63)
		ids[jPattern]=63;
	ids[jPattern]=(ids[jPattern]+potMobAdd)>>potMobShift;
	jPattern++;

	// parity
	config=nEmpty_&1;
	ids[jPattern]=config;

	for (jPattern=0; jPattern<59; jPattern++)
		QSSERT(ids[jPattern]<=mapsJ[patternToMapJ[jPattern]].NIDs());

	if (false)
		for (jPattern=8; jPattern<=59; jPattern++)
			ids[jPattern]=0;
}

void GetIDsL(u2 ids[nPatternsJ]) {
	u2 lPattern, kPattern, pattern2, config, mapsize;
	u4 nMovesPlayer, nMovesOpponent;
	int iMap;

	// straight lines
	for (lPattern=0; lPattern<nJPatternToKPattern; lPattern++) {
		kPattern=jPatternToKPattern[lPattern];
		iMap=patternToMapJ[lPattern];
		QSSERT(mapsJ[iMap].NConfigs()==mapsK[patternToMapK[kPattern]].NConfigs());
		if (fBlackMove_)
			config=configs[kPattern];
		else
			config=mapsJ[iMap].NConfigs()-configs[kPattern]-1;
		ids[lPattern]=mapsK[iMap].ConfigToID(config);
	}

	// C4
	IdsTrianglePatternsJ(ids+30, 0, 1, 2, 3);
	IdsTrianglePatternsJ(ids+32, 7, 6, 5, 4);

	// C2x4J, etc.
	IdsEdgePatternsJ(ids+34, ids+42, ids+50, 0, 1);
	IdsEdgePatternsJ(ids+36, ids+44, ids+51, 7, 6);
	IdsEdgePatternsJ(ids+38, ids+46, ids+52,19,20);
	IdsEdgePatternsJ(ids+40, ids+48, ids+53,26,25);

	// C3x3
	Ids3x3Patterns(ids+54,0,1,2);
	Ids3x3Patterns(ids+56,7,6,5);
	lPattern=58;

	// mobility
	// if we're not using mobility the values are set to the arbitrary
	// value of 1. (Not 0, since the evaluator might try to pass if it receives a mobility of 0)
	CalcMobility(nMovesPlayer, nMovesOpponent);

	config=nMovesPlayer;
	ids[lPattern]=config;
	lPattern++;
	config=nMovesOpponent;
	ids[lPattern]=config;
	lPattern++;

	// potential mobility
	ids[lPattern]=ids[lPattern+1]=0;
	for (pattern2=0; pattern2<38; pattern2++) {
		config=configs[pattern2];
		mapsize=mapsK[patternToMapK[pattern2]].size;
		ids[lPattern]+=configToPotMob[fBlackMove_][mapsize][config];
		ids[lPattern+1]+=configToPotMob[!fBlackMove_][mapsize][config];
	}
	if (ids[lPattern]>=63)
		ids[lPattern]=63;
	ids[lPattern]=(ids[lPattern]+potMobAdd)>>potMobShift;
	lPattern++;
	if (ids[lPattern]>=63)
		ids[lPattern]=63;
	ids[lPattern]=(ids[lPattern]+potMobAdd)>>potMobShift;
	lPattern++;

	// parity
	config=nEmpty_&1;
	ids[lPattern]=config;

	for (lPattern=0; lPattern<63; lPattern++)
		QSSERT(ids[lPattern]<=mapsL[patternToMapL[lPattern]].NIDs());
}

void SetRandomCapture() {
	nCaptureWait = (rand()*20000)/(RAND_MAX + 1);
}

// fastest-first adjustment
inline void ValueAdjust(u4 mp, int iff, CValue& result) {
	// standard boring
	result+=(mp<<iff);
}

#ifdef OLD
inline int CalcMobilityScan(bool fBlackMove, u4& nmp, u4& nmo) {
	CEmpty* em;
	int square;
	u4 nmb, nmw;
	nmb=nmw=0;
	int c0, c1, c2, c3;
	CRowFlip*** dcToPrf;
	TConfig** dToPConfig;

	// check for valid moves
	for (em=emptyHead.next; em!=emEOL; em=em->next)	{

		// get basic info
		square=em->square;
		dToPConfig=sdToPConfig[square];

		// get configs
		c0=*(dToPConfig[0]);
		c1=*(dToPConfig[1]);
		c2=*(dToPConfig[2]);
		c3=*(dToPConfig[3]);

		dcToPrf=colorsdcToPrf[1][square];
		if (dcToPrf[0][c0]->nFlipped+dcToPrf[1][c1]->nFlipped+dcToPrf[2][c2]->nFlipped+dcToPrf[3][c3]->nFlipped)
			nmb++;
		dcToPrf=colorsdcToPrf[0][square];
		if (dcToPrf[0][-c0]->nFlipped+dcToPrf[1][-c1]->nFlipped+dcToPrf[2][-c2]->nFlipped+dcToPrf[3][-c3]->nFlipped)
			nmw++;
	}

	if (fBlackMove) {
		nmp=nmb;
		nmo=nmw;
	}
	else {
		nmp=nmw;
		nmo=nmb;
	}
	if (nmp)
		return 0;
	else if (nmo)
		return 1;
	else
		return 2;
	nmp=nmo=1;
	return 1;
}
#endif

const bool fTableFF=true;

int ffBonus[NN];

void InitFFBonus() {
	int i;

	for (i=0; i<NN;i++) {
		if(true) {
			if (i)
				ffBonus[i]=20*kStoneValue*log(double(i));
			else
				ffBonus[i]=0;
		}
		else
			ffBonus[i]=(i<<9)-i;
	}
}

inline CValue StaticValue(int iff) {
	int pass;
	u4 nMovesPlayer, nMovesOpponent;
	CValue result;
	const bool fCheckAbort=true;
	QSSERT(evaluator);
	nEvalsQuick++;

	// check for out-of-time condition
	if (nEvalsQuick>=nAbortCheck) {
		WipeNodeStats();
		if (fCheckAbort && CheckAbortTime())
			return 0;
	}

	// capture position if we're doing that
	if (fCapturePositions && cpFile && (--nCaptureWait<0)) {
		nCapturedPositions++;
		bb.Write(cpFile);
		SetRandomCapture();
	}

	// calculate mobility
	pass=CalcMobility(nMovesPlayer, nMovesOpponent);

	// calculate value adjusting for passes
	switch(pass) {
	case 2:
		result=TerminalValue();
		break;
	case 1:
		PassBase();
		result=-evaluator->EvalMobs(nMovesOpponent, nMovesPlayer);
		UndoPassBase();
		break;
	case 0:
		result=evaluator->EvalMobs(nMovesPlayer, nMovesOpponent);
	}

	if (false) {
		// Constrain value to be in [-kMaxHeuristic, kMaxHeuristic]
		if (result<-kMaxHeuristic)
			result=-kMaxHeuristic;
		else if (result>kMaxHeuristic)
			result=kMaxHeuristic;
	}

	if (fTableFF) {
		if (iff)
			result+=ffBonus[nMovesPlayer];
	}
	else
		result+=(nMovesPlayer<<iff)-nMovesPlayer;

	return result;
}

// iDebugEval prints out debugging information in the static evaluation routine.
//	0 - none
//	1 - final value
//	2 - board, final value and all components
// only works with OLD_EVAL set to 1 (slower old version)
const int iDebugEval=0;
#define OLD_EVAL 0

inline TCoeff ConfigValue(const TCoeff* pcmove, TConfig config, int map, int offset) {
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Config: %5hu, Id: %5hu, Value: %4d\n", config, mapsJ[map].ConfigToID(config), value);
	return value;
}

inline TCoeff PatternValue(const TCoeff* pcmove, int pattern, int map, int offset) {
	TConfig config=configs[pattern];
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Pattern: %2d - Config: %5hu, Id: %5hu, Value: %4d (pms %2d, %2d)\n",
				pattern, config, mapsJ[map].ConfigToID(config), value>>16, (value>>8)&0xFF, value&0xFF);
	return value;
}

inline TCoeff ConfigPMValue(const TCoeff* pcmove, TConfig config, int map, int offset) {
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Config: %5hu, Id: %5hu, Value: %4d (pms %2d, %2d)\n",
				config, mapsJ[map].ConfigToID(config), value>>16, (value>>8)&0xFF, value&0xFF);
	return value;
}

////////////////////////////////////////
// J evaluation
////////////////////////////////////////

// offsetJs for coefficients
const int offsetJR1=0, sizeJR1=6561,
	offsetJR2=offsetJR1+sizeJR1, sizeJR2=6561,
	offsetJR3=offsetJR2+sizeJR2, sizeJR3=6561,
	offsetJR4=offsetJR3+sizeJR3, sizeJR4=6561,
	offsetJD8=offsetJR4+sizeJR4, sizeJD8=6561,
	offsetJD7=offsetJD8+sizeJD8, sizeJD7=2187,
	offsetJD6=offsetJD7+sizeJD7, sizeJD6= 729,
	offsetJD5=offsetJD6+sizeJD6, sizeJD5= 243,
	offsetJTriangle=offsetJD5+sizeJD5, sizeJTriangle=  9*6561,
	offsetJC4=offsetJTriangle+sizeJTriangle, sizeJC4=6561,
	offsetJC5=offsetJC4+sizeJC4, sizeJC5=6561*9,
	offsetJEX=offsetJC5+sizeJC5, sizeJEX=6561*9,
	offsetJMP=offsetJEX+sizeJEX, sizeJMP=64,
	offsetJMO=offsetJMP+sizeJMP, sizeJMO=64,
	offsetJPMP=offsetJMO+sizeJMO, sizeJPMP=64,
	offsetJPMO=offsetJPMP+sizeJPMP, sizeJPMO=64,
	offsetJPAR=offsetJPMO+sizeJPMO, sizeJPAR=2;

// value all the edge patterns. return the sum of the values.
TCoeff ValueEdgePatternsJ(const TCoeff* pcmove, int pattern1, int pattern2) {
	TConfig config1, config2, configXX;
	u4 configs2x5;
	TCoeff value;

	value=0;
	config1=configs[pattern1];
	config2=configs[pattern2];

	configs2x5=row1To2x5[config1]+row2To2x5[config2];
	configXX=config1+(config1<<1)+row2ToXX[config2];
	value+=ConfigValue(pcmove, configs2x5&0xFFFF, C2x5J, offsetJC5);
	value+=ConfigValue(pcmove, configs2x5>>16,    C2x5J, offsetJC5);
	value+=ConfigValue(pcmove, config1+(config1<<1)+row2ToXX[config2],CR1XXJ, offsetJEX);

	// in J-configs, the values are multiplied by 65536
	//QSSERT((value&0xFFFF)==0);
	return value;
}

// value all the triangle patterns. return the sum of the values.
TCoeff ValueTrianglePatternsJ(const TCoeff* pcmove, int pattern1, int pattern2, int pattern3, int pattern4) {
	TConfig config1, config2, config3, config4;
	u4 configsTriangle;
	TCoeff value;

	value=0;
	config1=configs[pattern1];
	config2=configs[pattern2];
	config3=configs[pattern3];
	config4=configs[pattern4];

	configsTriangle=row1ToTriangle[config1]+row2ToTriangle[config2]+row3ToTriangle[config3]+row4ToTriangle[config4];
	value+=ConfigPMValue(pcmove, configsTriangle&0xFFFF, C4J, offsetJTriangle);
	value+=ConfigPMValue(pcmove, configsTriangle>>16,    C4J, offsetJTriangle);

	return value;
}

CValue ValueJMobs(TCoeff *const pcoeffs[2], u4 nMovesPlayer, u4 nMovesOpponent) {
	TCoeff value;
	TCoeff *pcmove=pcoeffs[fBlackMove_];

	value=0;

	if (iDebugEval>1) {
		cout << "----------------------------\n";
		bb.Print(fBlackMove_);
		cout << (fBlackMove_?"Black":"White") << " to move\n\n";
	}

#if OLD_EVAL
	// rows
	value+=PatternValue(pcmove, 0, R1J, offsetJR1);
	value+=PatternValue(pcmove, 1, R2J, offsetJR2);
	value+=PatternValue(pcmove, 2, R3J, offsetJR3);
	value+=PatternValue(pcmove, 3, R4J, offsetJR4);
	value+=PatternValue(pcmove, 4, R4J, offsetJR4);
	value+=PatternValue(pcmove, 5, R3J, offsetJR3);
	value+=PatternValue(pcmove, 6, R2J, offsetJR2);
	value+=PatternValue(pcmove, 7, R1J, offsetJR1);

	// / diagonal
	value+=PatternValue(pcmove, 10, D5J, offsetJD5);
	value+=PatternValue(pcmove, 11, D6J, offsetJD6);
	value+=PatternValue(pcmove, 12, D7J, offsetJD7);
	value+=PatternValue(pcmove, 13, D8J, offsetJD8);
	value+=PatternValue(pcmove, 14, D7J, offsetJD7);
	value+=PatternValue(pcmove, 15, D6J, offsetJD6);
	value+=PatternValue(pcmove, 16, D5J, offsetJD5);

	// cols
	value+=PatternValue(pcmove, 19, R1J, offsetJR1);
	value+=PatternValue(pcmove, 20, R2J, offsetJR2);
	value+=PatternValue(pcmove, 21, R3J, offsetJR3);
	value+=PatternValue(pcmove, 22, R4J, offsetJR4);
	value+=PatternValue(pcmove, 23, R4J, offsetJR4);
	value+=PatternValue(pcmove, 24, R3J, offsetJR3);
	value+=PatternValue(pcmove, 25, R2J, offsetJR2);
	value+=PatternValue(pcmove, 26, R1J, offsetJR1);

	// \ diagonal
	value+=PatternValue(pcmove, 29, D5J, offsetJD5);
	value+=PatternValue(pcmove, 30, D6J, offsetJD6);
	value+=PatternValue(pcmove, 31, D7J, offsetJD7);
	value+=PatternValue(pcmove, 32, D8J, offsetJD8);
	value+=PatternValue(pcmove, 33, D7J, offsetJD7);
	value+=PatternValue(pcmove, 34, D6J, offsetJD6);
	value+=PatternValue(pcmove, 35, D5J, offsetJD5);
#else
	const TCoeff* const pR1 = pcmove+offsetJR1;
	value+=pR1[configs[0]] + pR1[configs[7]] + pR1[configs[19]] + pR1[configs[26]];
	const TCoeff* const pR2 = pcmove+offsetJR2;
	value+=pR2[configs[1]] + pR2[configs[6]] + pR2[configs[20]] + pR2[configs[25]];
	const TCoeff* const pR3 = pcmove+offsetJR3;
	value+=pR3[configs[2]] + pR3[configs[5]] + pR3[configs[21]] + pR3[configs[24]];
	const TCoeff* const pR4 = pcmove+offsetJR4;
	value+=pR4[configs[3]] + pR4[configs[4]] + pR4[configs[22]] + pR4[configs[23]];
	const TCoeff* const pD5 = pcmove+offsetJD5;
	value+=pD5[configs[10]] + pD5[configs[16]] + pD5[configs[29]] + pD5[configs[35]];
	const TCoeff* const pD6 = pcmove+offsetJD6;
	value+=pD6[configs[11]] + pD6[configs[15]] + pD6[configs[30]] + pD6[configs[34]];
	const TCoeff* const pD7 = pcmove+offsetJD7;
	value+=pD7[configs[12]] + pD7[configs[14]] + pD7[configs[31]] + pD7[configs[33]];
	const TCoeff* const pD8 = pcmove+offsetJD8;
	value+=pD8[configs[13]] + pD8[configs[32]];
#endif
	

	// Triangle patterns in corners
	value+=ValueTrianglePatternsJ(pcmove, 0, 1, 2, 3);
	value+=ValueTrianglePatternsJ(pcmove, 7, 6, 5, 4);

	if (iDebugEval>1)
		printf("Straight lines done. Value so far: %d.\n",value>>16);

	// Take apart packed information about pot mobilities
	int nPMO=(value>>8) & 0xFF;
	int nPMP=value&0xFF;
	if (iDebugEval>1)
		printf("Raw pot mobs: %d, %d\n", nPMO,nPMP);
	nPMO=(nPMO+potMobAdd)>>potMobShift;
	nPMP=(nPMP+potMobAdd)>>potMobShift;
	value>>=16;

	// pot mobility
	value+=ConfigValue(pcmove, nPMP, PM1J, offsetJPMP);
	value+=ConfigValue(pcmove, nPMO, PM2J, offsetJPMO);

	if (iDebugEval>1)
		printf("Potential mobility done. Value so far: %d.\n",value);

	// 2x4, 2x5, edge+2X patterns
	value+=ValueEdgePatternsJ(pcmove, 0, 1);
	value+=ValueEdgePatternsJ(pcmove, 7, 6);
	value+=ValueEdgePatternsJ(pcmove, 19, 20);
	value+=ValueEdgePatternsJ(pcmove, 26, 25);

	if (iDebugEval>1)
		printf("Corners done. Value so far: %d.\n",value);

	// mobility
	value+=ConfigValue(pcmove, nMovesPlayer, M1J, offsetJMP);
	value+=ConfigValue(pcmove, nMovesOpponent, M2J, offsetJMO);

	if (iDebugEval>1)
		printf("Mobility done. Value so far: %d.\n",value);

	// parity
	value+=ConfigValue(pcmove, nEmpty_&1, PARJ, offsetJPAR);

	if (iDebugEval>0)
		printf("Total Value= %d\n", value);

	return value;
}

#if 0 // CAN_I_REMOVE_THIS

////////////////////////////////////////
// L evaluation
////////////////////////////////////////

// offsetLs for coefficients
const offsetLR1=0, sizeLR1=6561,
	offsetLR2=offsetLR1+sizeLR1, sizeLR2=6561,
	offsetLR3=offsetLR2+sizeLR2, sizeLR3=6561,
	offsetLR4=offsetLR3+sizeLR3, sizeLR4=6561,
	offsetLD8=offsetLR4+sizeLR4, sizeLD8=6561,
	offsetLD7=offsetLD8+sizeLD8, sizeLD7=2187,
	offsetLD6=offsetLD7+sizeLD7, sizeLD6= 729,
	offsetLD5=offsetLD6+sizeLD6, sizeLD5= 243,
	offsetLTriangle=offsetLD5+sizeLD5, sizeLTriangle=  9*6561,
	offsetLC4=offsetLTriangle+sizeLTriangle, sizeLC4=6561,
	offsetLC5=offsetLC4+sizeLC4, sizeLC5=6561*9,
	offsetLEX=offsetLC5+sizeLC5, sizeLEX=6561*9,
	offsetLC3=offsetLEX+sizeLEX, sizeLC3=6561*3,
	offsetLMP=offsetLC3+sizeLC3, sizeLMP=64,
	offsetLMO=offsetLMP+sizeLMP, sizeLMO=64,
	offsetLPMP=offsetLMO+sizeLMO, sizeLPMP=64,
	offsetLPMO=offsetLPMP+sizeLPMP, sizeLPMO=64,
	offsetLPAR=offsetLPMO+sizeLPMO, sizeLPAR=2;

// value all the edge patterns. return the sum of the values.
TCoeff ValueEdgePatternsL(const TCoeff* pcmove, int pattern1, int pattern2) {
	TConfig config1, config2, configXX;
	u4 configs2x5;
	TCoeff value;

	value=0;
	config1=configs[pattern1];
	config2=configs[pattern2];

	configs2x5=row1To2x5[config1]+row2To2x5[config2];
	configXX=config1+(config1<<1)+row2ToXX[config2];
	value+=ConfigValue(pcmove, configs2x5&0xFFFF, C2x5L, offsetLC5);
	value+=ConfigValue(pcmove, configs2x5>>16,    C2x5L, offsetLC5);
	value+=ConfigValue(pcmove, config1+(config1<<1)+row2ToXX[config2],CR1XXL, offsetLEX);

	// in L-configs, the values are multiplied by 65536
	//QSSERT((value&0xFFFF)==0);
	return value;
}

// value all the edge patterns. return the sum of the values.
TCoeff Value3x3PatternsL(const TCoeff* pcmove, int pattern1, int pattern2, int pattern3) {
	u4 c2=row1To3x3[configs[pattern1]]+row2To3x3[configs[pattern2]]+row3To3x3[configs[pattern3]];
	return ConfigValue(pcmove, c2&0xFFFF, C3x3L, offsetLC3)+ConfigValue(pcmove, c2>>16, C3x3L, offsetLC3);
}

// value all the triangle patterns. return the sum of the values.
TCoeff ValueTrianglePatternsL(const TCoeff* pcmove, int pattern1, int pattern2, int pattern3, int pattern4) {
	TConfig config1, config2, config3, config4;
	u4 configsTriangle;
	TCoeff value;

	value=0;
	config1=configs[pattern1];
	config2=configs[pattern2];
	config3=configs[pattern3];
	config4=configs[pattern4];

	configsTriangle=row1ToTriangle[config1]+row2ToTriangle[config2]+row3ToTriangle[config3]+row4ToTriangle[config4];
	value+=ConfigPMValue(pcmove, configsTriangle&0xFFFF, C4L, offsetLTriangle);
	value+=ConfigPMValue(pcmove, configsTriangle>>16,    C4L, offsetLTriangle);

	return value;
}

CValue ValueLMobs(TCoeff *const pcoeffs[2], u4 nMovesPlayer, u4 nMovesOpponent) {
	TCoeff value;
	TCoeff *pcmove=pcoeffs[fBlackMove_];

	value=0;

	if (iDebugEval>1) {
		cout << "----------------------------\n";
		bb.Print(fBlackMove_);
		cout << (fBlackMove_?"Black":"White") << " to move\n\n";
	}

#if OLD_EVAL
	// rows
	value+=PatternValue(pcmove, 0, R1L, offsetLR1);
	value+=PatternValue(pcmove, 1, R2L, offsetLR2);
	value+=PatternValue(pcmove, 2, R3L, offsetLR3);
	value+=PatternValue(pcmove, 3, R4L, offsetLR4);
	value+=PatternValue(pcmove, 4, R4L, offsetLR4);
	value+=PatternValue(pcmove, 5, R3L, offsetLR3);
	value+=PatternValue(pcmove, 6, R2L, offsetLR2);
	value+=PatternValue(pcmove, 7, R1L, offsetLR1);

	// / diagonal
	value+=PatternValue(pcmove, 10, D5L, offsetLD5);
	value+=PatternValue(pcmove, 11, D6L, offsetLD6);
	value+=PatternValue(pcmove, 12, D7L, offsetLD7);
	value+=PatternValue(pcmove, 13, D8L, offsetLD8);
	value+=PatternValue(pcmove, 14, D7L, offsetLD7);
	value+=PatternValue(pcmove, 15, D6L, offsetLD6);
	value+=PatternValue(pcmove, 16, D5L, offsetLD5);

	// cols
	value+=PatternValue(pcmove, 19, R1L, offsetLR1);
	value+=PatternValue(pcmove, 20, R2L, offsetLR2);
	value+=PatternValue(pcmove, 21, R3L, offsetLR3);
	value+=PatternValue(pcmove, 22, R4L, offsetLR4);
	value+=PatternValue(pcmove, 23, R4L, offsetLR4);
	value+=PatternValue(pcmove, 24, R3L, offsetLR3);
	value+=PatternValue(pcmove, 25, R2L, offsetLR2);
	value+=PatternValue(pcmove, 26, R1L, offsetLR1);

	// \ diagonal
	value+=PatternValue(pcmove, 29, D5L, offsetLD5);
	value+=PatternValue(pcmove, 30, D6L, offsetLD6);
	value+=PatternValue(pcmove, 31, D7L, offsetLD7);
	value+=PatternValue(pcmove, 32, D8L, offsetLD8);
	value+=PatternValue(pcmove, 33, D7L, offsetLD7);
	value+=PatternValue(pcmove, 34, D6L, offsetLD6);
	value+=PatternValue(pcmove, 35, D5L, offsetLD5);
#else
	const TCoeff* const pR1 = pcmove+offsetLR1;
	value+=pR1[configs[0]] + pR1[configs[7]] + pR1[configs[19]] + pR1[configs[26]];
	const TCoeff* const pR2 = pcmove+offsetLR2;
	value+=pR2[configs[1]] + pR2[configs[6]] + pR2[configs[20]] + pR2[configs[25]];
	const TCoeff* const pR3 = pcmove+offsetLR3;
	value+=pR3[configs[2]] + pR3[configs[5]] + pR3[configs[21]] + pR3[configs[24]];
	const TCoeff* const pR4 = pcmove+offsetLR4;
	value+=pR4[configs[3]] + pR4[configs[4]] + pR4[configs[22]] + pR4[configs[23]];
	const TCoeff* const pD5 = pcmove+offsetLD5;
	value+=pD5[configs[10]] + pD5[configs[16]] + pD5[configs[29]] + pD5[configs[35]];
	const TCoeff* const pD6 = pcmove+offsetLD6;
	value+=pD6[configs[11]] + pD6[configs[15]] + pD6[configs[30]] + pD6[configs[34]];
	const TCoeff* const pD7 = pcmove+offsetLD7;
	value+=pD7[configs[12]] + pD7[configs[14]] + pD7[configs[31]] + pD7[configs[33]];
	const TCoeff* const pD8 = pcmove+offsetLD8;
	value+=pD8[configs[13]] + pD8[configs[32]];
#endif
	

	// Triangle patterns in corners
	value+=ValueTrianglePatternsL(pcmove, 0, 1, 2, 3);
	value+=ValueTrianglePatternsL(pcmove, 7, 6, 5, 4);

	if (iDebugEval>1)
		printf("Straight lines done. Value so far: %d.\n",value>>16);

	// Take apart packed information about pot mobilities
	int nPMO=(value>>8) & 0xFF;
	int nPMP=value&0xFF;
	if (iDebugEval>1)
		printf("Raw pot mobs: %d, %d\n", nPMO,nPMP);
	nPMO=(nPMO+potMobAdd)>>potMobShift;
	nPMP=(nPMP+potMobAdd)>>potMobShift;
	value>>=16;

	// pot mobility
	value+=ConfigValue(pcmove, nPMP, PM1L, offsetLPMP);
	value+=ConfigValue(pcmove, nPMO, PM2L, offsetLPMO);

	if (iDebugEval>1)
		printf("Potential mobility done. Value so far: %d.\n",value);

	// 2x4, 2x5, edge+2X patterns
	value+=ValueEdgePatternsL(pcmove, 0, 1);
	value+=ValueEdgePatternsL(pcmove, 7, 6);
	value+=ValueEdgePatternsL(pcmove, 19, 20);
	value+=ValueEdgePatternsL(pcmove, 26, 25);

	if (iDebugEval>1)
		printf("Edge Patterns done. Value so far: %d.\n",value);

	// 3x3 patterns
	value+=Value3x3PatternsL(pcmove, 0, 1, 2);
	value+=Value3x3PatternsL(pcmove, 7, 6, 5);

	if (iDebugEval>1)
		printf("Corners done. Value so far: %d.\n",value);

	// mobility
	value+=ConfigValue(pcmove, nMovesPlayer, M1L, offsetLMP);
	value+=ConfigValue(pcmove, nMovesOpponent, M2L, offsetLMO);

	if (iDebugEval>1)
		printf("Mobility done. Value so far: %d.\n",value);

	// parity
	value+=ConfigValue(pcmove, nEmpty_&1, PARL, offsetLPAR);

	if (iDebugEval>0)
		printf("Total Value= %d\n", value);

	return value;
}

#endif // can I remove this

///////////////////////////////////////////////////////////////////////
// Tree Search Routines
// Unless otherwise specified, all value routines have the following
//	inputs, outputs, and preconditions:
// Inputs:
//	height - height of search
//	alpha, beta - bounds of search are (alpha, beta).
//	moves - moves available from the position
//	iPrune - pruning index for MPC cuts, or 0 for no cuts
// Outputs:
//	best - best move and value
// Preconditions:
//	The position must be set
//	hBookRead must be set (to greater than height if no book)
//	There must be a valid move from the position
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
// ValueBookCacheOrTree - Get value from book, or call ValueCacheOrTree()
//	Returns:
//	 the value
//	Outputs:
//	 Does not output best move and value since book won't contain best move
///////////////////////////////////////////////////////////////////////

CValue ValueBookCacheOrTree(int height, CValue alpha, CValue beta, CMoves& moves,
						   int iPrune) {

	CMVK best;

	if (height>=hBookRead) {
		CHeightInfo hi(height, iPrune, false);
		if (book->Load(bb, hi, alpha, beta, best.value, nEmpty_)) {
			if (fPrintBookReads)
				printf("br%d!",height-hBookRead);
			return best.value;
		}
	}

	ValueCacheOrTree(height, alpha, beta, moves, iPrune, best);
	return best.value;
}

///////////////////////////////////////////////////////////////////////
// ValueCacheOrTree - check the cache for the move. If there, return.
//		If not, call ValueTree and save the result to cache.
///////////////////////////////////////////////////////////////////////

void ValueCacheOrTree(int height, CValue alpha, CValue beta, CMoves& moves,
						   int iPrune, CMoveValue& best) {
	CValue searchAlpha, searchBeta;
	CCacheData* cd;
	u4 hash;
	int iffCache;

	// initialize search values
	searchAlpha=alpha;
	searchBeta=beta;

	if (height<3)
		iPrune=false;

	// Check if the position is in cache
	const bool fNewHash=false;
	if (fNewHash)
		hash=Hash();
	else
		hash=bb.Hash();

	if (cd=cache->FindOld(bb, hash)) {
		// cutoff if we can; otherwise update searchAlpha, searchBeta and set the best move
		if (cd->Load(height, iPrune, nEmpty_, alpha, beta, best.move, iffCache, searchAlpha, searchBeta, best.value)) {
			TREEDEBUG_CACHE;
			return;
		}
		QSSERT(searchAlpha<searchBeta);
		moves.SetBest(best.move);
		QSSERT(bb==cd->Board());	// consistency check
	}
	else {
		iffCache=0;
	}


	// Do a tree search
	if (!iPrune || !MPCCheck(height, searchAlpha, searchBeta, moves, iPrune, best))
		ValueTree(height, searchAlpha, searchBeta, moves, iffCache, iPrune, best);
	
	// Add to cache if we can
	if (!abortRound) {
		cd=cache->FindNew(bb,hash,height,iPrune, nEmpty_);
		if (cd) {
			cd->Store(height, iPrune, nEmpty_, best.move, iffCache, searchAlpha, searchBeta, best.value);
			#ifdef _DEBUG
			QSSERT(cd->Board()==bb);
			CalcMoves(moves);
			QSSERT(moves.IsValid(best.move));
			#endif
		}
	}
}

///////////////////////////////////////////////////////////////////////
// MPCCheck - determine whether we should do forward pruning.
// returns:
//	true if we forward pruned. False otherwise
///////////////////////////////////////////////////////////////////////

inline bool MPCCheck(int height, CValue alpha, CValue beta, const CMoves& moves, int& iPrune, CMoveValue& best) {
	CMoves movesCopy;
	float sd, cr;
	CValue bound;
	int nCut, hCheck;

	if (mpcs->BadCutHeight(height))
		return false;

	for (nCut=0; nCut<2; nCut++) {
		if (!mpcs->GetParams(height, nEmpty_, nCut, iPrune, hCheck, sd, cr))
			break;

		// check alpha cutoff
		if (alpha>-kInfinity) {
			bound=(alpha-sd)*cr;
			movesCopy=moves;
			ValueCacheOrTree(hCheck, bound-1, bound, movesCopy, 0, best);
			if (abortRound)
				return false;
			if (best.value<bound) {
				best.value=alpha;
				return true;
			}
		}
		
		// check beta cutoff
		if (beta<kInfinity) {
			bound=(beta+sd)*cr;
			movesCopy=moves;
			ValueCacheOrTree(hCheck, bound, bound+1, movesCopy, 0, best);
			if (abortRound)
				return false;
			if (best.value>bound) {
				best.value=beta;
				return true;
			}
		}
	}

	return false;
}

///////////////////////////////////////////////////////////////////////
// ValueTreeNoSort - value a move by tree search, with no move sorting
// Inputs:
//	hChild - height of child node
///////////////////////////////////////////////////////////////////////

inline void ValueTreeNoSort(int height, int hChild, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best) {
	CValue vChild, vSearchAlpha;
	CMove	move;
	int nFlipped;
	CUndoInfo ui;

	// alpha-beta search 
	while(moves.GetNext(move)) {
		vSearchAlpha=Max(best.value, alpha);
		MakeMoveBB(move.Square(), nFlipped,ui);
		TREEDEBUG_BEFORE;
		vChild=ChildValue(hChild, vSearchAlpha, beta, iPrune);
		TREEDEBUG_AFTER;
		UndoMoveBB(move.Square(),nFlipped,ui);
		if (abortRound)
			return;
		if (vChild>best.value) {
			best.move=move;
			best.value=vChild;
			if (best.value>=beta) {
				TREEDEBUG_CUTOFF;
				return;
			}
		}
	}
}

///////////////////////////////////////////////////////////////////////
// ValueMove - value a move.
// Inputs:
//	move - the move
//	best - the best move and value; best.value must be initialized to -kInfinity before calling for the first time
//	fNegascout - true if we should negascout first
// Outputs:
//	best - updated best move and value
// Returns:
//	true if there's a cutoff or the round was aborted
// Comments:
//	This routine uses Max(alpha, best) as the alpha for the following search.
///////////////////////////////////////////////////////////////////////

inline bool ValueMove(int height, int hChild, CValue alpha, CValue beta, CMove& move, CMoves& moves, int iPrune,
									  bool fNegascout, CMoveValue& best) {

	CValue vChild, vNegascout, vSearchAlpha;
	int nFlipped;
	CUndoInfo ui;

	// initialization
	vSearchAlpha=Max(best.value, alpha);

	// make move
	MakeMoveBB(move.Square(), nFlipped,ui);

	// get value,possibly using negascout
	if (fNegascout) {
		TREEDEBUG_BEFORE_NEGASCOUT;
		vChild=ChildValue(hChild, vSearchAlpha, vSearchAlpha+1, iPrune);
		TREEDEBUG_AFTER_NEGASCOUT;
		vNegascout=vChild; // save value for debugging
		if (vChild>vSearchAlpha && vChild<beta) {
			TREEDEBUG_BEFORE;
			vChild=ChildValue(hChild, vSearchAlpha, beta, iPrune);
			// it may seem illogical but this appears faster than the more usual code
			// vChild=ChildValue(hChild, vChild, beta, iPrune);
			TREEDEBUG_AFTER;
		}
	}
	else {
		TREEDEBUG_BEFORE;
		vChild=ChildValue(hChild, vSearchAlpha, beta, iPrune);
		TREEDEBUG_AFTER;
	}

	// undo move
	UndoMoveBB(move.Square(),nFlipped,ui);

	// check for termination conditions
	if (abortRound)
		return true;
	if (vChild>best.value) {
		best.move=move;
		best.value=vChild;
		if (best.value>=beta) {
			TREEDEBUG_CUTOFF;
			return true;
		}
	}
	return false;
}

///////////////////////////////////////////////////////////////////////
// ValueTree - do a tree search to find the best move and value.
///////////////////////////////////////////////////////////////////////

inline void GetSearchParameters(int height, bool fHasBest, int iPrune, int& iff, int iffCache,
							 bool& fSort, bool& fSortQuick, bool& fPresearch, bool& fUseBest, bool&fNegascout) {

	// flags used in computing search parameters
	bool fSolving= height>=nEmpty_-hSolverStart;
	bool fFWSolve=fSolving && (iPrune==0);

	// search parameters
	fSort=fFWSolve || (height>=3);
	fSortQuick= height<=1;
	//fSort=true;
	//fPresearch= fFWSolve && height>=6 && !fHasBest;
	fPresearch=false;
	iff=9;
	fUseBest=fHasBest && (iffCache>=iff || !fSort);
	//fUseBest=fHasBest;
	fNegascout=height>=hNegascout;
}

inline void ValueTree(int height, CValue alpha, CValue beta, CMoves& moves, int& iffCache,
					  int iPrune, CMoveValue& best) {
	CValue vSubnode;
	CMove	move;
	int nFlipped;
	CUndoInfo ui;
	bool fSort, fSortQuick, fPresearch, fUseBest, fNegascout;
	int iff;

	GetSearchParameters(height, moves.HasBest(), iPrune, iff, iffCache, fSort, fSortQuick, fPresearch, fUseBest, fNegascout);
	best.value=-kInfinity;

	int hChild=height-1;
	int i, nMoves, nChecked=0;

	// presearch with a narrow-pass to get a best move for solving
	if (fPresearch) {
		CMoves movesPresearch=moves;
		CMoveValue mvPresearch;

		ValueTree(height, alpha, beta, movesPresearch, iffCache, 4, mvPresearch);
		moves.SetBest(mvPresearch.move);
	}

	// check best move first
	if (fUseBest) {
		moves.GetNext(move);
		bool fCutoff=ValueMove(height, hChild, alpha, beta, move, moves, iPrune, false, best);
		if (fCutoff) {
			return;
		}
		nChecked++;
	}

	// best move didn't cut off. value remaining moves
	if (fSort) {
		CMoveValue moveValues[64];
		iffCache=iff;
		CMoves submoves;
		//cout << "--- sort ---\n";
		QSSERT(moves.Consistent());
		for (nMoves=0; moves.GetNext(move); nMoves++) {
			moveValues[nMoves].move=move;
			MakeMoveBB(move.Square(), nFlipped,ui);
			if (fSortQuick) {
				CalcMoves(submoves);
				vSubnode=submoves.NMoves()<<3;
				if (CEmpty::SquareToParity(move.Square()))
					vSubnode++;
			}
			else {
				vSubnode=StaticValue(iff);
				CCacheData* pcd = cache->FindOld(bb,bb.Hash());
				if (pcd && pcd->AlphaCutoff(height-1, iPrune, nEmpty_, -beta)) {
					vSubnode-=5000;
				}
			}
			moveValues[nMoves].value=-vSubnode;
			//Print(fBlackMove_);
			//cout << "Value = " << vSubnode << "\n";
			UndoMoveBB(move.Square(),nFlipped,ui);
		}

		if (abortRound) {
			return;
		}

		sort(moveValues, moveValues+nMoves);

		// test remaining moves in order
		for (i=0; i<nMoves; i++) {
			move=moveValues[i].move;
			bool fCutoff=ValueMove(height, hChild, alpha, beta, move, moves, iPrune, fNegascout && nChecked && best.value>=alpha, best);
			if (fCutoff) {
				return;
			}
			nChecked++;
		}
	}
	else {	// not sorting
		while (moves.GetNext(move)) {
			bool fCutoff=ValueMove(height, hChild, alpha, beta, move, moves, iPrune, fNegascout && nChecked && best.value>=alpha, best);
			if (fCutoff) {
				return;
			}
			nChecked++;
		}
	}

}

///////////////////////////////////////////////////////////////////////
// Child value - return the value to the node's mover of a subposition
// inputs:
//	height - height to search subposition to
//	alpha, beta - cutoffs as values to the node's mover
//	iPrune - amount of extensions allowed
// returns:
//	child value of the subposition, or bound if cutoff
//	hBookRead must be set correctly:
//		If no book, set >= height+1.
//		If book, set to minimum height to read from book.
///////////////////////////////////////////////////////////////////////
CValue ChildValue(int height, CValue alpha, CValue beta, int iPrune) {
	CValue result;

	// Solver evaluation if near end
	if (nEmpty_<=hSolverStart) {
		if (nSNodesQuick>=(nAbortCheck<<4)) {
			WipeNodeStats();
			if (CheckAbortTime())
				return 0;
		}
		else {
			result=-NovelloSolve(-beta, -alpha, fBlackMove_);			
			QSSERT(result>-kInfinity);
			TREEDEBUG_CALLSOLVER;
			return result;
		}
	}

	// Static value if no height
	if (height<=0) {
		result=-StaticValue(0);
		QSSERT(result>-kInfinity);
	}

	// Tree-search value otherwise
	else {
		CMoves moves;
		int pass;

		pass=CalcMovesAndPassBB(moves);

		switch(pass) {
		case 0:
			result=-ValueBookCacheOrTree(height, -beta, -alpha, moves, iPrune);
			QSSERT(result>-kInfinity || abortRound);
			break;
		case 1:
			result=ValueBookCacheOrTree(height, alpha, beta, moves, iPrune);
			QSSERT(result>-kInfinity || abortRound);
			break;
		case 2:
			result=TerminalValue();
			QSSERT(result>-kInfinity);
			break;
		}

		if (pass)
			UndoPassBB();
	}

	return result;
}

///////////////////////////////////////////////////////////////////////
// ValueMulti - values a set of moves and return the best values.
// Inputs:
//	height, alpha, beta, iPrune - as above
//	nBest - number of moves to be correctly valued (e.g. 2 will make sure the top 2 moves have values calculated correctly)
//	mvs - a vector of CMoveValues. Only moves in this list will be considered. This should
//			be in order (for best performance) so pass the result from the previous height in
//	fBetaCutoff - return immediately if we have a beta-cutoff, useful for WLD solves where
//			we are only going to add the node to book anyway.
// Outputs:
//	nValued - number of moves that were successfully valued (value was exact or a beta-cutoff)
//			if alpha>-kInfinity, sets nValued to at least nBest (the first nBest were correctly valued
//			according to the alpha-cutoff).
//	mvsEvaluated - a vector of CMoveValues, sorted.
//			First will be the nValued moves that were valued, stably sorted by value,
//			then the remaining moves that suffered alpha-cutoff, in the original order from mvs
//	If we aborted, mvs and nValued will contain only moves and values completed before the abort occurred
///////////////////////////////////////////////////////////////////////

void ValueMulti(int height, CValue alpha, CValue beta, int iPrune, int nBest, const vector<CMoveValue>& mvs, bool fBetaCutoff,
				vector<CMoveValue>& mvsEvaluated, int& nValued) {
	CValue vChild, vSearchAlpha;
	CMove	move;
	int hChild,nFlipped;
	CUndoInfo ui;
	vector<CMoveValue> mvsLow;
	CMoveValue mv;
	vector<CMoveValue>::const_iterator i;
	bool fNegascout=height>=hNegascout;
	const bool fDebugPrint=false;

	if (fDebugPrint) {
		cout << "ValueMulti(" <<height<< "," <<alpha<< "," <<beta<< "," <<iPrune<< "," <<nBest<< ")\n";
		//Print();
	}

	hChild=height-1;
	mvsEvaluated.erase(mvsEvaluated.begin(), mvsEvaluated.end());

	// test moves in order
	for (i=mvs.begin(); i!=mvs.end() && !abortRound; i++) {

		// calculate the move and search alpha
		if (mvsEvaluated.size()<nBest)
			vSearchAlpha=alpha;
		else {
			vSearchAlpha=mvsEvaluated[nBest-1].value;
			if (vSearchAlpha>=beta)
				break;
		}
		move=i->move;

		if (fDebugPrint)
			cout << move << ": " ;

		// make move
		MakeMoveBB(move.Square(), nFlipped,ui);
		// get value,possibly using negascout
		if (fNegascout && vSearchAlpha>-kInfinity) {
			TREEDEBUG_BEFORE_NEGASCOUT;
			vChild=ChildValue(hChild, vSearchAlpha, vSearchAlpha+1, iPrune);
			QSSERT(vChild>-kInfinity || abortRound);
		TREEDEBUG_AFTER_NEGASCOUT;
			if (vChild>vSearchAlpha && vChild<beta) {
				TREEDEBUG_BEFORE;
				vChild=ChildValue(hChild, vChild, beta, iPrune);
				QSSERT(vChild>-kInfinity || abortRound);
				TREEDEBUG_AFTER;
			}
		}
		else {				
			TREEDEBUG_BEFORE;
			vChild=ChildValue(hChild, vSearchAlpha, beta, iPrune);
			QSSERT(vChild>-kInfinity || abortRound);
			TREEDEBUG_AFTER;
		}
		if (fDebugPrint)
			cout << vChild << "\t";

		// undo move
		UndoMoveBB(move.Square(),nFlipped,ui);

		// add to the list of values
		if (!abortRound) {
			mv.move=move;
			mv.value=vChild;
			if (vChild>vSearchAlpha) {
				if (vChild>=beta && i->value>vChild) {
					mv.value=i->value;
				}
				mvsEvaluated.insert(upper_bound(mvsEvaluated.begin(),mvsEvaluated.end(),mv),mv);
				if (fBetaCutoff && vChild>=beta)
					break;
			}
			else {
				if (i->value<vChild) {
					mv.value=i->value;
				}
				mvsLow.push_back(mv);
			}
		}
	}

	if (fDebugPrint)
		cout << "\nmvsEvaluated: " << mvsEvaluated << "\nmvsLow" << mvsLow << "\n";

	// prepare to return
	nValued=mvsEvaluated.size();
	if (nValued<nBest && !abortRound) {
		if (alpha>-kInfinity)
			nValued=nBest;
		else
			QSSERT(0);
	}
	QSSERT(abortRound || nValued>=nBest || alpha>-kInfinity);
	mvsEvaluated.insert(mvsEvaluated.end(),mvsLow.begin(),mvsLow.end());
	QSSERT(mvsEvaluated.size() || abortRound);
	// If we had a beta cutoff,some moves weren't even tried, put them last.
	mvsEvaluated.insert(mvsEvaluated.end(),i,mvs.end());
}

// set book read & write heights prior to calling Value()
void SetBookHeights(int height) {

	if(book)
		hBookRead=height-kBookReadDepth;
	else
		hBookRead=height+1;
}

void InitializeCache(u4 fNeeds) {
	// make the cache stale so it isn't blocked
	cache->SetStale();
}

void SaveIterativeResultInBook(int nBest, int nEvalOld,int nEvalNew, const vector<CMoveValue>& mvsOld, 
							   const vector<CMoveValue>& mvsNew, const CMVK& mvk, bool fFull) {
	
	// add to book
	if (book && nEmpty_>=book->NEmptyMin()) {
		CValue value;

		// find out if the root node is solved
		bool fWLDSolved=mvk.hiFull.WLDSolved(nEmpty_);
		value=nEvalNew?mvsNew[0].value:mvsOld[0].value;

		QSSERT(mvk.hiFull.Valid());
		if (fWLDSolved) {
			book->StoreLeaf(bb,mvk.hiFull,value);
		}
		else {
			CValue vCutoff=mvsOld[nBest-1].value;
			book->StoreRoot(bb,mvk.hiFull, value, vCutoff, fFull);

			// add subpositions too
			CMoves submoves;
			int i, pass, nFlipped;
			CUndoInfo ui;

			for (i=0; i<nEvalOld; i++) {
				MakeMoveAndPassBB(mvsOld[i].move, nFlipped, ui, pass);
				value=mvsOld[i].value;
				if (!pass)
					value=-value;
				book->StoreLeaf(bb, mvk.hiFull-1, value);
				UndoMoveAndPassBB(mvsOld[i].move, nFlipped, ui, pass);
			}

			// if round was aborted, add any evaluated nodes from the aborted round
			if (abortRound) {
				fWLDSolved=mvk.hiBest.WLDSolved(nEmpty_);
				for (i=0; i<nEvalNew; i++) {
					MakeMoveAndPassBB(mvsNew[i].move, nFlipped, ui, pass);
					value=mvsNew[i].value;
					if (!pass)
						value=-value;
					book->StoreLeaf(bb, mvk.hiBest-1, value);
					UndoMoveAndPassBB(mvsNew[i].move, nFlipped, ui, pass);
				}
			}
		}
	}			
}

int iffMidgame=5;

// calculate height, pruning, fWLD for next round
void IterativeValue(CMoves moves, const CCalcParams& cp, 
					const CSearchInfo& si, CMVK& mvk) {
	CHeightInfo hi(1,si.iPruneMidgame,false);
	double tElapsed;
	CValue alpha, beta;
	CNodeStats nsStart, nsEnd;
	vector<CMoveValue> mvsOld, mvsNew;
	int nEvalOld, nEvalNew;
	CMoves movesFull;
	bool fFull;	// true if we are checking all subnodes
	int nBest;
	int midpoint;
	const bool kFunkyWLD=false;

	CalcMoves(movesFull);
	fFull= movesFull==moves;

	//QSSERT(mpcs && mpcs->Valid());

	// print MPC stat static value?
	if (si.fNeeds & kNeedMPCStats)
		cout << "\t" << StaticValue(0);

	// initialize cache and book read height
	InitializeCache(si.fNeeds);

	// Initialize the move lists
	CMoveValue mv;
	mv.value=0;
	while (moves.GetNext(mv.move))
		mvsOld.push_back(mv);
	nEvalOld=0;

	// Initialize timing info
	nsStart.Read();
	cp.SetAbortTime(nsStart, nEmpty_, si.tRemaining);
	mvk.Clear();
	mvk.move.Set(-1);
	mvk.fKnown=false;

	// increase search width for rand games in midgame because of weak eval for rand games
	if (nEmpty_>36 && (si.fNeeds&kNeedRandSearch) && (si.iPruneMidgame>1))
		hi.iPrune--;

	// iterate
	while (!mvk.move.Valid() || cp.RoundOK(hi, nEmpty_, tElapsed, si.tRemaining) ) {
		if (fPrintTree) TreeDebugStartRound(hi);
		SetBookHeights(hi.height);

		// top how many moves?
		if (hi.WLDSolved(nEmpty_) && (si.fNeeds&kNeedDeviations))
			nBest=2;
		else
			nBest=1;

		// calculate search alpha, beta
		if (hi.fWLD) {
			midpoint=0;

			// if we have a value we use it to more efficiently WLD solve
			if (mvk.fKnown) {
				// if we don't need the WLD solve, do an MTD(f) round centered at the previous value
				if (kFunkyWLD && (si.fNeeds&kNeedRandSearch)) {
					midpoint=mvk.value;
					int midpointmax=kWipeout-kStoneValue;
					if (midpoint>midpointmax)
						midpoint=midpointmax;
					else if (midpoint<-midpointmax)
						midpoint=-midpointmax;
				}
				// if we do need the WLD solve, check to see if we should do WD or DL solve first
				else {
					if (!hi.iPrune && mvk.value!=0) {
						if (mvk.value<0)
							ValueMulti(hi.height, -kStoneValue, 0, hi.iPrune, nBest, mvsOld, !hi.iPrune, mvsNew, nEvalNew);
						else
							ValueMulti(hi.height, 0, kStoneValue, hi.iPrune, nBest, mvsOld, !hi.iPrune, mvsNew, nEvalNew);
					}
				}
			}
			alpha=midpoint-kStoneValue;
			beta=midpoint+kStoneValue;
		}
		else {
			alpha=-kWipeout;
			beta=kWipeout;
		}

		ValueMulti(hi.height, alpha, beta, hi.iPrune, nBest, mvsOld, !hi.iPrune, mvsNew, nEvalNew);

		// calc timing info
		nsEnd.Read();
		mvk.ns=nsEnd-nsStart;
		tElapsed=mvk.ns.Seconds();

		// update mvk
		if (nEvalNew){
			mvk.move=mvsNew[0].move;
			mvk.value=mvsNew[0].value;
			mvk.fKnown=true;
			mvk.hiBest=hi;
		}
		if (!abortRound)
			mvk.hiFull=hi;

		// special checks when calculating mpc stats
		if (si.fNeeds&kNeedMPCStats)
			printf("\t%d",mvk.value);

		// print out results for logistello comparison
		if (si.PrintSearchStats())
			cout << mvk << "\n";

		// are we done?
		// don't stop on wipeouts, we could have had an MPC cutoff
		//	and it might not really be a wipeout...
		//if (abortRound || mvsNew[0].value>=kWipeout)
		if (abortRound)
			break;

		// get parameters for next round, break if we've solved
		if(!hi.NextRound(nEmpty_,si))
			break;

		nEvalOld=nEvalNew;
		mvsOld=mvsNew;
	}

	QSSERT(mvk.move.Valid());
	//QSSERT(hi.Valid());
	SaveIterativeResultInBook(nBest, nEvalOld,nEvalNew,mvsOld,mvsNew,mvk, fFull);
	if (fPrintMoveSearch) {
		int i;
		if (nEvalNew) {
			cout << mvk.hiBest << " (" << nEmpty_ << " empty)\t";
			for (i=0; i<nEvalNew; i++) {
				cout << mvsNew[i] << "\t";
			}
			cout<<"\n";
		}
		if (abortRound) {
			cout << mvk.hiFull << " (" << nEmpty_ << " empty)\t";
			for (i=0; i<nEvalOld; i++) {
				cout << mvsOld[i] << "\t";
			cout<<"\n";
			}
		}
		cout << tElapsed << "s elapsed\n";
	}

	// calc timing info
	nsEnd.Read();
	mvk.ns=nsEnd-nsStart;
}

/////////////////////////////////////
// Forced Opening routines
/////////////////////////////////////

#include "../GDK/OsObjects.h"

typedef map<CBitBoard, CBitBoard> TForcedOpeningMap;

TForcedOpeningMap foms[2];

// Find a move based on a forced opening list. Return TRUE if this position is in the list, false otherwise
//	if the position is in the list, put the forced move in move.
bool FindForcedOpening(CMove& move) {
	TForcedOpeningMap::iterator i;
	CBitBoard bbmr=bb.MinimalReflection();
	
	i=foms[fBlackMove_].find(bbmr);
	if (i==foms[fBlackMove_].end())
		return false;

	CMoves moves;
	int nFlipped;
	CUndoInfo ui;
	bool fDone;

	CalcMoves(moves);

	// Check subnodes in turn to see if they're the one
	for (move.Set(-1); moves.GetNext(move);) {
		MakeMoveBB(move.Square(), nFlipped, ui);
		fDone=(*i).second==bb.MinimalReflection();
		UndoMoveBB(move.Square(), nFlipped, ui);
		if (fDone)
			break;
	}
	if (!fDone) {
		_ASSERT(0);
		return false;
	}
	return true;
}

void CreateForcedOpeningList(const char* fn, bool fBlackMove) {
	int i, x,y,sq, iMover;
	char sBoard[65];
	TForcedOpeningMap::iterator pfom;
	CBitBoard bbPrev;
	foms[fBlackMove].clear();

	fstream is(fn);
	COsGame game;
	while (is >> game) {
		game.posStart.board.TextGet(sBoard, iMover, true);
		Initialize(sBoard, !iMover);
		for (i=0; i<game.ml.size(); i++) {
			bbPrev=bb.MinimalReflection();
			CSGSquare(game.ml[i].mv).XYGet(x,y);
			sq=x+8*y;
			MakeMoveBB(sq);
			if (fBlackMove!=fBlackMove_) {
				pfom=foms[fBlackMove].find(bbPrev);
				if (pfom==foms[fBlackMove].end()) {
					foms[fBlackMove][bbPrev]=bb.MinimalReflection();
				}
			}
		}
	}
}

void InitForcedOpenings() {
	CreateForcedOpeningList("black.ggf", true);
	CreateForcedOpeningList("white.ggf", false);
	cerr << "Map Size: Black: " << foms[1].size() << ", White: " << foms[0].size() << "\n";
}

#define STARTMOVE 5,4	// F5

// TimedMVK - calculate a move. Inrease height until the game is
//	solved or (height>=minDepth && time>=minTime).
//	Special case if move is forced or in book.
// Inputs:
//	minDepth - minimum search height.
//	minTime - minimum search time
//	randomShift - amount of book randomness to use
//	iPrune - # of ply for selective extensions (0 or 1)
//	fValueForcedMoves - true if forced moves should be valued
//			(e.g. if adding them to the book)
// Outputs:
//	chosen - chosen move, value, and whether value is known.
// Preconditions:
//	book and cache must exist; book must be correct.
void TimedMVK(const CCalcParams& cp, const CSearchInfo& si, CMVK& mvk) {
	CMoves moves;
	CNodeStats start, end;
	int nPass;
	bool fIterativeNS=false;
	bool fBlackMoveSave=fBlackMove_;
	char sTextSave[65];
	GetText(sTextSave);

	start.Read();

	mvk.Clear();

#ifdef _DEBUG
	mvk.move.Set(-1);
#endif

	// beginning - forced move
	if (nEmpty_==60) {
		mvk.move.Set(STARTMOVE);
		mvk.fBook=true;
		QSSERT(mvk.move.Valid());
	}
	else 

	// no moves - return a pass
	if (nPass=CalcMovesAndPassBB(moves)) {
		mvk.move.Set(-1);
		if (si.fNeeds&kNeedValue) {
			switch(nPass) {
			case 2:
				mvk.value=-TerminalValue();
				mvk.fKnown=true;
				break;
			case 1:
				TimedMVK(cp, si, mvk);
				mvk.value=-mvk.value;
				break;
			default:
				QSSERT(0);
			}
		}
		UndoPassBB();
	}

	else if (FindForcedOpening(mvk.move)) {
		mvk.fKnown=false;
		mvk.fBook=true;
		mvk.value=0;
	}
	// move in book
	else if (book && book->GetRandomMove(CQPosition(bb, fBlackMove_), si, mvk)) {
		mvk.fKnown=true;
		mvk.fBook=true;
		QSSERT(mvk.move.Valid());
	}

	else {
		Initialize(sTextSave, fBlackMoveSave);
	#if _DEBUG
		CMoves moves3;
		CalcMoves(moves3);
		QSSERT(moves3==moves);
	#endif
		// only one move, and not valuing forced moves
		if (moves.NMoves()==1 && !(si.fNeeds & kNeedValue)) {
			moves.GetNext(mvk.move);
			QSSERT(mvk.move.Valid());
		}

		else {
			// value the move
			//cout << "Static value : " << StaticValue(0) << "\n";
			IterativeValue(moves, cp, si, mvk);		
			QSSERT(mvk.move.Valid());
			fIterativeNS=true;
		}
	}

	// calculate elapsed time and return
	if (!fIterativeNS) {
		end.Read();
		mvk.ns=end-start;
	}
}

////////////////////////////////////////////////////////
// Book search routines
////////////////////////////////////////////////////////

CBookData* FindInBook() {
	if (book)
		return book->FindAnyReflection(bb, nEmpty_);
	else
		return 0;
}

// Search the book
// Preconditions:
//	The book has been corrected and assigned
// returns:
//	true if we foind the position in the book
//	false if we didn't or it's unusable for some reason
//	1 if there's an error (e.g. no subnodes in book)
