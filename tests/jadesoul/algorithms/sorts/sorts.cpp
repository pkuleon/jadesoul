/**
 * File: sorts.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-27 15:12:03.854000
 * Written In: Peking University, beijing, China
 */

#include <jadesoul.hpp>

int main () {
	int a[]={1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
	
	vec_int b;
	
	b.assign(a, a+10);
	dump(b);
	heap_sort(b.begin(), b.end());
	dump(b);
	
	b.assign(a, a+10);
	vec_int c(b);
	merge_sort(b.begin(), b.end(), c.begin());
	dump(b);
	
	b.assign(a, a+10);
	quick_sort(b.begin(), b.end());
	dump(b);
	
	b.assign(a, a+10);
	insert_sort(b.begin(), b.end());
	dump(b);
	
	b.assign(a, a+10);
	bubble_sort(b.begin(), b.end());
	dump(b);
	
	b.assign(a, a+10);
	select_sort(b.begin(), b.end());
	dump(b);
	
	b.assign(a, a+10);
	exchange_sort(b.begin(), b.end());
	dump(b);
}
