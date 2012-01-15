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
	// a[1]=1;
	// a[2]=1;
	// a[3]=1;
	
	print(a);
)

int main () {
	
	D d;
	str b="asdasd";
	d[b]=b;
	cout<<d;
	
}

