/**
 * File: 1006.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-13 10:43:04.551000
 * Written In: Peking University, beijing, China
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// #define debug
#ifdef debug
	ifstream in("data.txt");
	#define print(...) cout<<#__VA_ARGS__<<"="<<__VA_ARGS__<<endl;
#else
	istream& in=cin;
	#define print
#endif



int main () {
	int p, e, i, d, cnt=0;
	while(1) {
		in>>p>>e>>i>>d;
		if (p==-1 && e==-1 && i==-1 && d==-1) break;
		int k=0, x=0;
		for(; ;++k) {
			if ((p-e-5*k)%28==0 &&  (p-i-10*k)%33==0) break;
		}
		x=23*k+p;
		if (x<d) {
			while(x<=d) x+=21252;
		} else {
			while(x>d) x-=21252;
			x+=21252;
		}
		cout<<"Case "<<++cnt<<": the next triple peak occurs in "<<x-d<<" days."<<endl;
	}
}

