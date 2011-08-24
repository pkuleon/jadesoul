#include "StdAfx.h"
#include "ComputerPlayer.h"
#include "AI.h"

ComputerPlayer::ComputerPlayer(const string& name, int color, AI& ai):Player(name, color){
	this->ai=&ai;
}

ComputerPlayer::~ComputerPlayer(void){
	
}

bool ComputerPlayer::play(void){//������ӣ�������Ϸ�����Ƿ������������������Ѿ�ȫ���Կ�ʱ����

	#ifdef DEBUG_DEBUG
	cout<<"computer player = "<<name<<endl;
	cout<<avails.size()<<"��λ�ÿ�����"<<endl;
	#endif

	Grid* g=ai->anasys(*game, *this);
	if (!g){
		
		#ifdef DEBUG_DEBUG
		cout<<"ai->anasys����NULL,������Ϸ"<<endl;
		#endif
		
		this->game->gameState=GS_OVER;
		return true;
	}
	#ifdef SLEEP_WHILE_PLAY
	Sleep(300);
	#endif

	return this->game->putChessMan(g, this->color);
}

Grid* ComputerPlayer::generate(void) {	//�������ӵ�
	return ai->anasys(*game, *this);
}