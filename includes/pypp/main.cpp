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
	var s=eval("hi");
	s.dump(cout, true).peek().dump(cout, true);
}

