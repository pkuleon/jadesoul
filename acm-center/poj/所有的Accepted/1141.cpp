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
 
#include<stdio.h>
typedef unsigned char num;
#define rnum register int
#define N 101
static num x[N][N];
#define X(i, j) x[i][j]
#define Y(i, j) x[j][i]
static char s[N+1], t[202];;
num n=0, l=0;

void track(rnum i, rnum j) {
	if (i==j) {
		if (s[i]=='(' || s[i]==')') {
			t[++l]='(';
			t[++l]=')';
		} else {
			t[++l]='[';
			t[++l]=']';
		}
	} else {
		rnum k=Y(i, j);
		if (k==0) {
			t[++l]=s[i];
			if (i+1<=j-1) track(i+1, j-1);
			t[++l]=s[j];
		} else {
			track(i, k);
			track(k+1, j);
		}
	}
}

int main () {
	gets(s+1);
	while (s[n+1]) ++n;
	for (rnum i=1; i<=n; ++i) X(i, i)=1;
	for (rnum r=2; r<=n; ++r)
		for (rnum i=1; i<=n-r+1; ++i) {
			rnum j=i+r-1;
			rnum min=255;
			if ((s[i]=='(' && s[j]==')') || (s[i]=='[' && s[j]==']')) {
				rnum m=((i+1<=j-1)?X(i+1, j-1):0);
				if (m<min) {min=m;Y(i, j)=0;}
			}
			if (min>1) {
				for (rnum k=i; k<j; ++k) {
					rnum m=X(i, k)+X(k+1, j);
					if (m<min) {min=m;Y(i, j)=k;}
				}
			}
			X(i, j)=min;
		}
	track(1, n);
	t[++l]=0;
	puts(t+1);
}