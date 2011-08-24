#pragma once
#include "Grid.h"
#include "Player.h"

class Player;

class Game{
friend class ComputerPlayer;
friend class HumanPlayer;
private:
	static const char* gsArr[3];
	static const char* dsArr[8];
public:
	GameMap map;	//������Ϸ��ͼ����vector���ɵĶ�άGridָ������
	Player* blackPlayer;	//�������ָ��
	Player* whitePlayer;	//�������ָ��
	Player* nowPlayer;	//��ǰ���ָ��
	//ʹ��mx, my��¼������ҵ�ѡ����λ��
	int mx;
	int my;
private:
	int firstTurn;		//��¼��������
	int turn;			//��ǰ�����ɫ
	int oppo;			//��ǰ������ɫ
	int round;			//��ǰ��
	int gameState;	//��¼��Ϸ״̬ (GS_*)
	vector<string> mapStack;		//��������ͻָ���ͼ�ĵ�ͼջ(Ԫ��Ϊ64�ֽڳ����ַ���)��������
private:
	void initMap();	//��ʼ����ͼ
public:
	Game(Player* balck=NULL, Player* white=NULL, int turn=BLACK);	//���캯��������һ����Ϸ
	void reset(Player* balck=NULL, Player* white=NULL, int turn=BLACK);//����
	~Game(void);
	inline bool isGameOver(){return gameState==GS_OVER;}	//�ж���Ϸ�Ƿ����
	Player* gameOver();		//��Ϸ������������Ӯ��ָ�룬��ƽ�ַ���NULL����start()����
	Player* start();				//��ʼ��Ϸ������Ӯ��ָ�룬��ƽ�ַ���NULL
	void changePlayer();		//�ֻ����
	void showGameInfo();	//��ʾ��ǰ��Ϸ��Ϣ
	void showMap();			//��ʾ��ͼ
	int eatFrom(Grid* grid, int turn, line* eated=NULL);	//ֻ�����ӵ������ܳ��ӣ�������Ϸ�Ƿ���������ڷ��������س��Ӹ���,������eated,�����Ե������ӷ�������
	bool putChessMan(Grid* grid, int turn);	//������Ϸ�Ƿ�����������̷�������Ϸ����
	bool checkGameOver(bool isThinking=false);	//�����Ϸ�Ƿ���Ϊ���Ӷ��ý�����AI����ʱisThinking����Ϊ��
	void pushMap(void);			//��ͼ��ջ���棬��AI����֮��
	bool popMap();			//��ͼ��ջ���ָ�����ջʱ�ĵ�ͼ�������Ƿ��ջ�ɹ�
	void setMap(string mapStr);		//���õ�ǰ������������
	void setTurn(int turn);		//���õ�ǰ���ӷ�
	string server(string state);	//�������
	inline int getMapStackSize() {
		return mapStack.size();
	}
	inline int getRound() {return round;}
};
