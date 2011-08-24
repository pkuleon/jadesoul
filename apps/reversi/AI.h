#pragma once
//�˹������㷨
#include "Grid.h"
#include "Game.h"
#include "ComputerPlayer.h"
#include "Gene.h"
#define powerA 1
#define powerB 1
#define powerC 1

class ComputerPlayer;

class AI{
private:
	vector<float> anasysResult;//����
	map<Grid*, float> evaluation;//������п�����λ�õĹ�ֵ
	vector<Grid*> grids;
	float a, b, c, d, e, f;	//Ҫ���ǵĸ�������

private:
	float goBigEat(Game& game, ComputerPlayer& player, Grid* g);	//����һ���ִ�ʳ����(MAXIMUM DISC STRATEGY)
	float goStableDiscs(Game& game, ComputerPlayer& player);	//�ȶ���- λ�ò���(STABLE DISCS - POSITIONAL STRATEGY)
	float goWedges(Game& game, ComputerPlayer& player);	//Ш��(WEDGES) 
	float goMobility(Game& game, ComputerPlayer& player);	//�ж���(MOBILITY)
	float goWall(Game& game, ComputerPlayer& player);	//ǽ��ǰ��(WALL,FRONTIER) 
	float goTempo(Game& game, ComputerPlayer& player);	//��ԣ��(TEMPO,WAITING MOVES��
	
	float goCreepEdges(Game& game, ComputerPlayer& player);	//����(CREEPING ALONG EDGES) 

	float goParity(Game& game, ComputerPlayer& player);	//��ż��(PARITY) 

	float goUnbalencesEdges(Game& game, ComputerPlayer& player);	//��ƽ���(UNBALANCED EDGES)
	float goStonerTraps(Game& game, ComputerPlayer& player);	//��ͨ����(STONER TRAPS) 

	float goSecureDiscs(Game& game, ComputerPlayer& player);	//��ȫ��(Quiet move)
	
public:
	Grid* anasys(Game& game, ComputerPlayer& player);//������֣��ҳ��������λ�ö�Ӧ��Gridָ�룬������NULL�ᵼ�½�����Ϸ
	AI(float weightBigEat=0.5, float weightMobility=0.5, float weightNewStablePiece=0.5, float weightPositionValue=0.5, float weightNextSituation=0.5, float weightTieOppo=0.5){
		a=weightBigEat;
		b=weightMobility;
		c=weightNewStablePiece;	
		d=weightPositionValue;	
		e=weightNextSituation;
		f=weightTieOppo;
	}
	
	void fromGene(Gene& g);
	
	~AI(void);
};


/*
����(GLOSSARY) 


C-���X-��(C-squares and X-squares):
C-squares are the squares at a2, a7, b1, b8, g1, g8, h2, and h7.
X-squares are the squares at b2, b7, g2, and g7. These squares should
only be occupied with care. 


�м�(Center) : The center of a position is the set of interior discs. 


����ս��(Control of the center)
: Strategy which consists of trying to have as many of your discs as
possible in the center of the position and as few as possible along the
frontier for the maximum possible mobility. 


��(Corner) : The corners are the squares at a1, a8, h1, and h8. They are often very good squares to occupy. 


����(Edge creeping)
: Strategy which consists of gaining the maximum number of moves on one
or two edges at the expense of edge weaknesses (unbalanced edges, ...).
The creeper tries to very quickly run his adversary out of moves by
leaving him the entire frontier but if it doesn't work, the influence
from his bad edges will rapidly weaken his position. 


ǽ��ǰ��(Frontier) : The set of external discs, that is to say discs which are adjacent to an empty square. 


��ԣ��(Gain a tempo)
: Playing one more move than your opponent in a region of the Othello
board and forcing him to initiate play elsewhere (thus lengthening his
frontier). 


Ӱ��(Influence) : One says that a players discs exercise influence when they force him to flip discs in several directions at the same time. 


����/����(Internal/external discs) : An internal disc is a disc which isn't adjacent to an empty square. It is strategically bad to have no interior discs. 


���ɶ�(Liberty) : Non-catastrophic moves. "To be short of liberties" : to have to give up a corner in the near future. 


��ʳ����(Maximum disc strategy) : Incorrect strategy, applied by many beginners, which consists of trying to flip the maximum number of discs on each move. 


�ж���(Mobility)
: Number of possible moves available to a player. By extension, a
player has good mobility when he has a large number of possible moves. 


��ż��(Parity) : Strategy which consists of leaving an even number of empty squares in each region to which your opponent has access. 


��ȫ��(Quiet move) : A move which flips no frontier discs. Often excellent. 


�ȶ���(Stable discs) : Discs which can never be flipped. A corner is an example of a stable disc. 


��ͨ����(Stoner Trap) : Attack of a weak edge position which leads to a forced exchange of corners. 


��ƽ���(Unbalanced edge) : Edge formation consisting of 5 discs of the same colour, adjacent to each-other, none of which is a corner disc

*/