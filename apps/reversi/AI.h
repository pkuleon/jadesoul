#pragma once
//人工智能算法
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
	vector<float> anasysResult;//无用
	map<Grid*, float> evaluation;//存放所有可走子位置的估值
	vector<Grid*> grids;
	float a, b, c, d, e, f;	//要考虑的各个因素

private:
	float goBigEat(Game& game, ComputerPlayer& player, Grid* g);	//考虑一部分大食策略(MAXIMUM DISC STRATEGY)
	float goStableDiscs(Game& game, ComputerPlayer& player);	//稳定子- 位置策略(STABLE DISCS - POSITIONAL STRATEGY)
	float goWedges(Game& game, ComputerPlayer& player);	//楔入(WEDGES) 
	float goMobility(Game& game, ComputerPlayer& player);	//行动力(MOBILITY)
	float goWall(Game& game, ComputerPlayer& player);	//墙或前线(WALL,FRONTIER) 
	float goTempo(Game& game, ComputerPlayer& player);	//余裕手(TEMPO,WAITING MOVES）
	
	float goCreepEdges(Game& game, ComputerPlayer& player);	//爬边(CREEPING ALONG EDGES) 

	float goParity(Game& game, ComputerPlayer& player);	//奇偶性(PARITY) 

	float goUnbalencesEdges(Game& game, ComputerPlayer& player);	//非平衡边(UNBALANCED EDGES)
	float goStonerTraps(Game& game, ComputerPlayer& player);	//四通陷阱(STONER TRAPS) 

	float goSecureDiscs(Game& game, ComputerPlayer& player);	//安全子(Quiet move)
	
public:
	Grid* anasys(Game& game, ComputerPlayer& player);//分析棋局，找出最佳下子位置对应的Grid指针，若返回NULL会导致结束游戏
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
术语(GLOSSARY) 


C-格和X-格(C-squares and X-squares):
C-squares are the squares at a2, a7, b1, b8, g1, g8, h2, and h7.
X-squares are the squares at b2, b7, g2, and g7. These squares should
only be occupied with care. 


中间(Center) : The center of a position is the set of interior discs. 


控中战术(Control of the center)
: Strategy which consists of trying to have as many of your discs as
possible in the center of the position and as few as possible along the
frontier for the maximum possible mobility. 


角(Corner) : The corners are the squares at a1, a8, h1, and h8. They are often very good squares to occupy. 


爬边(Edge creeping)
: Strategy which consists of gaining the maximum number of moves on one
or two edges at the expense of edge weaknesses (unbalanced edges, ...).
The creeper tries to very quickly run his adversary out of moves by
leaving him the entire frontier but if it doesn't work, the influence
from his bad edges will rapidly weaken his position. 


墙或前线(Frontier) : The set of external discs, that is to say discs which are adjacent to an empty square. 


余裕手(Gain a tempo)
: Playing one more move than your opponent in a region of the Othello
board and forcing him to initiate play elsewhere (thus lengthening his
frontier). 


影响(Influence) : One says that a players discs exercise influence when they force him to flip discs in several directions at the same time. 


内子/外子(Internal/external discs) : An internal disc is a disc which isn't adjacent to an empty square. It is strategically bad to have no interior discs. 


自由度(Liberty) : Non-catastrophic moves. "To be short of liberties" : to have to give up a corner in the near future. 


大食策略(Maximum disc strategy) : Incorrect strategy, applied by many beginners, which consists of trying to flip the maximum number of discs on each move. 


行动力(Mobility)
: Number of possible moves available to a player. By extension, a
player has good mobility when he has a large number of possible moves. 


奇偶性(Parity) : Strategy which consists of leaving an even number of empty squares in each region to which your opponent has access. 


安全子(Quiet move) : A move which flips no frontier discs. Often excellent. 


稳定子(Stable discs) : Discs which can never be flipped. A corner is an example of a stable disc. 


四通陷阱(Stoner Trap) : Attack of a weak edge position which leads to a forced exchange of corners. 


非平衡边(Unbalanced edge) : Edge formation consisting of 5 discs of the same colour, adjacent to each-other, none of which is a corner disc

*/