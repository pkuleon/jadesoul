#include "StdAfx.h"
#include "Game.h"
#include "Player.h"


const char* Game::gsArr[3]={"GS_PLAYING", "GS_ONE_PASSED", "GS_OVER"};
const char* Game::dsArr[8]={"上", "右上", "右", "右下", "下", "左下", "左", "左上"};

Game::Game(Player* black, Player* white, int turn){		//默认黑子先下
	initMap();
	pushMap();
	if (NULL!=black && NULL!=white)
		reset(black, white, turn);
}

void Game::reset(Player* black, Player* white, int turn){		//默认黑子先下
	popMap();
	pushMap();
	this->firstTurn=turn;
	this->turn=turn;
	this->oppo=BLACK+WHITE-turn;
	this->round=1;
	if (black) this->blackPlayer=black;
	if (white) this->whitePlayer=white;
	this->nowPlayer=(turn==BLACK)?blackPlayer:whitePlayer;
	if (black) this->blackPlayer->game=this;
	if (white) this->whitePlayer->game=this;
	this->gameState=GS_PLAYING;
	mx=my=0;
}

void Game::setTurn(int turn) {	//设置当前下子方
	this->turn=turn;
	this->oppo=BLACK+WHITE-turn;
	this->nowPlayer=(turn==BLACK)?blackPlayer:whitePlayer;
}

void Game::setMap(string mapStr) {	//设置当前棋盘棋子数据
	int total=BORDER_LEN*BORDER_LEN;
	assert(mapStr.size()>=total);
	for (int i=0; i<total; i++) {
		map[i/BORDER_LEN][i%BORDER_LEN]->state=mapStr[i]-'0';
	}
}

string Game::server(string state) {	//引擎服务
	if (state.size()!=65) return "bad state";
	string mapStr=state.substr(0, 64);
	int turn=state[64]-'0';
	assert(turn==BLACK || turn==WHITE);
	this->setMap(mapStr);
	this->setTurn(turn);

	//--------------------------------------------------
	ostringstream oss;
	oss<<"     A B C D E F G H "<<endl;
	oss<<"   +-----------------+"<<endl;
	int i, j;
	for (i=0; i<BORDER_LEN; ++i){
		oss<<(i+1)<<"  | ";
		for (j=0; j<BORDER_LEN; ++j){
			oss<<map[i][j]->state<<" ";
		}
		oss<<"|"<<endl;
	}
	oss<<"   +-----------------+"<<endl;
	oss<<"     1 2 3 4 5 6 7 8 "<<endl;
	return oss.str();
	//--------------------------------------------------
	assert(0==2);
	
	//刷新guys的数据，即此玩家的所有棋子
	if (nowPlayer->refreshGuys()==0){//此玩家棋子数为0
		return "1";//返回游戏结束信息
	}
	if (nowPlayer->findAvails()==0){//可走子位置个数为0
		return "2";//返回无子可走信息
	}
	assert(0==2);
	Grid* g=this->nowPlayer->generate();
	assert(g);
	char row=('0'+(uint)g->x);
	char col=('0'+(uint)g->y);
	return string()+row+col;
}


void Game::initMap(){	

	const int data[64]={
		0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 2, 1, 0, 0, 0, 
		0, 0, 0, 1, 2, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0
	};

	//初始化地图数据
	int i, j;
	for (i=0; i<BORDER_LEN; ++i){
		line l;
		for (j=0; j<BORDER_LEN; ++j){
			l.push_back(new Grid(data[i*BORDER_LEN+j], i+1, j+1));
		}
		map.push_back(l);
	}
	//初始化8叉链
	for (i=0; i<BORDER_LEN-1; ++i){
		for (j=0; j<BORDER_LEN; ++j){
			map[i+1][j]->u=map[i][j];
			map[i][j]->d=map[i+1][j];
		}
	}
	for (i=0; i<BORDER_LEN; ++i){
		for (j=0; j<BORDER_LEN-1; ++j){
			map[i][j+1]->l=map[i][j];
			map[i][j]->r=map[i][j+1]; 
		}
	}
	for (i=0; i<BORDER_LEN-1; ++i){
		for (j=0; j<BORDER_LEN-1; ++j){
			map[i][j]->rd=map[i+1][j+1];
			map[i+1][j+1]->lu=map[i][j];
		}
	}
	for (i=1; i<BORDER_LEN; ++i){
		for (j=0; j<BORDER_LEN-1; ++j){
			map[i][j]->ru=map[i-1][j+1];
			map[i-1][j+1]->ld=map[i][j];
		}
	} 
	//更新每个Grid的next数组
	for (i=0; i<BORDER_LEN; ++i)
		for (j=0; j<BORDER_LEN; ++j)
			map[i][j]->updateNextArray();
}



Game::~Game(void){
	int i, j;
	for (i=0; i<BORDER_LEN; ++i)
		for (j=0; j<BORDER_LEN; ++j)
			delete map[i][j];
}

Player* Game::gameOver(){
	#ifdef GUI
		glutPostRedisplay();
	#endif

	#ifdef DEBUG_DEBUG
		cout<<"+-----------+"<<endl;
		cout<<"| game over |"<<endl;
		cout<<"+-----------+"<<endl;
	#endif
	//showGameInfo();

	int i, j, blackCount=0, whiteCount=0, emptyCount=0;
	for (i=0; i<BORDER_LEN; ++i) {
		for (j=0; j<BORDER_LEN; ++j) {
			if (map[i][j]->state==BLACK) 
				++blackCount;
			else if (map[i][j]->state==WHITE) 
				++whiteCount;
			else if (map[i][j]->state==EMPTY) 
				++emptyCount;
		}
	}
	
	#ifdef PEEK
	cout<<blackPlayer->name<<"(执"<<(blackPlayer->color==1?"黑":"白")<<") 先行 以 "<<blackCount<<":"<<whiteCount;
	
	if (blackCount>whiteCount) 
		cout<<" 胜了 ";
	else if (blackCount==whiteCount) 
		cout<<" 打平 ";
	else if (blackCount<whiteCount) 
		cout<<" 败给 ";
		
	cout<<whitePlayer->name<<"(执"<<(whitePlayer->color==1?"黑":"白")<<") 尚有 "<<emptyCount<<" 子未下"<<endl;
	#endif
	
	nowPlayer=NULL;

	if (blackCount>whiteCount) 
		return blackPlayer;
	else if (blackCount<whiteCount) 
		return whitePlayer;
	else //blackCount与whiteCount相等的情况
		return NULL;
}

Player* Game::start(){
	assert(blackPlayer);
	assert(whitePlayer);
	do{
		#ifdef GUI
			glutPostRedisplay();
		#endif
		
		//显示棋局
		#ifdef DEBUG_DEBUG
			showGameInfo();
		#endif
		
		//刷新guys的数据，即此玩家的所有棋子
		if (nowPlayer->refreshGuys()==0){//此玩家棋子数为0
			
			#ifdef DEBUG_DEBUG
				cout<<nowPlayer->name<<"的棋子被吃光了"<<endl;
			#endif
			
			return this->gameOver();
		}
		if (nowPlayer->findAvails()==0){//可走子位置个数为0
			#ifdef DEBUG_DEBUG
				cout<<nowPlayer->name<<"无子可走";
			#endif
			if (gameState==GS_PLAYING){
				//若第一次出现无子可走则pass
				gameState=GS_ONE_PASSED;
				changePlayer();
				continue;
			}else if(gameState==GS_ONE_PASSED){
				//若连续第二次出现无子可走则结束游戏
				#ifdef DEBUG_DEBUG
					cout<<"连续第二次出现无子可走"<<endl;
				#endif
				gameState=GS_OVER;
				return this->gameOver();
			}
		}
		//若上次无子可走，这次有子可走，恢复游戏状态为playing
		if (gameState==GS_ONE_PASSED)
			gameState=GS_PLAYING;

		//如果程序执行到了这里，说明当前玩家一定有子可走，且游戏还没有结束，棋盘还没放满
		if(nowPlayer->play()){//玩家选择一个地方下子后，若棋盘放满了，结束游戏
			#ifdef GUI
				nowPlayer->avails.clear();
				glutPostRedisplay();
			#endif
			return gameOver();
		}
		#ifdef GUI
			nowPlayer->avails.clear();
			glutPostRedisplay();
		#endif
		changePlayer();
		
		//getchar();

	}while(!isGameOver());
	return gameOver();
}

void Game::changePlayer(){
	this->oppo=turn;
	this->turn=BLACK+WHITE-turn;
	this->nowPlayer=(turn==BLACK)?blackPlayer:whitePlayer;
	if (turn==firstTurn)
		++round;
}

void Game::showGameInfo(){
	#ifdef DEBUG_DEBUG
	cout<<"\n-------------------------------game info-------------------------"<<endl;
	cout<<"player = "<<nowPlayer->name;
	cout<<"\tround = "<<round;
	cout<<" \tturn = "<<turn;
	cout<<" \tgameState = "<<gsArr[gameState]<<endl;
	showMap();
	#endif
}

void Game::showMap(){
	#ifdef DEBUG_DEBUG
	cout<<"     A B C D E F G H "<<endl;
	cout<<"   +-----------------+"<<endl;
	int i, j;
	for (i=0; i<BORDER_LEN; ++i){
		cout<<(i+1)<<"  | ";
		for (j=0; j<BORDER_LEN; ++j){
			cout<<map[i][j]->state<<" ";
		}
		cout<<"|"<<endl;
	}
	cout<<"   +-----------------+"<<endl;
	cout<<"     1 2 3 4 5 6 7 8 "<<endl;
	#endif
}




int Game::eatFrom(Grid* grid, int turn, line* eated) {		//在g处下子，并向四周吃子，返回吃子总数，推演时只用此函数
	grid->state=turn;//先把初始棋子吃掉
	int count=0;//吃子总数
	line temp;
	int d;//方向
	int oppo=BLACK+WHITE-turn;//对手颜色
	Grid* g;
	line::iterator it, end;
	for (d=0; d<8; ++d) {//遍历8方
		
		#ifdef DEBUG_DEBUG
		cout<<"\t"<<dsArr[d];
		#endif
		
		temp.clear();
		g=grid;
		g=g->next[d];
		if (g==NULL || g->state!=oppo){//若后面有对手的子就继续，否则切换到下个方向
			#ifdef DEBUG_DEBUG
			cout<<" --换"<<endl;
			#endif
			
			continue;
		}
		for (; g!=NULL && g->state==oppo; g=g->next[d])//把后面所有连续的对方棋子放入临时列表
			temp.push_back(g);
		if (g!=NULL && g->state==turn) {//若最后未到达棋盘边界，且最后遇到的是己方棋子，则说明临时列表中这些对方棋子是被两个己方棋子夹着，可以吃掉
			assert(!temp.empty());//temp长度至少为1
			count+=temp.size();//记录累计吃子数
			
			#ifdef DEBUG_DEBUG
			cout<<" -- 本方向吃子数为 count="<<count<<endl;
			#endif
			
			end=temp.end();
			
			if (NULL!=eated) {
				for (it=temp.begin(); it!=end; ++it) {
					eated->push_back(*it);
				}
			}
			
			#ifdef DEBUG_DEBUG
			cout<<"  吃子 ";
			for (it=temp.begin(); it!=end; ++it)
				cout<<"("<<(*it)->x<<" , "<<(*it)->y<<") ";
			#endif

			for (it=temp.begin(); it!=end; ++it)//把对方棋子变成己方棋子
				(*it)->state=turn;
		}
		
		#ifdef DEBUG_DEBUG
		cout<<endl;
		#endif
	}
	return count;
}

bool Game::putChessMan(Grid* grid, int turn){		//由game调用的下子函数
	#ifdef DEBUG_DEBUG
	cout<<" 在 ("<<grid->x<<" , "<<grid->y<<") 处下子"<<endl;
	#endif
	
	int count=eatFrom(grid, turn);
	
	#ifdef DEBUG_DEBUG
	cout<<" 共吃子"<<count<<"颗"<<endl;
	#endif
	
	if (checkGameOver())
		return true;
	return false;
}


bool Game::checkGameOver(bool isThinking) {//是否棋盘下满了棋子
	int i,j;
	for (i=0; i<BORDER_LEN; ++i){
		for (j=0; j<BORDER_LEN; ++j){
			if (map[i][j]->state==EMPTY){
				return false;
			}
		}
	}
	gameState=GS_OVER;
	
	#ifdef DEBUG_DEBUG
	if (isThinking)
		cout<<"思考模式：下子后棋盘满了"<<endl;
	else
		cout<<"棋盘已下满，游戏结束"<<endl;
	#endif
	
	return true;
}

void Game::pushMap() {	//地图入栈保存，供AI推演之用
	//assert(nowPlayer);
	string s(64, '0');
	int i, j;
	for (i=0; i<BORDER_LEN; ++i)
		for (j=0; j<BORDER_LEN; ++j)
			s[i*BORDER_LEN+j]='0'+(map[i][j]->state);
	mapStack.push_back(s);
}

bool Game::popMap() {	//地图出栈，恢复到入栈时的地图，返回是否出栈成功
	assert(!mapStack.empty());
	//assert(nowPlayer);
	string& s=mapStack.back();
	int i, j;
	for (i=0; i<BORDER_LEN; ++i)
		for (j=0; j<BORDER_LEN; ++j)
			map[i][j]->state=s[i*BORDER_LEN+j]-'0';
	mapStack.pop_back();
	return true;
}