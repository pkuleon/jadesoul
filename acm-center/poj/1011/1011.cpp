/**
 * File: 1011.cpp
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

#define debug
#ifdef debug
	#include <cassert>
	#include <jadesoul>
	ifstream in("data.txt");
	#define print(...) cout<<#__VA_ARGS__<<"="<<__VA_ARGS__<<endl;
	#define printl(...) cout<<endl;
	// #define print(...)
	#define dbgcode(...) __VA_ARGS__
	#define dbglog(...) log(__VA_ARGS__)
#else
	istream& in=cin;
	#define print(...)
	#define dbgcode(...)
	#define dbglog(...)
#endif

int n, stick[60];
bool used[60];

inline void clear_used() {
	for(int i=0; i<n; ++i) used[i]=false;
}

inline bool not_all_used() {
	for(int i=n-1; i>=0; --i) if (!used[i]) return true;
	return false;
}


int main () {
	
	while(in>>n) {
		print(n);
		if (!n) break;
		for (int i=0; i<n; ++i) in>>stick[i];
		// vector<int> sticks(stick,stick+n);
		// print(sticks);
		sort(stick, stick+n);
		// for (int i=0; i<n; ++i) print(stick[i]);
		int s=accumulate(stick, stick+n, 0);
		print(s);
		print();
		for (int l=stick[n-1]; l<=s; ++l) {
			if (s%l==0) print(l);
			
			clear_used();
			
			int now;
			while(not_all_used()) {
				for (int i=0; i<n; ++i) {
					if (used[i]==false) {
						now=i;
						break;
					}
				}
				used[now]=1;
				int m=stick[now];
				if (m==l) continue;
				bool match=false;
				for (int j=now+1; j<n; ++j) {
					if (m+stick[j]==l) {
						used[j]=true;
						match=true;
						break;
					} else if (m+stick[j]>l) {
						continue;
					} else {
						
					}
				}
				if (match) {
				} else {
				
				}
			}
		}
	}
	return 0;
}

