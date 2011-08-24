/**
 * File: 1004.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-12 19:03:55.419000
 * Written In: Peking University, beijing, China
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// #define debug
#ifdef debug
	ifstream in("1004.txt");
	#define print(...) cout<<#__VA_ARGS__<<"="<<__VA_ARGS__<<endl;
#else
	istream& in=cin;
	#define print
#endif



int main () {
	float cnt=0, tmp;
	for (int i=0; i<12; ++i) {
		in>>tmp;
		cnt+=tmp;
	}
	print(cnt);
	cout<<'$'<<(int)((cnt / 12.0)*100+0.5) / 100.0<<endl;
}

