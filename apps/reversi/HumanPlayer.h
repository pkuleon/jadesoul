#pragma once
#include "player.h"

class Player;

class HumanPlayer : public Player{
public:
	HumanPlayer(const string& name, int color);
	~HumanPlayer(void);
	bool play();	//������ӣ�������Ϸ�����Ƿ������������������Ѿ�ȫ���Կ�ʱ����
	Grid* generate(void){return NULL;}	//���Ӳ���
};
