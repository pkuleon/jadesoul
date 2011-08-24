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
	bool play();	//����Ϸδ����������еط����ӵ�ǰ���£�������ӣ�������Ϸ�����Ƿ�����������̷�������Ϸ����
	Grid* generate(void);
};
