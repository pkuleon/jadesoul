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
	// FILE *_fin=fopen("data.txt", "r");
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

#define B(c) (((c)=='[' || (c)==']')?"[]":"()")

string F(const string& s) {
	int l=s.size();
	if (l==0) return "";
	else if (l==1) return B(s[0]);
	else if (l==2) {
		if (s=="()" || s=="[]") return s;
		return string(B(s[0]))+string(B(s[1]));
	} else {
		if ((it=m.find(s))!=m.end()) return it->second;
		string ret;
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
			int min=10000000;
			string mins, tmp;
			if (r!=0) {
				tmp=string(s.begin(), s.begin()+r)+F(string(s.begin()+r, s.end()-r))+string(s.end()-r, s.end());
				if (tmp.size()<min) {
					min=tmp.size();
					mins=tmp;
				}
			}
			int i=0, j=l-1;
			string left, right;
			while(i<l && (s[i]==']' || s[i]==')')) {
				left+=B(s[i]);
				++i;
			}
			while(j>0 && (s[j]=='[' || s[j]=='(')) {
				right=string(B(s[j]))+right;
				--j;
			}
			if (i>j) {
				ret=left+right;
				m[s]=ret;
				return ret;
			} else if (i>0 || j<l-1) {
				string center(s.begin()+i, s.begin()+j+1);
				ret=left+F(center)+right;
				m[s]=ret;
				return ret;
			}
			for (r=1; r<l; ++r) {
				if (r>1 && !((s[0]=='(' && s[r-1]==')') || (s[0]=='[' && s[r-1]==']') || (s[l-r]=='(' && s[l-1]==')') || (s[l-r]=='[' && s[l-1]==']'))) continue;
				tmp=F(string(s.begin(), s.begin()+r))+F(string(s.begin()+r, s.end()));
				if (tmp.size()<min) {
					min=tmp.size();
					mins=tmp;
				}
			}
			ret=mins;
		}
		m[s]=ret;
		return ret;
	}
}

// string G(string& s) {
	// int l=s.size();
	// if (l==0) ret="";
	// else if (l==1) ret=(s[0]=='[' || s[0]==']')?"[]":"()";
	// else {
	
	// }
	
	// return F(s);
// }

int main () {
	string s;
	while(in>>s) cout<<F(s)<<endl;
	// for (it=m.begin(); it!=m.end(); ++it) cout<<it->first<<"\t-->\t"<<it->second<<endl;
}

