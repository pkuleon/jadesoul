#include "StdAfx.h"
#include "Game.h"
#include "Player.h"


const char* Game::gsArr[3]={"GS_PLAYING", "GS_ONE_PASSED", "GS_OVER"};
const char* Game::dsArr[8]={"��", "����", "��", "����", "��", "����", "��", "����"};

Game::Game(Player* black, Player* white, int turn){		//Ĭ�Ϻ�������
	initMap();
	pushMap();
	if (NULL!=black && NULL!=white)
		reset(black, white, turn);
}

void Game::reset(Player* black, Player* white, int turn){		//Ĭ�Ϻ�������
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

void Game::setTurn(int turn) {	//���õ�ǰ���ӷ�
	this->turn=turn;
	this->oppo=BLACK+WHITE-turn;
	this->nowPlayer=(turn==BLACK)?blackPlayer:whitePlayer;
}

void Game::setMap(string mapStr) {	//���õ�ǰ������������
	int total=BORDER_LEN*BORDER_LEN;
	assert(mapStr.size()>=total);
	for (int i=0; i<total; i++) {
		map[i/BORDER_LEN][i%BORDER_LEN]->state=mapStr[i]-'0';
	}
}

string Game::server(string state) {	//�������
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
	
	//ˢ��guys�����ݣ�������ҵ���������
	if (nowPlayer->refreshGuys()==0){//�����������Ϊ0
		return "1";//������Ϸ������Ϣ
	}
	if (nowPlayer->findAvails()==0){//������λ�ø���Ϊ0
		return "2";//�������ӿ�����Ϣ
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

	//��ʼ����ͼ����
	int i, j;
	for (i=0; i<BORDER_LEN; ++i){
		line l;
		for (j=0; j<BORDER_LEN; ++j){
			l.push_back(new Grid(data[i*BORDER_LEN+j], i+1, j+1));
		}
		map.push_back(l);
	}
	//��ʼ��8����
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
	//����ÿ��Grid��next����
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
	cout<<blackPlayer->name<<"(ִ"<<(blackPlayer->color==1?"��":"��")<<") ���� �� "<<blackCount<<":"<<whiteCount;
	
	if (blackCount>whiteCount) 
		cout<<" ʤ�� ";
	else if (blackCount==whiteCount) 
		cout<<" ��ƽ ";
	else if (blackCount<whiteCount) 
		cout<<" �ܸ� ";
		
	cout<<whitePlayer->name<<"(ִ"<<(whitePlayer->color==1?"��":"��")<<") ���� "<<emptyCount<<" ��δ��"<<endl;
	#endif
	
	nowPlayer=NULL;

	if (blackCount>whiteCount) 
		return blackPlayer;
	else if (blackCount<whiteCount) 
		return whitePlayer;
	else //blackCount��whiteCount��ȵ����
		return NULL;
}

Player* Game::start(){
	assert(blackPlayer);
	assert(whitePlayer);
	do{
		#ifdef GUI
			glutPostRedisplay();
		#endif
		
		//��ʾ���
		#ifdef DEBUG_DEBUG
			showGameInfo();
		#endif
		
		//ˢ��guys�����ݣ�������ҵ���������
		if (nowPlayer->refreshGuys()==0){//�����������Ϊ0
			
			#ifdef DEBUG_DEBUG
				cout<<nowPlayer->name<<"�����ӱ��Թ���"<<endl;
			#endif
			
			return this->gameOver();
		}
		if (nowPlayer->findAvails()==0){//������λ�ø���Ϊ0
			#ifdef DEBUG_DEBUG
				cout<<nowPlayer->name<<"���ӿ���";
			#endif
			if (gameState==GS_PLAYING){
				//����һ�γ������ӿ�����pass
				gameState=GS_ONE_PASSED;
				changePlayer();
				continue;
			}else if(gameState==GS_ONE_PASSED){
				//�������ڶ��γ������ӿ����������Ϸ
				#ifdef DEBUG_DEBUG
					cout<<"�����ڶ��γ������ӿ���"<<endl;
				#endif
				gameState=GS_OVER;
				return this->gameOver();
			}
		}
		//���ϴ����ӿ��ߣ�������ӿ��ߣ��ָ���Ϸ״̬Ϊplaying
		if (gameState==GS_ONE_PASSED)
			gameState=GS_PLAYING;

		//�������ִ�е������˵����ǰ���һ�����ӿ��ߣ�����Ϸ��û�н��������̻�û����
		if(nowPlayer->play()){//���ѡ��һ���ط����Ӻ������̷����ˣ�������Ϸ
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




int Game::eatFrom(Grid* grid, int turn, line* eated) {		//��g�����ӣ��������ܳ��ӣ����س�������������ʱֻ�ô˺���
	grid->state=turn;//�Ȱѳ�ʼ���ӳԵ�
	int count=0;//��������
	line temp;
	int d;//����
	int oppo=BLACK+WHITE-turn;//������ɫ
	Grid* g;
	line::iterator it, end;
	for (d=0; d<8; ++d) {//����8��
		
		#ifdef DEBUG_DEBUG
		cout<<"\t"<<dsArr[d];
		#endif
		
		temp.clear();
		g=grid;
		g=g->next[d];
		if (g==NULL || g->state!=oppo){//�������ж��ֵ��Ӿͼ����������л����¸�����
			#ifdef DEBUG_DEBUG
			cout<<" --��"<<endl;
			#endif
			
			continue;
		}
		for (; g!=NULL && g->state==oppo; g=g->next[d])//�Ѻ������������ĶԷ����ӷ�����ʱ�б�
			temp.push_back(g);
		if (g!=NULL && g->state==turn) {//�����δ�������̱߽磬������������Ǽ������ӣ���˵����ʱ�б�����Щ�Է������Ǳ������������Ӽ��ţ����ԳԵ�
			assert(!temp.empty());//temp��������Ϊ1
			count+=temp.size();//��¼�ۼƳ�����
			
			#ifdef DEBUG_DEBUG
			cout<<" -- �����������Ϊ count="<<count<<endl;
			#endif
			
			end=temp.end();
			
			if (NULL!=eated) {
				for (it=temp.begin(); it!=end; ++it) {
					eated->push_back(*it);
				}
			}
			
			#ifdef DEBUG_DEBUG
			cout<<"  ���� ";
			for (it=temp.begin(); it!=end; ++it)
				cout<<"("<<(*it)->x<<" , "<<(*it)->y<<") ";
			#endif

			for (it=temp.begin(); it!=end; ++it)//�ѶԷ����ӱ�ɼ�������
				(*it)->state=turn;
		}
		
		#ifdef DEBUG_DEBUG
		cout<<endl;
		#endif
	}
	return count;
}

bool Game::putChessMan(Grid* grid, int turn){		//��game���õ����Ӻ���
	#ifdef DEBUG_DEBUG
	cout<<" �� ("<<grid->x<<" , "<<grid->y<<") ������"<<endl;
	#endif
	
	int count=eatFrom(grid, turn);
	
	#ifdef DEBUG_DEBUG
	cout<<" ������"<<count<<"��"<<endl;
	#endif
	
	if (checkGameOver())
		return true;
	return false;
}


bool Game::checkGameOver(bool isThinking) {//�Ƿ���������������
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
		cout<<"˼��ģʽ�����Ӻ���������"<<endl;
	else
		cout<<"��������������Ϸ����"<<endl;
	#endif
	
	return true;
}

void Game::pushMap() {	//��ͼ��ջ���棬��AI����֮��
	//assert(nowPlayer);
	string s(64, '0');
	int i, j;
	for (i=0; i<BORDER_LEN; ++i)
		for (j=0; j<BORDER_LEN; ++j)
			s[i*BORDER_LEN+j]='0'+(map[i][j]->state);
	mapStack.push_back(s);
}

bool Game::popMap() {	//��ͼ��ջ���ָ�����ջʱ�ĵ�ͼ�������Ƿ��ջ�ɹ�
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