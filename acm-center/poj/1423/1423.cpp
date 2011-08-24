/**
 * File: 1423.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-13 15:06:20.571000
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

#define N9 1000000000
#define N8 100000000
#define N7 10000000
#define N6 1000000
#define N5 100000
#define N4 10000
#define N3 1000
#define N2 100
#define N1 10

class number {
public:
	float v;
	int m;
	number(const float& v, const int& m):v(v), m(m) {}
	number& operator *=(const number& r) {
		number& me=*this;
		me.m+=r.m;
		me.v*=r.v;
		if (me.v>N8) {
			me.m+=8;
			me.v/=N8;
		}
		return me;
	}
	int getn() {
		number& me=*this;
		while(me.v>10) {
			me.v/=10;
			me.m+=1;
		}
		return me.m+1;
	}
};

int main () {
	int n;
	in>>n;
	while(n-->0) {
		int x;
		in>>x;
		number r(1, 0);
		for (int i=x; i>1; --i) {
			if (i>=N7) {
				r*=number(float(i)/N7, 7);
			} else if (i>=N6) {
				r*=number(float(i)/N6, 6);
			} else if (i>=N5) {
				r*=number(float(i)/N5, 5);
			} else if (i>=N4) {
				r*=number(float(i)/N4, 4);
			} else if (i>=N3) {
				r*=number(float(i)/N3, 3);
			} else if (i>=N2) {
				r*=number(float(i)/N2, 2);
			} else if (i>=N1) {
				r*=number(float(i)/N1, 1);
			} else {
				r*=number(i, 0);
			}
		}
		cout<<r.getn()<<endl;
	}
	return 0;
}

