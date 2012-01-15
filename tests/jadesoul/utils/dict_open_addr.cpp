/**
 * File: dict_open_addr.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-15 16:30:21.225000
 * Written In: Peking University, beijing, China
 */
 
#include "jadesoul.hpp"

jtest(cons, test1,
	dict<int, int> a;
	print(a);
	a[1]=1;
	a[2]=1;
	a[3]=1;
	print(a);
	print(a[1]);
	if (a.haskey(4)) print(a(4));
	print(a[4]);
	if (a.haskey(4)) print(a(4));
	print(a);
	a[3]=1;print(a);
	a[7]=1;print(a);
	a[8]=1;print(a);
	a[9]=1;print(a);
	a[10]=1;print(a);
	a[11]=1;print(a);
	a[12]=1;print(a);
	a.del(1);print(a);
	a.pop();print(a);
	a.pop();print(a);
	a.pop();print(a);
)

// jtest(tstr, test2,
	// D d;
	// str b="asdasd";
	// d[b]=b;
	// d["hi"]=b;
	// print(d);
	// print(d.haskey(str("hi")));
	// print(d["hi"]);
// )


int main () {}

