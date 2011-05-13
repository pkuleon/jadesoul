/**
 * File: pypp-unit-tests.cpp
 * Description: all tests and results
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-12 15:10:24.705000
 * Written In: Peking University, beijing, China
 */

// #define debug
#define googletest
#include "pypp.hpp"



gtest(simpl_demo) {	
	var a=2;
	cout<<a<<endl;
	string s="hi";
	a=s;
	cout<<a<<endl;
}

gtest(for_demo) {
	for_n(i, 10) {
		var a=i+40;
		cout<<a.uchar()<<" ";
	}
	cout<<endl;
	const char *p="abc";
	var a=p;
	var b="ac";
	cout<<a<<"\t"<<b<<endl;
}

gtest(cstr_demo) {
	var a="s";
}

gtest(copy_construct_demo) {
	var b=1;
	var a=b;
	a="hi";
}

gtest(empty_list_demo) {
	var a;
	a=list();
}

gtest(empty_demo) {
	var a;
	a=str();
	a=list();
	a=set();
	a=dict();
}

gtest(str_demo) {
	string s="jadesoul";
	char *p="jadesoul";
	var s1="";
	var s2=str();
	var s3=str("hi");
	var s4=str(p);
	var s5=str(s.c_str());
	var s6(s);//special , just record its ptr in stack
	var s7(p);
	var s8(s.c_str());
	var s9(s.c_str(), s.c_str()+s.size());
	var s10(p, p+3);
}

gtest(list_demo) {
	var a[]={1,2,3};
	vector<var> tmp(a, a+3);
	var b(a, a+3);//list
	var c=list(a, a+3);//list
	var d(tmp);
	//var d=tmp;//TODO
}

gtest(tuple_demo) {
	var a=1, b=2, c=3;
	var x(a, b, c);//tuple, at least two vars
	var y=tuple(a, b, c);
	//x=tuple(3, 4, 5);//TOOD
}

gtest(set_demo) {
	var a[]={1,2,2};
	var x(a, a+3, int());//set, int() is the flag to help init as set
	var y=set(a, a+3);
}

gtest(dict_demo) {
	var a[]={
		"name", "jadesoul",
		"age", 24,
		"sex", 'M',
		"height", 1.76
	};
	var x(a, a+8, float());//dict, float() is the flag to help init as dict
	var y=dict(a, a+8);
}
