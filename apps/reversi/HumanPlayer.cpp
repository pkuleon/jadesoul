#include "StdAfx.h"
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(const string& name, int color):Player(name, color){
}

HumanPlayer::~HumanPlayer(void){
}

bool HumanPlayer::play(void){
	#ifdef DEBUG_DEBUG
		cout<<"now HumanPlayer ��"<<name<<endl;
	#endif
	assert(!avails.empty());
	#ifdef GUI
		glutPostRedisplay();
	#endif
	int x, y;
	do{
		#ifdef GUI
			cout<<"�ȴ�������� '"<<name<<"' ���ʵ���λ�õ��"<<endl;
			while (game->mx==0 && game->my==0);
			x=game->mx;
			y=game->my;
			game->mx=0;
			game->my=0;
		#else
			cout<<avails.size()<<"��λ�ÿ����ӣ�����������λ�ã�";
			cin>>x>>y;
		#endif
	}while(!(x>=1 && x<=BORDER_LEN && y>=1 && y<=BORDER_LEN && \
		find(avails.begin(), avails.end(), game->map[x-1][y-1])!=avails.end() ));
	return game->putChessMan(game->map[x-1][y-1], color);
}
