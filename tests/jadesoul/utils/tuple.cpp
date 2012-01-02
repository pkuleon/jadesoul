/**
 * File: tuple.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-02 15:46:56.258000
 * Written In: Peking University, beijing, China
 */

#include "jadesoul.hpp"

int main () {
	int a, b, c, d=1, e=2, f=3;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	
	// tuple3<int>(a, b, c)=tuple3<const int>(1, 2, 3);
	// tuple3<int, int, int>(a, b, c)=tuple3<const int, const int, const int>(1, 2, 3);
	tuple(a, b, c)=tuple(d, e, f);
	tuple(a, b, c, d)=tuple(d, e, f, a);
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<tuple(d, e, f)<<endl;
	cout<<tuple(a, b, c, d)<<endl;
}

