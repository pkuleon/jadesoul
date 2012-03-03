/**
 * File: test_const.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-02-18 16:41:57.856000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "jadesoul.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class A{
	int a;
	const int b;
	static const int c;
};
int main () {
	cout<<sizeof(A)<<endl;
}

