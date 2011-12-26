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
	int a=1;
        float b=2;
        string c="hi";
        var d=list(a, b, c, 4);
	d.dump();
        var e=tuple(a, b, "oh");
        var f=list(d, e, 7);
	d.append(1000);
        f.dump();
}
