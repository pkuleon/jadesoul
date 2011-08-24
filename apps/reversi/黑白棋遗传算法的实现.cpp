#include "stdafx.h"
#include "AI.h"
#include "Grid.h"
#include "Game.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "Gene.h"

#define SCALE 10 //scale为种群规模

Game* theGame=NULL;

void showTime();

int playGame(Game& game, Player& black, Player& white, int turn=BLACK) {//举办一场比赛
	//showTime();
	theGame=&game;
	game.reset(&black, &white, turn);
	Player* winner=game.start();
	theGame=NULL;
	//showTime();
	if (!winner)
		return 0;//平局
	else if (winner==&black)
		return 1;//黑胜
	else 
		return -1;//白胜
}

void init_rand() {//随机数初始化
	srand((unsigned)time(NULL));
}

float get_rand() {//获取下一个随机数，[0,1)之间
	return 1.0*rand()/RAND_MAX;
}

struct Score {//比赛结果
	int index;//基因索引
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
		cout<<"[index="<<index<<" win="<<win<<" lose="<<lose<<" draw="<<draw<<" score="<<win-lose<<" 胜率="<<1.0*win/total_comptetion<<"]"<<endl;
	}
	bool operator < (const Score& right) {
		return this->win - this->lose < right.win - right.lose;
	}
};


void processGeneticAlgorithm(float mutateRate=0.3, int mutateBitsTotal=10, float crossRate=0.6) {
	int i, j;
	typedef vector<Score> popu_type;
	popu_type population;//种群
	
	Gene g[SCALE];//种群规模20
	for (i=0; i<SCALE; ++i) {//产生初始种群
		g[i]=Gene(get_rand()*255, get_rand()*255, get_rand()*255, get_rand()*255, get_rand()*255, get_rand()*255);//随机产生20个基因
		population.push_back(Score(i));//初始化
	}
	
	
	
	Game game;
	AI a, b;
	
	ComputerPlayer robotA("A", BLACK, a);
	ComputerPlayer robotB("B", BLACK, b);
	
	int loop=0;
	do {
		cout<<"generation: "<<++loop<<endl;
		//清理上次的比赛结果信息
		for (i=0; i<population.size(); ++i) {
			population[i].win=0;
			population[i].lose=0;
			population[i].draw=0;
		}
		//循环赛
		for (i=0; i<SCALE-1; ++i) {
			for (j=i+1; j<SCALE; ++j) {
				//i和j比赛
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
		
		//按score从小到大排序
		sort(population.begin(), population.end());
		
		//最大的留着不变，其他全部仅进行遗传变异
		popu_type::iterator it, end=population.end()-1;
		for (it=population.begin(); it!=end; ++it) {
			g[(*it).index].mutate(mutateRate, mutateBitsTotal);//变异
		}
		
		int len=population.size()-1;//留下最后一名最大的
		
		for (i=0; i<len; ++i) {
			for (j=i+1; j<len; ++j) {
				g[population[i].index].cross(g[population[j].index], crossRate);
			}
		}	
		
		g[(*population.rbegin()).index].show();//显示最优个体基因
		(*population.rbegin()).show();//显示最优个体胜率
		

		cout<<" 差异="<<abs((*population.begin()).win - (*population.rbegin()).win)<<endl;

	}while(abs((*population.rbegin()).win - (*population.begin()).win) >4);
	
	popu_type::reverse_iterator rit, rend=population.rend();
	for (rit=population.rbegin(); rit!=rend; ++rit) {
		(*rit).show();
	}
}

void humanPlayWithGene(Gene& g) {//人与某个基因对局
	AI a;
	a.fromGene(g);
	ComputerPlayer machine("较优基因", WHITE, a);
	HumanPlayer human("人类", BLACK);
	Game game;
	playGame(game, human, machine);
	int aa;
	cin>>aa;
}

void processJustMutate() {//仅仅通过变异来获取较优参数
	
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
	
	cout<<"原始基因A: "<<endl;
	g.show();
	
	
	ComputerPlayer robotA("A", BLACK, a);
	ComputerPlayer robotB("B", BLACK, b);
	
	Game game;
	
	for (int i=0; i<1000; ++i) {
		cout<<"----------------------- 第 "<<i+1<<" 轮"<<endl;
		g.mutate(0.9, 10);
		b.fromGene(g);
		cout<<"新基因B: "<<endl;
		g.show();
		
		robotA.setColor(BLACK);
		robotB.setColor(WHITE);
		int AvsB=playGame(game, robotA, robotB);
		
		robotB.setColor(BLACK);
		robotA.setColor(WHITE);
		int BvsA=playGame(game, robotB, robotA);
		
		if (AvsB>=0 && BvsA<0)
			cout<<"A比B更优秀"<<endl;
		else if (AvsB<0 && BvsA>=0) {
			cout<<"B比A更优秀, 将A替换成B"<<endl;
			a.fromGene(g);
			cout<<"A的新基因: "<<endl;
			g.show();
		}
		else
			cout<<"无法判断"<<endl;
	}
}

int mainConsole(LPVOID lparam){
	init_rand();
    
    /*
    //基因突变和重组试验
	Gene x(123, 233, 111, 90, 189, 130), y(123, 233, 111, 90, 189, 130);
	cout<<"基因x,y均为："<<endl;
	x.show();
	
	y.mutate(0.9, 10);
	cout<<"基因y突变后："<<endl;
	y.show();
	cout<<"x和y发生基因重组..."<<endl;
	x.cross(y);
	cout<<"x变为:"<<endl;
	x.show();
	cout<<"y变为:"<<endl;
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
	ComputerPlayer black("电脑白雪", BLACK, a);
	ComputerPlayer white("电脑深蓝", WHITE, b);
	HumanPlayer jadesoul("冰玉之魂",WHITE);
	HumanPlayer wsl("吴胜兰",BLACK);
	
	
	Gene g1(104, 212, 34, 53, 216, 109);
	Gene g2(219, 89, 123, 49, 153, 91);
	Gene g3(128, 75, 142, 199, 239, 6);
	
	AI ai1, ai2, ai3;
	ai1.fromGene(g1);
	ai2.fromGene(g2);
	ai3.fromGene(g3);
	ComputerPlayer robot1("机器人1号", BLACK, ai1);
	ComputerPlayer robot2("机器人2号", BLACK, ai2);
	ComputerPlayer robot3("机器人3号", BLACK, ai3);
	
	
	
	
	
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