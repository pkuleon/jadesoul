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
typedef size_t uint;

#define ONLINE_JUDGE

#ifndef ONLINE_JUDGE
	#include <cassert>
	#include <jadesoul>
	ifstream in("data.txt");
	FILE *_fin=fopen("data.txt", "r");
	#define scan(...) fscanf(_fin, __VA_ARGS__)
	// #define print(...) cout<<#__VA_ARGS__<<"="<<__VA_ARGS__<<endl
	// #define printl(...) cout<<endl
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
	// #define print(...)
	// #define printl(...)
	#define dbgcode(...)
	#define dbglog(...)
	#define assert(...)
	#define scan(...) scanf(__VA_ARGS__)
	#define showtime(...)
#endif

typedef unsigned char uchar;
uchar s[100][100];


inline char oppo(const char c) {
	if (c=='(') return ')';
	else if (c==')') return '(';
	else if (c=='[') return ']';
	else return '[';
}

inline string bu(const char c) {
	if (c=='(' || c==')') return "()";
	else return "[]";
}

template<class T>
class square_matrix {
private:
	uint n;
	T * data;
public:
	square_matrix(uint n=0, T* data_src=NULL, const T& val=T(0)):n(n) {
		if (n!=0) {
			data=new T[n*n];
			if (data_src!=NULL) copy(data_src, data_src+n*n, data);
			else fill(data, data+n*n, val);
		} else data=NULL;
	}
	
	~square_matrix() {
		if (data!=NULL) delete [] data;
	}
	
	T& operator ()(int i, int j) {
		assert(i>=1 && i<=n && j>=1 && j<=n && data!=NULL);
		return data[(i-1)*n+(j-1)];
	}
	
dbgcode(
	square_matrix& print(ostream& out=cout) {
		out<<'['<<endl;
		for (uint i=0; i<n; ++i) {
			out<<"  [";
			for (uint j=0; j<n; ++j) out<<setw(5)<<data[i*n+j];
			out<<setw(5)<<']'<<endl;
		}
		out<<']';
		if (&out==&cout) out<<endl;
		return *this;
	}
	
	string tostr() {
		ostringstream oss;
		print(oss);
		return oss.str();
	}
	
	friend ostream& operator <<(ostream& os, square_matrix& r) {
		r.print(os);
		return os;
	}
)
};

typedef square_matrix<int> matrix;

string track(string& s, matrix& S, matrix& I, uint n, uint i, uint j) {
	if (i>j) return "";
	if (i==j) return bu(s[i]);
	uint k=I(i, j);
	if (k!=-1) return track(s, S, I, n, i, k)+track(s, S, I, n, k+1, j);
	string tmp=track(s, S, I, n, i+1, j-1);
	tmp.insert(tmp.begin(), s[i]);
	tmp.insert(tmp.end(), s[j]);
	return tmp;
}

string deal(string s) {
	uint n=s.size();
	s.insert(s.begin(), ' ');
	matrix S(n), I(n);
	for (uint i=1; i<=n; ++i) {
		S(i, i)=1;
		for (uint j=1; j<i; ++j) S(i, j)=0;
	}
	for (uint r=2; r<=n; ++r) {
		for (uint i=1; i<=n-r+1; ++i) {
			uint j=i+r-1, min=1000;
			for (uint k=i; k<j; ++k) {
				uint x=S(i, k)+S(k+1, j);
				if (x<min) {
					min=x;
					I(i, j)=k;
				}
			}
			if ((s[i]=='(' && s[j]==')') || (s[i]=='[' && s[j]==']')) {
				uint x=S(i+1, j-1);
				if (x<min) {
					min=x;
					I(i, j)=-1;
				}
			}
			S(i, j)=min;
		}
	}
	dbgcode(
		cout<<"min="<<S(1, n)<<endl;
	)
	return track(s, S, I, n, 1, n);
}

int main () {
	string s;
	in>>s;
	showtime();
	cout<<deal(s)<<endl;
	showtime();
}


