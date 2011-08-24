#include "StdAfx.h"
#include "Player.h"
#include "Grid.h"
#include "Game.h"

const char* Player::dsArr[8]={"上", "右上", "右", "右下", "下", "左下", "左", "左上"};


Player::Player(const string& name,int color){
	this->name=name;
	this->color=color;
	game=NULL;
}

int Player::refreshGuys(){	
	//刷新记录当前玩家所有棋子的guys集合，返回游戏是否结束
	//当玩家已经一颗子也没有了时游戏结束
	GameMap& map=this->game->map;//引用游戏地图

	guys.clear();
	int i, j;
	for (i=0; i<BORDER_LEN; ++i) {
		for (j=0; j<BORDER_LEN; ++j) {
			if (map[i][j]->state==color)
				guys.insert(map[i][j]);
		}
	}
	return guys.size();
}

//查找可走子位置的集合，若无返回假
int Player::findAvails() {
	//清空avails(可下子的位置集合)
	avails.clear();

	#ifdef DEBUG_DEBUG
	cout<<"开始搜索下子位置..."<<endl;
	#endif
		
	for (gridset::iterator it=guys.begin(); it!=guys.end(); ++it) {
		int d;//方向
		int turn=color;//当前轮下子者颜色
		int oppo=BLACK+WHITE-turn;//对手颜色
		
		#ifdef DEBUG_DEBUG
		cout<<"("<<(*it)->x<<" , "<<(*it)->y<<")"<<endl;
		#endif
		
		for (d=0; d<8; ++d) {//依次遍历8个方向
			
			#ifdef DEBUG_DEBUG
			cout<<"\t"<<dsArr[d];
			#endif

			Grid *g=*it;
			g=g->next[d];
			if (g==NULL || g->state!=oppo){//若后面有对手的子就继续，否则切换到下个方向
				
				#ifdef DEBUG_DEBUG
				cout<<endl;
				#endif
				
				continue;
			}

			for (; g!=NULL && g->state==oppo; g=g->next[d]);//空循环
			
			if (g!=NULL && g->state==EMPTY) {//没有到达棋盘边界且最后到达一个空白棋格
				avails.insert(g);
				
				#ifdef DEBUG_DEBUG
				cout<<"  ---> "<<"("<<g->x<<" , "<<g->y<<")";
				#endif
			}

			#ifdef DEBUG_DEBUG
			cout<<endl;
			#endif
		}
	}
	return avails.size();
}

Player::~Player(void) 
{
}

