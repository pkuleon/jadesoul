/**
 * File: othello.cpp
 * Description: This is the othello program of jadesoul
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-24 14:38:34.530000
 * Written In: Peking University, beijing, China
 */

#include "jadesoul.hpp"

enum color {
	empty, black, white, totalcolors
};

enum direction {
	right, rightdown, down, leftdown, left, leftup, up, rightup, totaldirects
};

struct grid {
	color c;
	int x;
	int y;
	grid* next[totaldirects];
	grid(int x, int y, color c=empty):x(x), y(y), c(c) {}
	inline friend ostream& operator<<(ostream& o, const grid& g) {
		if (g.c==empty) return o<<"- ";
		else if (g.c==black) return o<<"X ";
		else return o<<"O ";
	}
};

struct board {
	grid* m[totaldirects+1][totaldirects+1];
	board() {
		for_n(i, totaldirects+1) {
			for_n(j, totaldirects+1) {
				grid* &g=m[i][j];
				if (i==0 OR j==0) g=NULL;
				g=new grid(i, j);
			}
		}
		at(4, 4).c=black;
		at(5, 5).c=black;
		at(5, 4).c=white;
		at(4, 5).c=white;
		for_any(i, 1, totaldirects) {
			for_any(j, 1, totaldirects) {
				grid* &pu=at(i, j).next[up];
				if (i==1) pu=NULL;
				else pu=ptr(i-1, j);
				
				grid* &pd=at(i, j).next[down];
				if (i==8) pd=NULL;
				else pd=ptr(i+1, j);
				
				grid* &pl=at(i, j).next[left];
				if (j==1) pl=NULL;
				else pl=ptr(i, j-1);
				
				grid* &pr=at(i, j).next[right];
				if (j==8) pr=NULL;
				else pr=ptr(i, j+1);
				
				grid* &pru=at(i, j).next[rightup];
				if (i==1 OR j==8) pru=NULL;
				else pru=ptr(i-1, j+1);
				
				grid* &prd=at(i, j).next[rightdown];
				if (i==8 OR j==8) prd=NULL;
				else prd=ptr(i+1, j+1);
				
				grid* &pld=at(i, j).next[leftdown];
				if (i==8 OR j==1) pld=NULL;
				else pld=ptr(i+1, j-1);
				
				grid* &plu=at(i, j).next[leftup];
				if (i==1 OR j==1) plu=NULL;
				else plu=ptr(i-1, j-1);
			}
		}
	}
	inline grid& at(int i, int j) { return *(m[i][j]); }
	inline grid* ptr(int i, int j) { return m[i][j]; }
	
	inline friend ostream& operator<<(ostream& o, board& b) {
		o<<"1 2 3 4 5 6 7 8"<<endl;
		for_any(i, 1, totaldirects) {
			for_any(j, 1, totaldirects) {
				o<<b.at(i, j);
			}
			o<<i<<endl;
		}
		return o<<endl;
	}
	
	const bool valid(int i, int j, color c, list<grid*>& eats) {
		
	}
	
	put(int i, int j, color c) {
		assert(at(i, j).c==empty);
		for_n(d, totaldirects) {
			
		}
	}
	
	eat(int i, int j) {
		
	}
};

int main () {
	board b;
	cout<<b;
}




