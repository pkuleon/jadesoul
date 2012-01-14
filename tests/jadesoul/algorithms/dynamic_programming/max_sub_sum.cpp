/**
 * File: max_sub_sum.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-28 13:46:47.257000
 * Written In: Peking University, beijing, China
 */

#include <jadesoul.hpp>

int main () {
	int a[]={1, 2, -3, 4, -5, 11, 18, -19};
	vec_int c(a, a+8);
	dump(c);
	
	vec_int::iterator x, y; 
	max_sub_sum(c, x, y); 
	
	vec_int d;
	d.assign(x, y+1);
	dump(d);
}



