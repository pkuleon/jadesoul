print """/**
 * File: main.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-29 14:24:10.781000
 * Written In: Peking University, beijing, China
 */
 
#define pymacro

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	cout<<"hello, world"<<endl;
	
	""" for i in range(10): print i print """
	
}

"""