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
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
#endif

typedef size_t uint;


#define N 84
char entry[N][4]={
	"(",
	")",
	"[",
	"]",
	"((",
	"()",
	"([",
	"(]",
	"[(",
	"[)",
	"[[",
	"[]",
	")(",
	"))",
	")[",
	")]",
	"](",
	"])",
	"][",
	"]]",
	//1
	"(((",
	"(()",
	"(([",
	"((]",
	"([(",
	"([)",
	"([[",
	"([]",
	"()(",
	"())",
	"()[",
	"()]",
	"(](",
	"(])",
	"(][",
	"(]]",
	//2
	")((",
	")()",
	")([",
	")(]",
	")[(",
	")[)",
	")[[",
	")[]",
	"))(",
	")))",
	"))[",
	"))]",
	")](",
	")])",
	")][",
	")]]",
	//3
	"[((",
	"[()",
	"[([",
	"[(]",
	"[[(",
	"[[)",
	"[[[",
	"[[]",
	"[)(",
	"[))",
	"[)[",
	"[)]",
	"[](",
	"[])",
	"[][",
	"[]]",
	//4
	"]((",
	"]()",
	"]([",
	"](]",
	"][(",
	"][)",
	"][[",
	"][]",
	"])(",
	"]))",
	"])[",
	"])]",
	"]](",
	"]])",
	"]][",
	"]]]"
};

char result[N][7]={
	"()",
	"()",
	"[]",
	"[]",
	"()()",
	"()",
	"()[]",
	"()[]",
	"[]()",
	"[]()",
	"[][]",
	"[]",
	"()()",
	"()()",
	"()[]",
	"()[]",
	"[]()",
	"[]()",
	"[][]",
	"[][]",
	//1
	"()()()",
	"()()",
	"()()[]",
	"()()[]",
	"()[]()",
	"([])",
	"()[][]",
	"([])",
	"()()",
	"(())",
	"()[]",
	"()[]",
	"([])()",
	"([])",
	"()[][]",
	"()[][]",
	//2
	"()()()",
	"()()",
	"()()[]",
	"()()[]",
	"()[]()",
	"()[]()",
	"()[][]",
	"()[]",
	"()()()",
	"()()()",
	"()()[]",
	"()()[]",
	"()[]()",
	"()[]()",
	"()[][]",
	"()[][]",
	//3
	"[]()()",
	"[]()",
	"[]()[]",
	"[()]",
	"[][]()",
	"[][]()",
	"[][][]",
	"[[]]",
	"[]()()",
	"[]()()",
	"[]()[]",
	"[()]",
	"[]()",
	"[]()",
	"[][]",
	"[[]]",
	//4
	"[]()()",
	"[]()",
	"[]()[]",
	"[]()[]",
	"[][]()",
	"[][]()",
	"[][][]",
	"[][]",
	"[]()()",
	"[]()()",
	"[]()[]",
	"[]()[]",
	"[][]()",
	"[][]()",
	"[][][]",
	"[][][]",
};

inline const char* table12(const char* s) {
	for (uint i=0; i<20; ++i) if (strcmp(entry[i], s)==0) return result[i];
	assert(0);
}

inline const char* table3(const char* s) {
	for (uint i=20; i<N; ++i) if (strcmp(entry[i], s)==0) return result[i];
	assert(0);
}

inline char* single(const char* s, uint l, char* r) {
	for (uint i=0; i<l; ++i) {
		if (s[i]=='(' || s[i]==')') {
			r[2*i]='(';
			r[2*i+1]=')';
		} else {
			r[2*i]='[';
			r[2*i+1]=']';
		}
	}
	r[l*2]='\0';
	// print(r);
	return r;
}

inline char* mnew(uint n) {
	char* p=(char*)malloc(n);
	if (!p) exit(0);
}

inline void mdel(char*& p) {
	if (!p) return;
	free(p);
	p=NULL;
}
		
const char* F(const char* s, uint l, char* r) {
	if (l==0) {
		r[0]='\0';
	} else if (l<=2) {
		char* p=mnew(l+1);
		memcpy(p, s, l);
		p[l]='\0';
		print(1001);
		print(s);
		print(l);
		print(p);
		strcpy(r, table12(p));
		mdel(p);
	} else if (l<=3) {
		char* p=mnew(l+1);
		memcpy(p, s, l);
		p[l]='\0';
		strcpy(r, table3(p));
		mdel(p);
	} else {
		uint i, j, m=0, n=l-1, p=0, q=l-1;
		while(m<l && (s[m]==')' || s[m]==']')) ++m;
		while(n>=0 && (s[n]=='(' || s[n]=='[')) --n;
		uint a=m, b=n-m+1, c=l-1-n;
		if (b==0) return single(s, l, r);
		if (a==0 && c==0) {
			uint min=4294967295;
			print(l);
			
			while(p<q && (s[p]=='(' && s[q]==')') || (s[p]=='[' && s[q]==']')) {
				++p;
				--q;
			}
			if (p>q) {
				strcpy(r, s);
				return r;
			}
			if (p!=0) {
				uint z=q-p+1;
				char *center=mnew(z*2+1);
				F(s+p, z, center);
				uint cl=strlen(center);
				uint na=p+cl+p;
				print(na);
				print(min);
				if (na<min) {
					min=na;
					memcpy(r, s, p);
					memcpy(r+p, center, cl);
					memcpy(r+p+cl, s+q+1, p);
					r[na]='\0';
					print(r);
				}
				mdel(center);
			}
			
			char *left=mnew(l*2+1);
			char *right=mnew(l*2+1);
			for (j=1; j<l; ++j) {
				const char &A=s[0], &B=s[j-1], &C=s[j], &D=s[l-1];
				if ((A=='(' && B==')') || (A=='[' && B==']') || (C=='(' && D==')') || (C=='[' && D==']')) {
					uint x=j, y=l-j;
					cout<<s<<"\t:\t"<<l<<"="<<x<<"+"<<y<<endl;
					// print(s);
					F(s, x, left);
					F(s+x, y, right);
					uint nl=strlen(left), nr=strlen(right), na=nl+nr;
					print(nl<<"\t"<<nr<<"\t"<<na);
					print(left);
					print(right);
					print(na);
					print(min);
					if (na<min) {
						min=na;
						memcpy(r, left, nl);
						memcpy(r+nl, right, nr);
						r[na]='\0';
						print(r);
					}
				}
			}
			print(s<<' '<<l);
			print(min);
			assert(min!=4294967295);
			mdel(left);
			mdel(right);
		} else {
			char *left=NULL;
			char *right=NULL;
			if (a!=0) {
				left=mnew(a*2+1);
				single(s, a, left);
			}
			if (c!=0) {
				right=mnew(c*2+1);
				single(s+n+1, c, right);
			}
			char *center=mnew(b*2+1);
			// if (left) print(left);
			// print(s+m);
			// print(b);
			// if (right) print(right);
			// F(s+m, b, center);
			// if (left) print(left);
			// print(center);
			// if (right) print(right);
			// print(1);
			if (left) {
				strcpy(r, left);
				mdel(left);
			}
			// print(2);
			strcpy(r+2*a, center);
			// print(3);
			if (right) {
				uint cl=strlen(center);
				strcpy(r+2*a+cl, right);
				mdel(right);
			}
			mdel(center);
			// print(4);
			// print(r);
		}
	}
	return r;
}

int main () {
	char s[100];
	uint l;
	while(!(s[0]=0)) {
		scan("%s", &s);
		if ((l=strlen(s))==0) break;
		print(s);
		char *r=mnew(l*2+1);
		printf("%s\n", F(s, l, r));
		showtime();
		mdel(r);
	}
}

