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

map<string, string> m;
map<string, string>::iterator it;

string F(string s) {
	if ((it=m.find(s))!=m.end()) return it->second;
	string ret;
	int l=s.size();
	if (l==0) ret="";
	else if (l==1) ret=(s[0]=='[' || s[0]==']')?"[]":"()";
	else {
		int r=0, hl=l/2;
		while(r<hl && ((s[r]=='(' && s[l-r-1]==')') || (s[r]=='[' && s[l-r-1]==']'))) ++r;
		if (r==hl) {
			if (l%2==0) {
				ret=s;
			} else {
				ret=string(s.begin(), s.begin()+hl)+((s[hl]=='[' || s[hl]==']')?"[]":"()")+string(s.begin()+hl+1, s.end());
				// cout<<"good"<<endl;
			}
		} else {
			string min(1000, '*'), tmp;
			if (r!=0) {
				tmp=string(s.begin(), s.begin()+r)+F(string(s.begin()+r, s.end()-r))+string(s.end()-r, s.end());
				if (tmp.size()<min.size()) {
					// cout<<min<<"\t==>\t"<<tmp<<endl;
					min=tmp;
				}
			}
			char a=s[0], b=s[l-1];
			if ((a==']' || a==')') && (b=='[' || b=='(')) {
				tmp=string(a==']'?"[]":"()")+(l==2?"":F(string(s.begin()+1, s.end()-1)))+string(b=='['?"[]":"()");
				if (tmp.size()<min.size()) {
					// cout<<min<<"\t==>\t"<<tmp<<endl;
					min=tmp;
				}
			} else if (a==']' || a==')') {
				tmp=string(a==']'?"[]":"()")+F(string(s.begin()+1, s.end()));
				if (tmp.size()<min.size()) {
					// cout<<min<<"\t==>\t"<<tmp<<endl;
					min=tmp;
				}
			} else if (b=='[' || b=='(') {
				tmp=F(string(s.begin(), s.end()-1))+string(b=='['?"[]":"()");
				if (tmp.size()<min.size()) {
					// cout<<min<<"\t==>\t"<<tmp<<endl;
					min=tmp;
				}
			}
			
			for (r=1; r<l; ++r) {
				tmp=F(string(s.begin(), s.begin()+r))+F(string(s.begin()+r, s.end()));
				if (tmp.size()<min.size()) {
					// cout<<min<<"\t==>\t"<<tmp<<endl;
					min=tmp;
				}
			}
			ret=min;
		}
	}
	m[s]=ret;
	return ret;
}

int main () {
	string s;
	while(in>>s) cout<<F(s)<<endl;
	// for (it=m.begin(); it!=m.end(); ++it) cout<<it->first<<"\t-->\t"<<it->second<<endl;
}

