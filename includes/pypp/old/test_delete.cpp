/**
 * File: test_delete.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-11 15:58:40.324000
 * Written In: Peking University, beijing, China
 */

// #define debug
// #include "jadesoul.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class A {
public:
	bool a:1, b:1, c:1, d:1, e;
	A() {
		a=0;
		b=1;
		c=0;
		d=1;
		e=1;
	}
};

class var {//tmp do not work with const obj
public:
private:
	union {//data of all kinds of var, only one kind at a time
		struct {//for non-const ref=obj& or ptr=&obj, save its pointer
			union {
				void * p;//4 bytes
			} str;
		} heap;
		struct {//for non-const obj ref or ptr, created in var member functions, save its heapobj pointer
			union {
				str* pstr;
				list* plist;
				tuple* ptuple;
				set* pset;
				dict* pdict;
			} heapobj;
		} stack;
		struct {//this version just consider some type: int, long long, float, double
			union {
				int i;//4
				long long l;//8
				float f;//4
				double d;//8
			} num;//8 bytes
			int type;	//4 bytes
			int extra;	//4 bytes
		} builtin;//for const built-in type, save its data, 12 bytes
	} x;

};

int main () {
	// A a;
	// cout<<hex<<*(unsigned int*)(&a)<<endl;
	cout<<sizeof(var)<<endl;
	return 0;
}

