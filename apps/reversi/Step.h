#pragma once
#include "Grid.h"
//表示下一步棋
class Step
{
public:
	string mapStr; 
	Grid* grid;
public:
	Step(void);
	Step(string& s, Grid* g);
};
