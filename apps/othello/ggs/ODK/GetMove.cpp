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
	game.pos�����˵�ǰ��������
	game.pos.board.sBoard�������������λ�õ����ӷֲ�
	����sBoard�ǲ��ð����߽�����ӵ���չ���̱�ʾ����
	������ʮ�����������չ���̵Ľṹ������һ��Ӧʹ��game.pos.board.GetText()
	��game.pos.board.Piece()����ȡ�����������
	game.pos.board.fBlackMove��ʾ��ǰ�Ƿ��ֵ������£�
	��game.pos.cks[game.pos.board.fBlackMove].tCurrent������ʣ���ʱ�䡣
	mli.mv��������Ҫ�µ��岽������mli.mv.fPass��ʾ�Ƿ���Ȩ��
	����ⲽ����Ȩ����mli.mv.fPass = true��
	������mli.mv.fPass = false��
	mli.mv.row��mli.mv.col��Ϊ�������С���λ�ã�0-������ 
	��(row, col) = (0, 1)�ͱ�ʾ�����Ͻ����1�е�2�е�λ�á�
	mli.dEvalΪc�ⲽ��Ĺ�ֵ�����ǿ�ѡ���

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