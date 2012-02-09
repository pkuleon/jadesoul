// Copyright 2001 Chris Welty
//	All Rights Reserved

#include "types.h"

#include "GetMove.h"
#include "OsObjects.h"

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
	mli.tElapsed=3.0;
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