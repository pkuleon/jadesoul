/**
 * File: main.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-09-24 09:39:21.391000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "trie.hpp"
#include "double_array_trie.hpp"

typedef char char_t;
typedef int code_t;
typedef jade::trie<char_t, code_t> trie_t;
typedef jade::double_array_trie<char_t, code_t> datrie_t;



int main () {
	
	datetime now;
	printl("before build", now);
	
	fstream fin("words_huge.txt");
	// fstream fin("words_45000.txt");
	vec_str vs;
	string s;
	while (fin>>s) vs.push_back(s);
	fin.close();
	
	trie_t t(vs);
	
	datetime end1;
	printl("after build", end1);
	
	printl("word count", vs.size());
	int hit=0;
	for_iter(it, vec_str, vs) {
		string& s=*it;
		if (t.search(s)) ++hit;
	}
	printl("match count", hit);
	
	datetime end2;
	printl("after search", end2);
	
	
	datrie_t dat(vs);
	
	datetime end3;
	printl("after build", end3);
	
	printl("word count", vs.size());
	hit=0;
	for_iter(it, vec_str, vs) {
		string& s=*it;
		if (dat.search(s)) ++hit;
	}
	printl("match count", hit);
	
	datetime end4;
	printl("after search", end4);
	
	printl("array.size=", dat.get_array_size());
	getch();
}

