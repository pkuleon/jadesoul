#include "StdAfx.h"
#include "AI.h"
#include "game.h"
#include "ComputerPlayer.h"
#include "Grid.h"
#include "Gene.h"

float AI::goBigEat(Game& game, ComputerPlayer& player, Grid* g){	//����һ���ִ�ʳ����
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

Grid* AI::anasys(Game& game, ComputerPlayer& player){		//������֣��ҳ��������λ�ö�Ӧ��Gridָ�룬����·���߷���NULL
	assert(player.avails.size()>0);
	assert(player.guys.size()>0);
	
	gridset& avails=player.avails;	//����λ�õļ���

	//return *(gs.rbegin());

	
	/*
	//���飺set�ڲ�Ԫ�ص�˳���Ƿ����Զ�����
	set<int> gb;
	gb.insert(1);
	gb.insert(3);
	gb.insert(2);
	*/

	//����·���߷���NULL ---> ������
	/*if (gs.empty())
		return NULL;*/
	
	
	//grids.clear();
	//anasysResult.clear();
	Grid * gridNow, * gridNext;
	evaluation.clear();

	//��ֵҪ���ǵĸ�������
	//A����:��Ϊ��Ȩ�����
	int bigEat=0;//��ʳ���ԣ��������Լ������
	int mobility=0;//�ж������Լ�Խ��Խ�ã�����ԽСԽ��
	int newStablePiece=0;//�����ȶ�������������Χ���м䲻�����ٱ��Ե�����
	
	//λ�ù�ֵ��������������;
	//1.���ڻ�����������������λ���ϵļ�ֵ��Խ����Խ��
	//2.����λ�õļ�ֵ��33�ͱߡ��ǱȽϸߣ����öԷ�ռ����Щλ�õ�λ�ñȽϵ�
	int positionValue;
	
	/*
	λ�ù�ֵ��
	10,	-9,	8,	4,	4,	8,	-9,	10,
	-9,	-9,	-4,	-3,	-3,	-4,	-9,	-9,
	8,	-4,	8,	2,	2,	8,	-4,	8,
	4,	3,	2,	1,	1,	2,	3,	4,
	4,	3,	2,	1,	1,	2,	3,	4,
	8,	-4,	8,	2,	2,	8,	-4,	8,
	-9,	-9,	-4,	3,	3,	-4,	-9,	-9,
	10,	-9,	8,	4,	4,	8,	-9,	10
	*/
	
	int nextSituation=0;//���Ӻ�����ƣ�����˫���ȶ�������ռ������ռ�������Է�λ�ù�ֵ�����ֵ(��ʱ�Ӽ��ǣ�ֻ���ǶԷ����λ�ù���)

	int tieOppo=100;//ǣ�ƶ����������ӿ���
	
	//B����:���ü�Ȩ���������أ�������ĳ���ӿ��¶Է�������
	int killOppo=1000;//���¶�������
	

	if (avails.size()==1) { //ֻʣһ��λ�ÿ������ӣ����ص�һ��Ԫ��
		#ifdef DEBUG_DEBUG
		cout<<"ֻʣһ��λ�ÿ��������ˣ�����ѡ��ʡ�������з���"<<endl;
		#endif
		return *avails.begin();
	}
	
	//������������Լ���ͬ��һ��������
	ComputerPlayer oppo("�������", WHITE+BLACK-player.color, *this);
	oppo.game=&game;
	
	gridset::iterator it, end=avails.end();
	for (it=avails.begin(); it!=end; ++it){//����ÿһ�������ӵ�λ��
		newStablePiece=0;	//ÿ��Ҫ��0
		int oppoAvails=0;
		
		gridNow=*it;
		evaluation[gridNow]=0.0f;//��ʼ����ǰλ�õĹ�ֵ
		
		
		//---------------------------------������ʼ--------------------------------------
		float eval=0.0;		//��ֵ
		//Step-A  ����֮ǰ���ڵ�ǰ�����Ϸ���
		
		//����λ�ù�ֵ
		positionValue=gridNow->getPosVal();

		//Step-B  ����֮��ľ��Ʒ���
		game.pushMap();//���浱ǰ���
		line added;//�������ӣ������Ե��Ӻͷŵ���
		added.push_back(gridNow);
		bigEat= (game.getRound()>25?1:-1)*game.eatFrom(gridNow, player.color, &added);//�Լ�����
		
		//�����ȶ�����
		line::iterator it1, end1=added.end();
		for (it1=added.begin(); it1!=end1; ++it1) {
			if ((*it1)->isStablePiece())
				++newStablePiece;
		}
		
		//���ڲ������Ψһһ�ſ��µ��ӣ������Ϸһ��û�н���
		assert(!game.checkGameOver(true));
		
		if (oppo.refreshGuys()==0) {
			eval+=killOppo;//�Է������ˣ�������ֱ��ɱ������
		} else if ((oppoAvails=oppo.findAvails())==0) {
			eval+=f*tieOppo;//�ö��������ӵĻ���
		} else {
			
			set<int> lose;//�ֵ���������ʱ�ĳ�����
			set<int> oppoPosVals;//�Է�λ�ù���
			int oppoEat;
			
			//����
			gridset::iterator it2, end2=oppo.avails.end();
			for (it2=oppo.avails.begin(); it2!=end2; ++it2){//�������ֵ�ÿһ�������ӵ�λ��
				
				gridNext=*it2;
				oppoPosVals.insert(gridNext->getPosVal());
				
				game.pushMap();
				//���ֳ���
				oppoEat=game.eatFrom(gridNext, oppo.color);//���ֳ���
				lose.insert(oppoEat);
				
				//���г��Ӻ�ķ���
				game.popMap();
			}
			//mobility=-*lose.rbegin();//lose���Զ�����С�����������һ��Ԫ�����
			mobility=-oppoAvails;
			nextSituation=-*oppoPosVals.rbegin();
		}


		game.popMap();//��ԭ��ͼ������ǰ
		
		//---------------------------------��������--------------------------------------
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
		cout<<"��ֵ ( "<<(*mit).first->x<<" , "<<(*mit).first->y<<" ) = "<<(*mit).second<<endl;
	}
	#endif
	
	//�ҳ����ֵ
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
