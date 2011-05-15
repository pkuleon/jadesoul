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

#define debug
#include "pypp.hpp"


int main () {
	// var s=eval("[1,<1,3,(1,[2,3,4],3)>,{'age':2, 'set':<1,2,3,>, 'tuple':(1,2,3)},'hi', 1232.213]  ");
	var s=eval("[1,2,3]");
	s.dump(cout, true).peek();
}

