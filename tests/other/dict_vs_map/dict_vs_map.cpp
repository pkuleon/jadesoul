/**
 * File: dict_vs_map.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-15 21:49:44.563000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "jadesoul.hpp"

L test=file("words_test.txt").readlines();

void test_map(L& ws) {
	map<str, int> m;
	dict<str, int> d;
	// print(d);
	time_seed();
	for_iter(i, L, ws) {
		m[*i]=1;
	}
	time_gap("init map");
	
	for_iter(i, L, ws) {
		d[*i]=1;
	}
	// print(d);
	time_gap("init dict");
	uint hit=0;
	for_iter(i, L, test) if (m.find(*i)!=m.end()) ++hit;
	print(hit);
	time_gap("search map");
	
	hit=0;
	for_iter(i, L, test) if (d.haskey(*i)) ++hit;
	print(hit);
	time_gap("search dict");
	print("\n")
}

int main () {
	L ws1=file("words_100.txt").readlines();
	L ws2=file("words_1000.txt").readlines();
	L ws3=file("words_10000.txt").readlines();
	L ws4=file("words_45000.txt").readlines();
	test_map(ws1);
	test_map(ws2);
	test_map(ws3);
	test_map(ws4);
}

