/**
 * File: 1423_ref.cpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2011-08-17 15:17:22.757000
 * Written In: Peking University, beijing, China
 */

 #include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#ifndef ONLINE_JUDGE
	#include <cassert>
	#include <jadesoul>
	ifstream in("data.txt");
	FILE *_fin=fopen("data.txt", "r");
	#define scan(...) fscanf(_fin, __VA_ARGS__)
	#define print(...) cout<<#__VA_ARGS__<<"="<<__VA_ARGS__<<endl
	#define printl(...) cout<<endl
	#define dbgcode(...) __VA_ARGS__
	#define dbglog(...) log(__VA_ARGS__)
#else
	istream& in=cin;
	#define print(...)
	#define printl(...)
	#define dbgcode(...)
	#define dbglog(...)
	#define scan(...) scanf(__VA_ARGS__)
#endif

#include <stdio.h>
#include <math.h>

int main ()
{
	int m;
	const double pi=3.1415926535;
	const double e=2.718281828459 ;
	scan("%d",&m);
	while (m--) {
		int n,result;
		scan("%d",&n);
		result=(int)(log10(sqrt(2 * pi * n)) + n * log10((double)n / e))+1;
		printf("%d\n",result);
	}
	return 0;
}