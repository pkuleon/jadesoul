#include "StdAfx.h"
#include "AI.h"
#include "game.h"
#include "ComputerPlayer.h"
#include "Grid.h"
#include "Gene.h"

float AI::goBigEat(Game& game, ComputerPlayer& player, Grid* g){	//考虑一部分大食策略
	return 1;
}

void AI::fromGene(Gene& g) {
	g.gene2uchars();
	a=g.a/255.0;
	b=g.b/255.0;
	c=g.c/255.0;
	d=g.d/255.0;
	e=g.e/255.0;
	f=g.f/255.0;
}

Grid* AI::anasys(Game& game, ComputerPlayer& player){		//分析棋局，找出最佳下子位置对应的Grid指针，若无路可走返回NULL
	assert(player.avails.size()>0);
	assert(player.guys.size()>0);
	
	gridset& avails=player.avails;	//可走位置的集合

	//return *(gs.rbegin());

	
	/*
	//试验：set内部元素的顺序是否已自动排序
	set<int> gb;
	gb.insert(1);
	gb.insert(3);
	gb.insert(2);
	*/

	//若无路可走返回NULL ---> 不可能
	/*if (gs.empty())
		return NULL;*/
	
	
	//grids.clear();
	//anasysResult.clear();
	Grid * gridNow, * gridNext;
	evaluation.clear();

	//估值要考虑的各个因素
	//A部分:作为加权计算的
	int bigEat=0;//大食策略，尽量让自己多吃子
	int mobility=0;//行动力，自己越大越好，对手越小越好
	int newStablePiece=0;//新增稳定子数，即被包围在中间不容易再被吃掉的子
	
	//位置估值，包括以下两点;
	//1.所在环数，用来评估环形位置上的价值，越靠外越高
	//2.特殊位置的价值，33和边、角比较高，会让对方占领这些位置的位置比较低
	int positionValue;
	
	/*
	位置估值表
	10,	-9,	8,	4,	4,	8,	-9,	10,
	-9,	-9,	-4,	-3,	-3,	-4,	-9,	-9,
	8,	-4,	8,	2,	2,	8,	-4,	8,
	4,	3,	2,	1,	1,	2,	3,	4,
	4,	3,	2,	1,	1,	2,	3,	4,
	8,	-4,	8,	2,	2,	8,	-4,	8,
	-9,	-9,	-4,	3,	3,	-4,	-9,	-9,
	10,	-9,	8,	4,	4,	8,	-9,	10
	*/
	
	int nextSituation=0;//吃子后的棋势，包括双方稳定子数，占角数，占边数，对方位置估值的最佳值(暂时从简考虑，只考虑对方最佳位置估计)

	int tieOppo=100;//牵制对手让他无子可走
	
	//B部分:不用加权的特殊因素，比如走某个子可致对方于死地
	int killOppo=1000;//导致对手死棋
	

	if (avails.size()==1) { //只剩一个位置可以下子，返回第一个元素
		#ifdef DEBUG_DEBUG
		cout<<"只剩一个位置可以下子了，别无选择，省略了所有分析"<<endl;
		#endif
		return *avails.begin();
	}
	
	//虚拟出智力与自己相同的一个对手来
	ComputerPlayer oppo("虚拟对手", WHITE+BLACK-player.color, *this);
	oppo.game=&game;
	
	gridset::iterator it, end=avails.end();
	for (it=avails.begin(); it!=end; ++it){//分析每一个可走子的位置
		newStablePiece=0;	//每次要置0
		int oppoAvails=0;
		
		gridNow=*it;
		evaluation[gridNow]=0.0f;//初始化当前位置的估值
		
		
		//---------------------------------分析开始--------------------------------------
		float eval=0.0;		//估值
		//Step-A  吃子之前先在当前棋盘上分析
		
		//下子位置估值
		positionValue=gridNow->getPosVal();

		//Step-B  吃子之后的局势分析
		game.pushMap();//保存当前棋局
		line added;//新增的子，包括吃的子和放的子
		added.push_back(gridNow);
		bigEat= (game.getRound()>25?1:-1)*game.eatFrom(gridNow, player.color, &added);//自己吃子
		
		//新增稳定子数
		line::iterator it1, end1=added.end();
		for (it1=added.begin(); it1!=end1; ++it1) {
			if ((*it1)->isStablePiece())
				++newStablePiece;
		}
		
		//由于不是最后唯一一颗可下的子，因此游戏一定没有结束
		assert(!game.checkGameOver(true));
		
		if (oppo.refreshGuys()==0) {
			eval+=killOppo;//对方无子了，这样能直接杀死对手
		} else if ((oppoAvails=oppo.findAvails())==0) {
			eval+=f*tieOppo;//让对手无下子的机会
		} else {
			
			set<int> lose;//轮到对手下子时的吃子数
			set<int> oppoPosVals;//对方位置估计
			int oppoEat;
			
			//对手
			gridset::iterator it2, end2=oppo.avails.end();
			for (it2=oppo.avails.begin(); it2!=end2; ++it2){//分析对手的每一个可走子的位置
				
				gridNext=*it2;
				oppoPosVals.insert(gridNext->getPosVal());
				
				game.pushMap();
				//对手吃子
				oppoEat=game.eatFrom(gridNext, oppo.color);//对手吃子
				lose.insert(oppoEat);
				
				//进行吃子后的分析
				game.popMap();
			}
			//mobility=-*lose.rbegin();//lose已自动按从小到大排序，最后一个元素最大
			mobility=-oppoAvails;
			nextSituation=-*oppoPosVals.rbegin();
		}


		game.popMap();//还原地图到吃子前
		
		//---------------------------------分析结束--------------------------------------
		eval+=a*bigEat;
		eval+=b*mobility;
		eval+=c*newStablePiece;
		eval+=d*positionValue;
		eval+=e*nextSituation;
		
		evaluation[gridNow]=eval;
	}
	
	#ifdef DEBUG_DEBUG
	map<Grid*, float>::iterator mit=evaluation.begin(), mend=evaluation.end();
	for (; mit!=mend; ++mit) {
		cout<<"估值 ( "<<(*mit).first->x<<" , "<<(*mit).first->y<<" ) = "<<(*mit).second<<endl;
	}
	#endif
	
	//找出最大值
	map<Grid*, float>::iterator first=evaluation.begin(), last=evaluation.end();
	map<Grid*, float>::iterator largest=first;
	
	if (evaluation.size()>1) {
		while (++first!=last)
			if ((*largest).second<(*first).second)
				largest=first;
	}

	return (*largest).first;
}


AI::~AI(void){
}
