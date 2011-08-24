/**
 * File: 1005.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011年8月13日8:40:22
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
	int n;
	in>>n;
	for (int i=0; i<n; ++i) {
		float x, y;
		in>>x>>y;
		cout<<"Property "<<i+1<<": This property will begin eroding in year "<<ceil((x*x+y*y)*3.1415926/100)<<"."<<endl;
	}
	cout<<"END OF OUTPUT."<<endl;
}

