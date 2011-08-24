#include "stdafx.h"
#include "AI.h"
#include "Grid.h"
#include "Game.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "Gene.h"

#define SCALE 10 //scaleΪ��Ⱥ��ģ

Game* theGame=NULL;

void showTime();

int playGame(Game& game, Player& black, Player& white, int turn=BLACK) {//�ٰ�һ������
	//showTime();
	theGame=&game;
	game.reset(&black, &white, turn);
	Player* winner=game.start();
	theGame=NULL;
	//showTime();
	if (!winner)
		return 0;//ƽ��
	else if (winner==&black)
		return 1;//��ʤ
	else 
		return -1;//��ʤ
}

void init_rand() {//�������ʼ��
	srand((unsigned)time(NULL));
}

float get_rand() {//��ȡ��һ���������[0,1)֮��
	return 1.0*rand()/RAND_MAX;
}

struct Score {//�������
	int index;//��������
	int win;
	int lose;
	int draw;
	Score(int index, int win=0, int lose=0, int draw=0):index(index), win(win), lose(lose), draw(draw){}
	Score(const Score& r) {
		if (this!=&r) {
			Score& l=*this;
			l.index=r.index;
			l.win=r.win;
			l.lose=r.lose;
			l.draw=r.draw;
		}
	}
	void show() {
		int total_comptetion=2*(SCALE-1);
		cout<<"[index="<<index<<" win="<<win<<" lose="<<lose<<" draw="<<draw<<" score="<<win-lose<<" ʤ��="<<1.0*win/total_comptetion<<"]"<<endl;
	}
	bool operator < (const Score& right) {
		return this->win - this->lose < right.win - right.lose;
	}
};


void processGeneticAlgorithm(float mutateRate=0.3, int mutateBitsTotal=10, float crossRate=0.6) {
	int i, j;
	typedef vector<Score> popu_type;
	popu_type population;//��Ⱥ
	
	Gene g[SCALE];//��Ⱥ��ģ20
	for (i=0; i<SCALE; ++i) {//������ʼ��Ⱥ
		g[i]=Gene(get_rand()*255, get_rand()*255, get_rand()*255, get_rand()*255, get_rand()*255, get_rand()*255);//�������20������
		population.push_back(Score(i));//��ʼ��
	}
	
	
	
	Game game;
	AI a, b;
	
	ComputerPlayer robotA("A", BLACK, a);
	ComputerPlayer robotB("B", BLACK, b);
	
	int loop=0;
	do {
		cout<<"generation: "<<++loop<<endl;
		//�����ϴεı��������Ϣ
		for (i=0; i<population.size(); ++i) {
			population[i].win=0;
			population[i].lose=0;
			population[i].draw=0;
		}
		//ѭ����
		for (i=0; i<SCALE-1; ++i) {
			for (j=i+1; j<SCALE; ++j) {
				//i��j����
				a.fromGene(g[i]);
				b.fromGene(g[j]);
				
				robotA.setColor(BLACK);
				robotB.setColor(WHITE);
				int AvsB=playGame(game, robotA, robotB);
				
				robotB.setColor(BLACK);
				robotA.setColor(WHITE);
				int BvsA=playGame(game, robotB, robotA);
				
				if (AvsB>0) {
					++population[i].win;
					++population[j].lose;
				} else if (AvsB<0) {
					++population[i].lose;
					++population[j].win;
				} else {
					++population[i].draw;
					++population[j].draw;
				}
				
				if (BvsA>0) {
					++population[i].lose;
					++population[j].win;
				} else if (BvsA<0) {
					++population[i].win;
					++population[j].lose;
				} else {
					++population[i].draw;
					++population[j].draw;
				}
			}		
		}
		
		//��score��С��������
		sort(population.begin(), population.end());
		
		//�������Ų��䣬����ȫ���������Ŵ�����
		popu_type::iterator it, end=population.end()-1;
		for (it=population.begin(); it!=end; ++it) {
			g[(*it).index].mutate(mutateRate, mutateBitsTotal);//����
		}
		
		int len=population.size()-1;//�������һ������
		
		for (i=0; i<len; ++i) {
			for (j=i+1; j<len; ++j) {
				g[population[i].index].cross(g[population[j].index], crossRate);
			}
		}	
		
		g[(*population.rbegin()).index].show();//��ʾ���Ÿ������
		(*population.rbegin()).show();//��ʾ���Ÿ���ʤ��
		

		cout<<" ����="<<abs((*population.begin()).win - (*population.rbegin()).win)<<endl;

	}while(abs((*population.rbegin()).win - (*population.begin()).win) >4);
	
	popu_type::reverse_iterator rit, rend=population.rend();
	for (rit=population.rbegin(); rit!=rend; ++rit) {
		(*rit).show();
	}
}

void humanPlayWithGene(Gene& g) {//����ĳ������Ծ�
	AI a;
	a.fromGene(g);
	ComputerPlayer machine("���Ż���", WHITE, a);
	HumanPlayer human("����", BLACK);
	Game game;
	playGame(game, human, machine);
	int aa;
	cin>>aa;
}

void processJustMutate() {//����ͨ����������ȡ���Ų���
	
	//104, 212, 34, 53, 216, 109
	//219, 89, 123, 49, 153, 91
	//128, 75, 142, 199, 239, 6
	//123, 65, 130, 122, 116, 51
	//Gene g(104, 212, 34, 53, 216, 109);
	//Gene g(219, 89, 123, 49, 153, 91);
	//Gene g(128, 75, 142, 199, 239, 6);
	//Gene g(186, 182, 85, 93, 28, 84);
	//Gene g(10,85,112,69,165,16);
	//Gene g(169, 202, 8, 115, 248, 79);
	
	//Gene g(71, 125, 190, 139, 74, 23);
	//Gene g(244, 46, 17, 97, 129, 213);
	
	Gene g(0, 241, 178, 26, 71, 143);
	AI a;
	a.fromGene(g);
	
	humanPlayWithGene(g);
	
	return;
	
	AI b;
	b.fromGene(g);
	
	cout<<"ԭʼ����A: "<<endl;
	g.show();
	
	
	ComputerPlayer robotA("A", BLACK, a);
	ComputerPlayer robotB("B", BLACK, b);
	
	Game game;
	
	for (int i=0; i<1000; ++i) {
		cout<<"----------------------- �� "<<i+1<<" ��"<<endl;
		g.mutate(0.9, 10);
		b.fromGene(g);
		cout<<"�»���B: "<<endl;
		g.show();
		
		robotA.setColor(BLACK);
		robotB.setColor(WHITE);
		int AvsB=playGame(game, robotA, robotB);
		
		robotB.setColor(BLACK);
		robotA.setColor(WHITE);
		int BvsA=playGame(game, robotB, robotA);
		
		if (AvsB>=0 && BvsA<0)
			cout<<"A��B������"<<endl;
		else if (AvsB<0 && BvsA>=0) {
			cout<<"B��A������, ��A�滻��B"<<endl;
			a.fromGene(g);
			cout<<"A���»���: "<<endl;
			g.show();
		}
		else
			cout<<"�޷��ж�"<<endl;
	}
}

int mainConsole(LPVOID lparam){
	init_rand();
    
    /*
    //����ͻ�����������
	Gene x(123, 233, 111, 90, 189, 130), y(123, 233, 111, 90, 189, 130);
	cout<<"����x,y��Ϊ��"<<endl;
	x.show();
	
	y.mutate(0.9, 10);
	cout<<"����yͻ���"<<endl;
	y.show();
	cout<<"x��y������������..."<<endl;
	x.cross(y);
	cout<<"x��Ϊ:"<<endl;
	x.show();
	cout<<"y��Ϊ:"<<endl;
	y.show();
	*/
	
	
	
	processJustMutate(); 
	//processGeneticAlgorithm();
	
	return 0;
	
	//int aa;
	//cin>>aa;
	//cout<<endl;
	
	
	
	AI a(0.5, 0.5, 0.5, 0.5, 0.5, 0.5);
	AI b(0.5, 0.5, 0.5, 0.5, 0.5, 0.5);
	ComputerPlayer black("���԰�ѩ", BLACK, a);
	ComputerPlayer white("��������", WHITE, b);
	HumanPlayer jadesoul("����֮��",WHITE);
	HumanPlayer wsl("��ʤ��",BLACK);
	
	
	Gene g1(104, 212, 34, 53, 216, 109);
	Gene g2(219, 89, 123, 49, 153, 91);
	Gene g3(128, 75, 142, 199, 239, 6);
	
	AI ai1, ai2, ai3;
	ai1.fromGene(g1);
	ai2.fromGene(g2);
	ai3.fromGene(g3);
	ComputerPlayer robot1("������1��", BLACK, ai1);
	ComputerPlayer robot2("������2��", BLACK, ai2);
	ComputerPlayer robot3("������3��", BLACK, ai3);
	
	
	
	
	
	Game game;
	
	robot1.setColor(BLACK);
	robot2.setColor(WHITE);
	playGame(game, robot1, robot2);
	robot2.setColor(BLACK);
	robot1.setColor(WHITE);
	playGame(game, robot2, robot1);
	
	
	robot1.setColor(BLACK);
	robot3.setColor(WHITE);
	playGame(game, robot1, robot3);
	robot3.setColor(BLACK);
	robot1.setColor(WHITE);
	playGame(game, robot3, robot1);
	
	robot2.setColor(BLACK);
	robot3.setColor(WHITE);
	playGame(game, robot2, robot3);
	robot3.setColor(BLACK);
	robot2.setColor(WHITE);
	playGame(game, robot3, robot2);
	
	//playGame(game, wsl, white);
	//
	//playGame(game, black, white);
	//
	//white.toggleColor();
	//black.toggleColor();
	//
	//playGame(game, white, black);

	int aa;
	cin>>aa;
	cout<<endl;

	return 0;
}


#include "openglgui.h"