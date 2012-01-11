/**
 * File: dict.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-03 15:09:24.171000
 * Written In: Peking University, beijing, China
 */


#include "jadesoul.hpp"

jtest(cons, test1,
	dict<str, str> d;
	str b="asdasd";
	d[b]=b;
	d["a"]=b;
	print(d);
	print(tuple(b, b, d));
	print(d["a"]);
)


int main () {}

