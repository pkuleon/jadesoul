#pragma once
#include "Grid.h"
//��ʾ��һ����
class Step
{
public:
	string mapStr; 
	Grid* grid;
public:
	Step(void);
	Step(string& s, Grid* g);
};
