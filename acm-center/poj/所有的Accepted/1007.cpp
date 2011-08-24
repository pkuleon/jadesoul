/**
 * File: 1007.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-13 13:00:51.657000
 * Written In: Peking University, beijing, China
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// #define debug
#ifdef debug
	ifstream in("data.txt");
	#define print(...) cout<<#__VA_ARGS__<<"="<<__VA_ARGS__<<endl;
#else
	istream& in=cin;
	#define print
#endif

typedef pair<string, int> type;

int inversions(string& s) {
	int l=s.size(), r=0;
	for (int i=0; i<l-1; ++i) {
		for (int j=i+1; j<l; ++j) {
			if (s[i]>s[j]) ++r;
		}
	}
	return r;
}

struct sort_by_inversion {
	bool operator ()(const type& i, const type& j) {
		return i.second<j.second;
	}
} sorter;

int main () {
	int l, n;
	in>>l>>n;
	vector<type> vs;
	string s;
	for(int i=0; i<n; ++i) {
		in>>s;
		vs.push_back(make_pair(s, inversions(s)));
	}
	stable_sort(vs.begin(), vs.end(), sorter);
	for(int i=0; i<n; ++i) cout<<vs[i].first<<endl;
	return 0;
}

