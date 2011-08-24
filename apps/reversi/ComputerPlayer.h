#pragma once
#include "player.h"

class Player;

class ComputerPlayer : public Player{
friend class AI;
private:
	AI* ai;
public:
	ComputerPlayer(const string& name, int color, AI& ai);
	~ComputerPlayer(void);
	bool play();	//在游戏未结束且玩家有地方下子的前提下，玩家下子，返回游戏结束是否结束，若棋盘放满则游戏结束
	Grid* generate(void);
};
