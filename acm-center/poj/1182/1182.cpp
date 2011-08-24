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
#include <list>
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

typedef set<int> settype;
typedef set<int>::iterator iterator;
vector<settype> S(3);
settype& A=S[0], & B=S[1], & C=S[2];


int find(int x) {
	int l=S.size();
	for (int i=0; i<l; ++i) {
		if (S[i].find(x)!=S[i].end()) {
			return i;
		}
	}
	return -1;
}

int main () {
	int n, k, d, x, y, wcnt=0;
	in>>n>>k;
	bool first=true;
	while(k--) {
		in>>d>>x>>y;
		if (x>n || y>n) {
			++wcnt;
			continue;
		}
		if (d==2) {//x eat y
			if (x==y) {
				++wcnt;
				continue;
			} else {
				if (first) {
					A.insert(x);
					B.insert(y);
					first=false;
				} else {
					int i=find(x), j=find(y);
					//
					// if (i==-1 && j==-1) {
						// settype tmp;
						// tmp.insert(x);
						// tmp.insert(y);
						// S.push_back(tmp);
					// } else if (i!=-1 && j==-1) {
						// S[i].insert(y);
					// } else if (i==-1 && j!=-1) {
						// S[j].insert(x);
					// } else if (i!=-1 && j!=-1){
						// if (i!=j) {
							// if ((i>=3 && j>=3) || (i<3 && j<3))) {
								// ++wcnt;
								// continue;
							// } else if (i<3 && j>=3){
								// int from=j, to=i;
								// S[to].insert(S[from].begin(), S[from].end());
								// S.erase(S.begin()+from);
							// } else if (j<3 && i>=3){
								// int from=i, to=j;
								// S[to].insert(S[from].begin(), S[from].end());
								// S.erase(S.begin()+from);
							// }
						// }
					// }
					//
				}
			}
		} else {//x same y
			if (first) {
				A.insert(x);
				A.insert(y);
				first=false;
			} else {
				int i=find(x), j=find(y);
				if (i==-1 && j==-1) {
					settype tmp;
					tmp.insert(x);
					tmp.insert(y);
					S.push_back(tmp);
				} else if (i!=-1 && j==-1) {
					S[i].insert(y);
				} else if (i==-1 && j!=-1) {
					S[j].insert(x);
				} else if (i!=-1 && j!=-1){
					if (i!=j) {
						if (i<3 && j<3) {
							++wcnt;
							continue;
						} else if (i<3 && j>=3) {
							int from=j, to=i;
							S[to].insert(S[from].begin(), S[from].end());
							S.erase(S.begin()+from);
						} else {
							int from=i, to=j;
							S[to].insert(S[from].begin(), S[from].end());
							S.erase(S.begin()+from);
						}
					}
				}
			}
		}
	}
	cout<<wcnt<<endl;
	return 0;
}

