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

#define jtest(name, ...) \
struct name{\
	name() {\
		cout<<"-------------------------------------- now running code\nvoid "\
		<<#name<<"() {\n\t"\
		<<#__VA_ARGS__\
		<<"\n}\n\n-------------------------------------- the result\n";\
	}\
};\
gtest(name) {\
	name __tmp;\
	__VA_ARGS__\
}


jtest(simple_demo,//this is the test name
	var a=2;
	cout<<a<<endl;
	string s="hi";
	a=s;
	cout<<a<<endl;
)


jtest(var_demo,
	var a=40;
	cout<<a.uchar()<<" ";
)

jtest(cstr_demo,
	var a="s";
	a.debug();
)

jtest(for_demo,
	for_n(i, 10) {
		var x=i+40;
		cout<<x.uchar()<<endl;
	}
	cout<<endl;
	const char *p="abc";
	var a=p;
	var b="ac";
	cout<<a<<"\t"<<b<<endl;
)

jtest(copy_construct_demo,
	var b=1;
	var a=b;
	a="hi";
)

jtest(empty_list_demo,
	var a;
	a=list();
)

jtest(empty_demo,
	var a;
	a=str();
	a=list();
	a=set();
	a=dict();
)

jtest(str_demo,
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
)

jtest(list_demo,
	var a[]={1,2,3};
	vector<var> tmp(a, a+3);
	var b(a, a+3);//list
	var c=list(a, a+3);//list
	var d(tmp);
	//var d=tmp;//TODO
)	

jtest(tuple_demo,
	var a=1, b=2, c=3;
	var x(a, b, c);//tuple, at least two vars
	var y=tuple(a, b, c);
	//x=tuple(3, 4, 5);//TOOD
)

jtest(set_demo,
	var a[]={1,2,2};
	var x(a, a+3, int());//set, int() is the flag to help init as set
	var y=set(a, a+3);
)

jtest(dict_demo,
	var a[]={
		"name", "jadesoul",
		"age", 24,
		"sex", 'M',
		"height", 1.76
	};
	var x(a, a+8, float());//dict, float() is the flag to help init as dict
	var y=dict(a, a+8);
)


jtest(demo_print_list_in_stack,
	var tmp[]={1, 2, 3, "你好", 32.9};
	py::list lst(tmp, tmp+5);
	var l(lst);
	cout<<l<<endl;
)

jtest(demo_print_list_in_heap,
	var tmp[]={1, 2, 3, "hi", 32.9};
	var l=list(tmp, tmp+5);
	cout<<l<<endl;
)

jtest(demo_print_tuple_in_stack,
	var tmp[]={1, 2, 3, "你好", 32.9};
	py::tuple x(tmp, tmp+5);
	var t(x);
	cout<<t<<endl;
)

jtest(demo_print_tuple_in_heap,
	var a=1, b=2, c="hi";
	var t1(a, b, c);
	var t2=tuple(a, b, c);
	cout<<t1<<endl<<t2<<endl;
)

jtest(demo_print_set_in_stack,
	var tmp[]={1, 2, 2, "你好", 32.9};
	py::set x(tmp, tmp+5);
	var s(x);
	cout<<s<<endl;
)

jtest(demo_print_set_in_heap,
	var tmp[]={1, 2, 2, 3.3, 3.3};
	var s1(tmp, tmp+5, int())//dict, int() is the flag to help init as set
	var s2=set(tmp, tmp+5);
	cout<<s1<<endl<<s2<<endl;
)


jtest(demo_print_dict_in_stack,
	var a[]={
		"name", "jadesoul",
		"age", 24,
		"sex", 'A',
		"height", 1.76
	};
	py::dict m;
	for_in(i, 0, 8, 2) {
		m[a[i]]=a[i+1];
	}
	var v=m;
	cout<<v<<endl;
	m["name"]=1;
	cout<<var(m)<<endl;
	cout<<v<<endl;
)

jtest(demo_print_dict_in_heap,
	var a[]={
		"name", "jadesoul",
		"age", 24,
		"sex", 'A',
		"height", 1.76
	};
	var x(a, a+8, float());//dict, float() is the flag to help init as dict
	var y=dict(a, a+8);
	cout<<x<<endl<<y<<endl;
)

jtest(demo_eval,
	var s;
	s=LIST(1,2,3,  -4.234,9345   ,'你好',"我也好");
	s.dump().peek();
	s=TUPLE(1,2,.2,3,'你好','你好');
	s.dump().peek();
	s=SET(1,2,.2,3,3,4,4,5,'你好','你好');
	s.dump().peek();
	s=DICT(
		'name':'jadesoul',
		'age':27,
		'性别':'男',
		123:456
	);
	s.dump().peek();
	
	s=VAR(
		{
			'campany':'gbsoft',
			'leafer':'jadesoul',
			'list':[1,2,3 , 4.1, 4.1, 'hello', 'hello', 1],
			'tuple':(1,2,3 , 4.1, 4.1, 'hello', 'hello', 1),
			'set':<1,2,3 , 4.1, 4.1, 'hello', 'hello', 1>,
			'dict':{'nice':'nice', 1:1}
		}
	);
)


jtest(demo_pprint,
	string s="[1,2,3]";
	var v=eval(s);
	v.dump().append(2).dump();
	s="([1,2,3,4,{'a':1, 'b':2, 3:3}, (1,2,3), <1,2,2>])";
	v=eval(s);
	v.print();
)

jtest(demo_json,
	string s, l;
	char buf[4096];
	fstream fs("test.json");
	while (fs.getline(buf, 4096)) {
		s+=buf;
	}
	var v=eval(s);
	// v.dump();
)

jtest(demo_sort1,
	int a=2;
	float b=1.1;
	string c="hi";
	var v=list(1, a, b, c);
	v
		.dump()
		.print()
		.sort()
		.print()
		.rsort()
		.print()
	;
)

jtest(demo_sort2,
	var v=range(10);
	v.print();
)

jtest(demo_sort2,
	int a=1;
	float b=2;
	string c="hi";
	var d=list(a, b, c, 4);
	var e=tuple(a, b, "oh");
	var f=list(d, e, 7);
	f.dump();
)



jtest(demo_sort2,
	char s[]="{'a':{'b':1}}";
	var a=eval(s);
	a.dump();
	
	
	
)

// a['1:2:3']

