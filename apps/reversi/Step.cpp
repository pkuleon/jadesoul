#include "StdAfx.h"

#include "Step.h"

Step::Step(void){
	mapStr="";
	grid=NULL;
}

Step::Step(string& s, Grid* g){
	mapStr=s;
	grid=g;
}