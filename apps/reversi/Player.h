#pragma once
#include "Grid.h"
#include "Game.h"
//�������


class Player{
friend class Game;
friend class AI;
private:
	static const char* dsArr[8];
protected:
	string name;		//�������
	int color;			//���������ɫ
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
	int refreshGuys();	//ˢ�¼�¼��ǰ����������ӵ�guys���ϣ����ؼ�������
	int findAvails();	//���ҿ�����λ�õļ��ϣ����ؿ�����λ�ø���
	virtual bool play()=0;	//������ӣ�������Ϸ�����Ƿ������������������Ѿ�ȫ���Կ�ʱ����
	virtual Grid* generate()=0;	//���Ӳ���
};
