#pragma once
#define EMPTY 0
#define BLACK 1 
#define WHITE 2

class Grid{
public:
	int state;	//0 is empty , 1 is black , 2 is white
	int x,y;	//the position A-Z 1-8
	Grid* u,* ru,* r,* rd,* d,* ld,* l,* lu;
	Grid* next[8]; 
private:
	static const int posVals[64];//Œª÷√π¿÷µ±Ì
public:
	Grid(int s,int x,int y);
	//inline int getX() {return x;}
	//inline int getY() {return y;}
	//inline int getState() {return state;}
	//inline void setState(int s) {state=s;}
	//inline bool isEmpty() {return state==EMPTY;}
	//inline bool isBlack() {return state==BLACK;}
	//inline bool isWhite() {return state==WHITE;}
	//inline Grid* getNext(int direction) {return next[direction];}
	void updateNextArray();
	int getPosVal();
	bool isStablePiece();
};

typedef vector<Grid*> line;	//vector of grid pointer
typedef vector<line> GameMap;
typedef set<Grid*> gridset;	//set of grid pointer



