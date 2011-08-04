/**
 * File: main.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-07 14:29:13.068000
 * Written In: Peking University, beijing, China$
 */

// #define debug
#include <jade.hpp>
#include <ml.hpp>

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	char *s="asdasdasd";
	char *s1="asdasdasd";
	
	for_n(i, 28/4) cout<<(int*)(&s)+i<<endl;
	cout<<endl;
	for_n(i, 28/4) cout<<(int*)(&s1)+i<<endl;
	// cout<<"hello, world"<<endl;
	// cout<<&(s1.c_str())<<endl;
}

