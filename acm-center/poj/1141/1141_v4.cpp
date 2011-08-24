/**
 * File: 1141.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-17 21:24:10.297000
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

// #define ONLINE_JUDGE

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
	
	#include <time.h>
	#include <sys/timeb.h>
	void showtime() {
		struct timeb tp;
		struct tm * tm;
		ftime(&tp);
		tm=localtime(&(tp.time));
		printf("%02d:%02d:%02d:%03d\n", tm->tm_hour, tm->tm_min, tm->tm_sec, tp.millitm);
	}
#else
	istream& in=cin;
	#define print(...)
	#define printl(...)
	#define dbgcode(...)
	#define dbglog(...)
	#define scan(...) scanf(__VA_ARGS__)
	#define showtime(...)
	typedef size_t uint;
#endif

inline char oppo(const char c) {
	if (c=='(') return ')';
	if (c==')') return '(';
	if (c=='[') return ']';
	if (c==']') return '[';
}

inline string bu(const char c) {
	if (c=='(' || c==')') return "()";
	if (c=='[' || c==']') return "[]";
}

string single(const string& s) {
	string t=s;
	t+=s;
	for (uint i=0; i<s.size(); ++i) {
		string b=bu(s[i]);
		t[i*2]=b[0];
		t[i*2+1]=b[1];
	}
	return t;
}

bool match(const char x, const char y) {
	return (x=='(' || x=='[') && y==oppo(x);
}

map<string, string> m;

inline bool L(const char c) {
	return c==')' || c==']';
}

inline bool R(const char c) {
	return c=='(' || c=='[';
}

#define shows(...) cout<<#__VA_ARGS__<<":\n\t"<<__VA_ARGS__<<"\n\t"<<__VA_ARGS__.size()<<"\n";

string F(const string s) {
	uint l=s.size();
	if (l==0) return s;
	if (l==1) return bu(s[0]);
	int i=0, j=l-1;
	while (i<l && L(s[i])) ++i;
	while (j>=0 && R(s[j])) --j;
	string head(s.begin(), s.begin()+i), lcr(s.begin()+i, s.begin()+j+1), tail(s.begin()+j+1, s.end());
	if (m.find(lcr)!=m.end()) return single(head)+m[lcr]+single(tail);
	int n=lcr.size();
	if (n==1) return single(head)+bu(lcr[0])+single(tail);
	for (i=0, j=n-1; R(lcr[i]) && lcr[j]==oppo(lcr[i]); ++i, --j) ;
	string left(lcr.begin(), lcr.begin()+i), center(lcr.begin()+i, lcr.begin()+j+1), right(lcr.begin()+j+1, lcr.end());
	
	if (center.size()==0) return single(head)+lcr+single(tail);
	if (center.size()==1) return single(head)+left+bu(center[0])+right+single(tail);
	
	// shows(head);
	// shows(left);
	// shows(center);
	// shows(right);
	// shows(tail);
	// shows(lcr);
	
	uint min=0xffffffff;
	string mins;
	if (center!=s) {
		string x=left+F(center)+right;
		if (x.size()<min) {
			min=x.size();
			mins=x;
		}
	}
	for (int a=1; a<n; ++a) {
		int b=n-a;
		string sa(lcr.begin(), lcr.begin()+a);
		string sb(lcr.begin()+a, lcr.end());
		string x=F(sa)+F(sb);
		if (x.size()<min) {
			min=x.size();
			mins=x;
		}
	}
	m[lcr]=mins;
	return single(head)+mins+single(tail);
}

int main () {
	string s;
	while(in>>s) {
		print(s);
		cout<<F(s)<<endl;
		print(m.size());
		showtime();
	}
}

