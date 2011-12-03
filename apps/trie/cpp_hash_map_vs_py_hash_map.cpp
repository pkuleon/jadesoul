/**
 * File: cpp_hash_map_vs_py_hash_map.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-10-01 22:28:24.967000
 * Written In: Peking University, beijing, China
 */


#include "jade.hpp"

//~ struct str_hash{
        //~ size_t operator()(const string& str) const
        //~ {
                //~ unsignedlong __h = 0;
                //~ for (size_t i = 0 ; i < str.size() ; i ++)
                //~ __h = 5*__h + str[i];
                //~ return size_t(__h);
        //~ }
//~ };

namespace __gnu_cxx {
	template<>
	struct hash<string> {
	//如果你希望利用系统定义的字符串hash函数，你可以这样写：struct str_hash{
		size_t operator()(const string& str) const
		{
			return __stl_hash_string(str.c_str());
		}
	};
}

int main () {
	sys_seed();
	
	// ifstream fin("words_45000.txt");
	ifstream fin("words_huge.txt");
	//~ ifstream fin("words_45000.txt");
	string s;
	vector<string> vs;
	while(fin>>s) {
		vs.push_back(s);
	}
	sys_gap("read");
	
	hash_map<string, int> m;
	for_tn(size_t, i, vs.size()) 
		m[vs[i]]=1;
	
	sys_gap("build");
	
	for_tn(size_t, i, vs.size()) 
		//~ if_in(vs[i], m) 
		int a=1;
	
	sys_gap("test");	
}

