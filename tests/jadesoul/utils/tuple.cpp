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

// jtest(jtest1, test1,
	// int a, b, c, d=1, e=2, f=3;
	// cout<<a<<endl;
	// cout<<b<<endl;
	// cout<<c<<endl;
	
	// tuple(a, b, c)=tuple(d, e, f);
	
	// cout<<a<<endl;
	// cout<<b<<endl;
	// cout<<c<<endl;
	
	// cout<<tuple(d, e, f)<<endl;
	// cout<<tuple(a, b, c, d)<<endl;
// )

jtest(jtest2, test2,
	str x=str::letters;
	str abc=x(0, 3);
	str abcdef=x(0, 6);
	str def=x(3, 6);
	str f=x(5, 6);
	print(abc);
	print(abcdef);
	print(def);
	print(f);
	
	tuple(abc, def)=tuple(abcdef, f);
	
	print(abc);
	print(abcdef);
	print(def);
	print(f);
	
	tuple(abc, def)=tuple("HI", "jadesoul");
	
	print(abc);
	print(abcdef);
	print(def);
	print(f);
)

// -------------------------------------------------- test2 : jtest2
// abc = "abc"
// abcdef = "abcdef"
// def = "def"
// f = "f"
// abc = "abcdef"
// abcdef = "abcdef"
// def = "f"
// f = "f"
// abc = "HI"
// abcdef = "abcdef"
// def = "jadesoul"
// f = "f"


int main () {}















