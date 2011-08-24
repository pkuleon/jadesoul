#pragma once
#include "Grid.h"
#include "Game.h"
//代表玩家


class Player{
friend class Game;
friend class AI;
private:
	static const char* dsArr[8];
protected:
	string name;		//玩家名字
	int color;			//玩家棋子颜色
	gridset avails;	//my availabe positions to put the chessman
	gridset guys;		//record my chessmans
	Game* game;
public:
	Player(const string& name,int color);
	~Player(void);
	inline gridset& getAvails(){return avails;}
	inline string& getName(){return name;}
	inline int getColor(){return color;}
	inline void setColor(int color){this->color=color;}
	inline void toggleColor(){color=WHITE+BLACK-color;}
	int refreshGuys();	//刷新记录当前玩家所有棋子的guys集合，返回己方子数
	int findAvails();	//查找可走子位置的集合，返回可走子位置个数
	virtual bool play()=0;	//玩家下子，返回游戏结束是否结束，当此玩家棋子已经全被吃空时结束
	virtual Grid* generate()=0;	//走子产生
};
