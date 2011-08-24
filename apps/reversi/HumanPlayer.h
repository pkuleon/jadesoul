#pragma once
#include "player.h"

class Player;

class HumanPlayer : public Player{
public:
	HumanPlayer(const string& name, int color);
	~HumanPlayer(void);
	bool play();	//玩家下子，返回游戏结束是否结束，当此玩家棋子已经全被吃空时结束
	Grid* generate(void){return NULL;}	//走子产生
};
