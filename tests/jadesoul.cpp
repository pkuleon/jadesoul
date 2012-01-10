/**
 * File: jadesoul.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-28 13:51:22.801000
 * Written In: MSRA, beijing, China
 */

#include <jadesoul.hpp>

int main () {
	str s=" ssjflak sdjfiwejlk sjfd ";
	printv(s);
	printv(s.repr());
	printv(s.striped().repr());
	printv(s.split());
	printv(L(s.split()));
	printv(L("asdasd", "123"));
	
	int a[]={1,2,3};
	vecint b(a, a+3);
	printv(b);
}

