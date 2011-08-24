#include "StdAfx.h"
#include "Grid.h"

const int Grid::posVals[64]={
	10,	-9,	8,	4,	4,	8,	-9,	10,
	-9,	-9,	-4,	-3,	-3,	-4,	-9,	-9,
	8,	-4,	8,	2,	2,	8,	-4,	8,
	4,	3,	2,	1,	1,	2,	3,	4,
	4,	3,	2,	1,	1,	2,	3,	4,
	8,	-4,	8,	2,	2,	8,	-4,	8,
	-9,	-9,	-4,	3,	3,	-4,	-9,	-9,
	10,	-9,	8,	4,	4,	8,	-9,	10
};

Grid::Grid(int s=EMPTY,int x=1,int y=1){
	state=s;
	this->x=x;
	this->y=y;
	u=ru=r=rd=d=ld=l=lu=NULL;
	updateNextArray();
}

void Grid::updateNextArray(){
	next[0]=u;
	next[1]=ru;
	next[2]=r;
	next[3]=rd;
	next[4]=d;
	next[5]=ld;
	next[6]=l;
	next[7]=lu;
}

int Grid::getPosVal() {//获得位置估值
	return posVals[BORDER_LEN*(x-1)+(y-1)];
}

bool Grid::isStablePiece() {//判断是否是稳定子

	assert(state!=0);
	
	int d;//方向
	Grid *g, *h;
	int oppo=WHITE+BLACK-state;
	
	for (d=0; d<4; ++d) { //依次遍历4个方向

		int od=d+4;
		
		g=this->next[d];//当前方向的下一子
		h=this->next[od];//反方向的下一子
		
		for (; g!=NULL && g->state==state; g=g->next[d]);//同色棋子前向延伸
		for (; h!=NULL && h->state==state; h=h->next[od]);//同色棋子后向延伸
		
		//一边是空白，一边是对手，则不是稳定子
		if ((g!=NULL && g->state==EMPTY) && (h!=NULL && h->state==oppo)) {
			return false;
		}
		
		if ((h!=NULL && h->state==EMPTY) && (g!=NULL && g->state==oppo)) {
			return false;
		}
	}
	return true;
}

