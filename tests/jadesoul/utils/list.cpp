/**
 * File: list.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-01 23:07:15.518000
 * Written In: Peking University, beijing, China
 */

#include "jadesoul.hpp"



jtest(constructors, test1,
	str x="asdasd";
	str y="87989";
	str z="JOIOJ";
	list<str> l(x, y, z);
	print(x);
	print(y);
	print(z);
	print(l);
	
	// var p=l[0];
	// p.printl();
	// print((str&)p[0]);
	// (l[1]).printl();	
)

int main () {}



