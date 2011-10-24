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
#include "hash_dict.hpp"

typedef char char_t;
typedef int code_t;
typedef jade::trie<char_t, code_t> trie_t;
typedef jade::hash_dict<char_t, code_t> hash_dict_t;
typedef jade::double_array_trie<char_t, code_t> datrie_t;



int main () {
	sys_seed();
	fstream fin("words_45000.txt");
	vec_str vs;
	string s;
	while (fin>>s) vs.push_back(s);
	fin.close();
	printl("build word count", vs.size());
	sys_gap("load words");
	
	int hit=0;
	
	vec_str vs2(vs);
	sys_gap("reverse words");
	
	for(size_t i=0; i<vs2.size(); i+=3) reverse(vs2[i].begin(), vs2[i].end());
	// printl("test word count", vs2.size());
	sys_gap("reverse words");
	
	// trie_t t(vs);
	// time_gap("build trie");
	
	// hit=0;
	// for_tn(uint, i, vs2.size()) if (t.search(vs2[i])) ++hit;
	// printl("match count", hit);
	// printl("miss count", vs2.size()-hit);
	// sys_gap("test trie");
	
	
	// datrie_t dat(vs);
	// sys_gap("build datrie");
	
	// hit=0;
	// for_tn(uint, i, vs2.size()) if (dat.search(vs2[i])) ++hit;
	// printl("match count", hit);
	// printl("miss count", vs2.size()-hit);
	// sys_gap("test datrie");
	
	// printl("array.size", dat.get_array_size());
	// getch();
	
	// hash_dict_t tt(vs);
	// hash_set<string> hss;
	// for_tn(uint, i, vs.size()) hss.insert(vs[i]);
	// sys_gap("build hash dict");
	
	// hit=0;
	// for_tn(uint, i, vs2.size()) if (hss.find(vs2[i])!=hss.end()) ++hit;
	// printl("match count", hit);
	// printl("miss count", vs2.size()-hit);
	// sys_gap("test hash dict");
	
	
}




