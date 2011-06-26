/**
 * File: call.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-06-02 21:03:08.088000
 * Written In: Peking University, beijing, China
 */

// #define debug
// #include "jadesoul.hpp"
	
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;

void swap(int* a, int* b) {
	int c=*a;
	*a=*b;
	*b=c;
}

int main () {
	int a=2, b=1;
	swap(&a, &b);
	// cout<<a<<"\t"<<b<<endl;
}

