/**
 * File: main.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-12 15:19:55.560000
 * Written In: Peking University, beijing, China
 */

// #define debug
#include "pypp.hpp"


int main () {
	// var s=LIST(-789,
	// 1e-12);
	// s.print().append(2).print().sort().print().rsort().print()
		// .push(0).print().pop().print().extend(LIST(5,5,5)).print();
	// cout<<(sizeof(var));
	var a=LIST(1,2,3,[4,5,'ahsdfhasjdh']);
	a.dump();
}

