/**
 * File: meminfo.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-12-27 22:36:41.335000
 * Written In: Peking University, beijing, China
 */

#include <jadesoul.hpp>

int main () {
	mem_seed();
	mem_gap("hi");
	int* a=new int[1024*1024];
	mem_gap("hi");
	meminfo b;
	cout<<b;
}

