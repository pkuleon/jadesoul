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
	GameMap map;	//代表游戏地图，由vector构成的二维Grid指针容器
	Player* blackPlayer;	//黑棋玩家指针
	Player* whitePlayer;	//白棋玩家指针
	Player* nowPlayer;	//当前玩家指针
	//使用mx, my记录人类玩家点选下子位置
	int mx;
	int my;
private:
	int firstTurn;		//记录先下子者
	int turn;			//当前玩家颜色
	int oppo;			//当前对手颜色
	int round;			//当前轮
	int gameState;	//记录游戏状态 (GS_*)
	vector<string> mapStack;		//用来保存和恢复地图的地图栈(元素为64字节长的字符串)，推演用
private:
	void initMap();	//初始化地图
public:
	Game(Player* balck=NULL, Player* white=NULL, int turn=BLACK);	//构造函数，建立一个游戏
	void reset(Player* balck=NULL, Player* white=NULL, int turn=BLACK);//重置
	~Game(void);
	inline bool isGameOver(){return gameState==GS_OVER;}	//判断游戏是否结束
	Player* gameOver();		//游戏结束处理，返回赢家指针，若平局返回NULL，由start()调用
	Player* start();				//开始游戏，返回赢家指针，若平局返回NULL
	void changePlayer();		//轮换玩家
	void showGameInfo();	//显示当前游戏信息
	void showMap();			//显示地图
	int eatFrom(Grid* grid, int turn, line* eated=NULL);	//只从下子点向四周吃子，不管游戏是否结束，用于分析，返回吃子个数,若传入eated,则将所吃的所有子放入其中
	bool putChessMan(Grid* grid, int turn);	//返回游戏是否结束，若棋盘放满则游戏结束
	bool checkGameOver(bool isThinking=false);	//检查游戏是否因为满子而该结束，AI分析时isThinking必须为真
	void pushMap(void);			//地图入栈保存，供AI推演之用
	bool popMap();			//地图出栈，恢复到入栈时的地图，返回是否出栈成功
	void setMap(string mapStr);		//设置当前棋盘棋子数据
	void setTurn(int turn);		//设置当前下子方
	string server(string state);	//引擎服务
	inline int getMapStackSize() {
		return mapStack.size();
	}
	inline int getRound() {return round;}
};
