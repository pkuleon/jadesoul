#include "StdAfx.h"
#include "ComputerPlayer.h"
#include "AI.h"

ComputerPlayer::ComputerPlayer(const string& name, int color, AI& ai):Player(name, color){
	this->ai=&ai;
}

ComputerPlayer::~ComputerPlayer(void){
	
}

bool ComputerPlayer::play(void){//玩家下子，返回游戏结束是否结束，当此玩家棋子已经全被吃空时结束

	#ifdef DEBUG_DEBUG
	cout<<"computer player = "<<name<<endl;
	cout<<avails.size()<<"个位置可下子"<<endl;
	#endif

	Grid* g=ai->anasys(*game, *this);
	if (!g){
		
		#ifdef DEBUG_DEBUG
		cout<<"ai->anasys返回NULL,结束游戏"<<endl;
		#endif
		
		this->game->gameState=GS_OVER;
		return true;
	}
	#ifdef SLEEP_WHILE_PLAY
	Sleep(300);
	#endif

	return this->game->putChessMan(g, this->color);
}

Grid* ComputerPlayer::generate(void) {	//产生走子点
	return ai->anasys(*game, *this);
}