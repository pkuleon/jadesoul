/**
 * File: split.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-27 15:04:56.734000
 * Written In: Peking University, beijing, China
 */

#include <jadesoul.hpp>

using namespace std;

int main () {
	int a[]={1, 2, 3, 4, 5};
	int b[]={2};
	vec_int c(a, a+5);
	vec_int d(b, b+1);
	split(a, a+5, b, b+1);
	split(c.begin(), c.end(), d.begin(), d.end());
}

