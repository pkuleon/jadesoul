// Copyright 2001 Chris Welty
//	All Rights Reserved

#include "types.h"

#include "GetMove.h"
#include "OsObjects.h"
#include "windows.h"
#include "../../othello.hpp"

typedef char* (__stdcall *  DealFunction)(char* state);

int Evaluate(const COsBoard& board);

int Evaluate(const COsBoard& board) {
	int net=board.NetBlackSquares();
	return board.fBlackMove?net:-net;
}


void GetMove(const COsGame& game, COsMoveListItem& mli) {
	int row, col;
	int eval, evalSubnode;
	int nBoardSize=game.mt.bt.n;
	COsBoard board;
	bool fAnti=game.mt.fAnti;

	eval=-1000;
	mli.mv.fPass=true;
	mli.dEval=0;	// return eval of 0 if we are forced to pass;
	mli.tElapsed=0.01;

	/*
	game.pos包含了当前局面的情况
	game.pos.board.sBoard描述了盘面各个位置的棋子分布
	由于sBoard是采用包含边界填充子的扩展棋盘表示法，
	除非你十分清楚这种扩展棋盘的结构，否则一般应使用game.pos.board.GetText()
	或game.pos.board.Piece()函数取得盘面情况。
	game.pos.board.fBlackMove表示当前是否轮到黑棋下，
	而game.pos.cks[game.pos.board.fBlackMove].tCurrent是你所剩余的时间。
	mli.mv就是你所要下的棋步，其中mli.mv.fPass表示是否弃权，
	如果这步棋弃权，设mli.mv.fPass = true；
	否则设mli.mv.fPass = false，
	mli.mv.row及mli.mv.col设为下棋点的行、列位置（0-基）， 
	如(row, col) = (0, 1)就表示从左上角起第1行第2列的位置。
	mli.dEval为c这步棋的估值，这是可选的项。

	*/

	int legalMoveCnt=0;
	for (row=0; row<nBoardSize; row++) for (col=0; col<nBoardSize; col++) if (game.pos.board.IsMoveLegal(COsMove(row,col))) ++legalMoveCnt;
	if (legalMoveCnt==0) return;

	char buf[66];
	memset(buf, 0, 66);

	int i=0;
	for (row=0; row<nBoardSize; row++) {
		for (col=0; col<nBoardSize; col++) {
			char p=game.pos.board.Piece(row, col);
			if (p=='*') buf[i]='1';
			else if (p=='O') buf[i]='2';
			else buf[i]='0';
			++i;
		}
	}
	buf[i]=game.pos.board.fBlackMove?'1':'2';
	cout<<"engine input="<<buf<<endl;

	string cmd_line="engine.cpp.exe ";
	cmd_line+=buf;
	FILE* child_output;
	child_output=_popen(cmd_line.c_str(),"rt");
	char* a=fgets(buf, 3, child_output);
	cout<<"engine output="<<a<<" len="<<strlen(a)<<endl;

	if (strlen(a)<2) {
		mli.mv.fPass=true;
	} else {
		row=a[0]-'1';
		col=a[1]-'1';
		cout<<"we move in "<<row<<","<<col<<endl;
		COsMove mv(row,col);
		mli.mv=mv;
		mli.dEval=0;
		mli.mv.fPass=false;
	}

	return;

	for (row=0; row<nBoardSize; row++) {
		for (col=0; col<nBoardSize; col++) {
			COsMove mv(row,col);
			if (game.pos.board.IsMoveLegal(mv)) {
				board=game.pos.board;
				board.Update(mv);
				evalSubnode=Evaluate(board);
				if (!fAnti)
					evalSubnode=-Evaluate(board);
				if (evalSubnode>eval) {
					eval=evalSubnode;
					mli.mv=mv;
					mli.dEval=eval;
				}
			}
		}
	}
}


void GetMove_old(const COsGame& game, COsMoveListItem& mli) {
	int row, col;
	int eval, evalSubnode;
	int nBoardSize=game.mt.bt.n;
	COsBoard board;
	bool fAnti=game.mt.fAnti;

	eval=-1000;
	mli.mv.fPass=true;
	mli.dEval=0;	// return eval of 0 if we are forced to pass;
	mli.tElapsed=0.01;

	/*
	game.pos包含了当前局面的情况
	game.pos.board.sBoard描述了盘面各个位置的棋子分布
	由于sBoard是采用包含边界填充子的扩展棋盘表示法，
	除非你十分清楚这种扩展棋盘的结构，否则一般应使用game.pos.board.GetText()
	或game.pos.board.Piece()函数取得盘面情况。
	game.pos.board.fBlackMove表示当前是否轮到黑棋下，
	而game.pos.cks[game.pos.board.fBlackMove].tCurrent是你所剩余的时间。
	mli.mv就是你所要下的棋步，其中mli.mv.fPass表示是否弃权，
	如果这步棋弃权，设mli.mv.fPass = true；
	否则设mli.mv.fPass = false，
	mli.mv.row及mli.mv.col设为下棋点的行、列位置（0-基）， 
	如(row, col) = (0, 1)就表示从左上角起第1行第2列的位置。
	mli.dEval为c这步棋的估值，这是可选的项。

	*/

	int error;
	DealFunction pFunc;
	HMODULE hdll_lib =::LoadLibraryEx(TEXT("engine.dll"), NULL, 0);  
	if(hdll_lib == NULL)
	{
		error = GetLastError();  
		cout<<"can not LoadLibraryEx engine.dll"<<error<<endl;  
		FreeLibrary(hdll_lib);
	}
	pFunc=(DealFunction)GetProcAddress(hdll_lib, "engine");
	if (!pFunc) {
		error = GetLastError();  
		cout<<"can not GetProcAddress deal"<<error<<endl;
		FreeLibrary(hdll_lib);
	}
	
	char buf[66];
	memset(buf, 0, 66);

	int i=0;
	for (row=0; row<nBoardSize; row++) {
		for (col=0; col<nBoardSize; col++) {
			char p=game.pos.board.Piece(row, col);
			if (p=='*') buf[i]='1';
			else if (p=='O') buf[i]='2';
			else buf[i]='0';
			++i;
		}
	}
	buf[i]=game.pos.board.fBlackMove?'1':'2';
	//strcpy(buf, "00000000000000000000100000011000002222000010000000000000000000001");
	
	cout<<"engine input="<<buf<<endl;
	char* a=pFunc(buf);
	cout<<"engine output="<<a<<endl;

	if (strlen(a)==1) {
		mli.mv.fPass=true;
	} else {
		row=a[0]-'1';
		col=a[1]-'1';
		cout<<"we move in "<<row<<","<<col<<endl;
		COsMove mv(row,col);
		mli.mv=mv;
		mli.dEval=0;
		mli.mv.fPass=false;
	}
	FreeLibrary(hdll_lib);
	return;

	for (row=0; row<nBoardSize; row++) {
		for (col=0; col<nBoardSize; col++) {
			COsMove mv(row,col);
			if (game.pos.board.IsMoveLegal(mv)) {
				board=game.pos.board;
				board.Update(mv);
				evalSubnode=Evaluate(board);
				if (!fAnti)
					evalSubnode=-Evaluate(board);
				if (evalSubnode>eval) {
					eval=evalSubnode;
					mli.mv=mv;
					mli.dEval=eval;
				}
			}
		}
	}
}


void GetMove_odk(const COsGame& game, COsMoveListItem& mli) {
	int row, col;
	int eval, evalSubnode;
	int nBoardSize=game.mt.bt.n;
	COsBoard board;
	bool fAnti=game.mt.fAnti;

	eval=-1000;
	mli.mv.fPass=true;
	mli.dEval=0;	// return eval of 0 if we are forced to pass;
	mli.tElapsed=0.01;

	/*
	game.pos包含了当前局面的情况
	game.pos.board.sBoard描述了盘面各个位置的棋子分布
	由于sBoard是采用包含边界填充子的扩展棋盘表示法，
	除非你十分清楚这种扩展棋盘的结构，否则一般应使用game.pos.board.GetText()
	或game.pos.board.Piece()函数取得盘面情况。
	game.pos.board.fBlackMove表示当前是否轮到黑棋下，
	而game.pos.cks[game.pos.board.fBlackMove].tCurrent是你所剩余的时间。
	mli.mv就是你所要下的棋步，其中mli.mv.fPass表示是否弃权，
	如果这步棋弃权，设mli.mv.fPass = true；
	否则设mli.mv.fPass = false，
	mli.mv.row及mli.mv.col设为下棋点的行、列位置（0-基）， 
	如(row, col) = (0, 1)就表示从左上角起第1行第2列的位置。
	mli.dEval为c这步棋的估值，这是可选的项。

	*/

	char buf[66];
	memset(buf, 0, 66);

	int i=0;
	for (row=0; row<nBoardSize; row++) {
		for (col=0; col<nBoardSize; col++) {
			char p=game.pos.board.Piece(row, col);
			if (p=='*') buf[i]='1';
			else if (p=='O') buf[i]='2';
			else buf[i]='0';
			++i;
		}
	}
	buf[i]=game.pos.board.fBlackMove?'1':'2';
	cout<<"engine input="<<buf<<endl;
	const char* a=othello::odk_gen_move(buf);
	cout<<"engine output="<<a<<endl;

	if (strlen(a)<2) {
		mli.mv.fPass=true;
	} else {
		row=a[0]-'1';
		col=a[1]-'1';
		cout<<"we move in "<<row<<","<<col<<endl;
		COsMove mv(row,col);
		mli.mv=mv;
		mli.dEval=0;
		mli.mv.fPass=false;
	}
	return;

	for (row=0; row<nBoardSize; row++) {
		for (col=0; col<nBoardSize; col++) {
			COsMove mv(row,col);
			if (game.pos.board.IsMoveLegal(mv)) {
				board=game.pos.board;
				board.Update(mv);
				evalSubnode=Evaluate(board);
				if (!fAnti)
					evalSubnode=-Evaluate(board);
				if (evalSubnode>eval) {
					eval=evalSubnode;
					mli.mv=mv;
					mli.dEval=eval;
				}
			}
		}
	}
}