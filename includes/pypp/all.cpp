[ Welcome to C++ compiling environment based on Notepad++ ]
using compilers:
g++ and msvc
[ Designed By Jadesoul @ 2008年3月13日22:09:37 ]
g++ (GCC) 4.4.0
Copyright (C) 2009 Free Software Foundation, Inc.
This is free software;
see the source for copying conditions.  There is NO
warranty;
not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Setting environment for using Microsoft Visual Studio 2008 x86 tools.
正在编译...
:
:
用于 80x86 的 Microsoft (R) 32 位 C/C++ 优化编译器 15.00.21022.08 版
版权所有(C) Microsoft Corporation。保留所有权利。

cl:
命令行 warning D9035 :
“o”选项已否决，并将在将来的版本中移除
pypp-unit-tests.cpp
Microsoft (R) Incremental Linker Version 9.00.21022.08
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:
pypp-unit-tests.exe
/out:
E:
\svnprojects-linux\jadesoul\includes\pypp\pypp-unit-tests.cpp.exe
libboost_python-vc90-mt-s.lib
gtest.lib
python26.lib
pypp-unit-tests.obj
:
:
编译成功，开始运行... {
[ mmgr: when init ]  str: 0 list: 0 tuple: 0 set: 0 dict: 0
Running Google Test main() from jadesoul
[==========] Running 12 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 12 tests from test
[ RUN      ] test.simple_demo
-------------------------------------- now running code
simple_demo() {
	var a=2;
	cout<<a<<endl;
	string s="hi";
	a=s;
	cout<<a<<endl;
}

-------------------------------------- the result
2
hi
[       OK ] test.simple_demo (80 ms)
[ RUN      ] test.simple_de1Smo
-------------------------------------- now running code
simple_de1Smo() {
	var a=40;
	cout<<a.uchar()<<" ";
}

-------------------------------------- the result
( [       OK ] test.simple_de1Smo (52 ms)
  [ RUN      ] test.cstr_demo
  -------------------------------------- now running code
cstr_demo() {
	var a="s";
}

-------------------------------------- the result
[       OK ] test.cstr_demo (32 ms)
[ RUN      ] test.for_demo
-------------------------------------- now running code
for_demo() {
	for_n(i, 10) {
		var x=40;
		cout<<x.uchar()<<" ";
	}
	cout<<endl;
	const char
	*p="abc";
	var a=p;
	var b="ac";
	cout<<a<<"\t"<<b<<endl;
}

-------------------------------------- the result
( ( ( ( ( ( ( ( ( (
		      abc     ac
		      [       OK ] test.for_demo (44 ms)
		      [ RUN      ] test.copy_construct_demo
		      -------------------------------------- now running code
copy_construct_demo() {
	var b=1;
	var a=b;
	a="hi";
}

-------------------------------------- the result
[       OK ] test.copy_construct_demo (50 ms)
[ RUN      ] test.empty_list_demo
-------------------------------------- now running code
empty_list_demo() {
	var a;
	a=list();
}

-------------------------------------- the result
[       OK ] test.empty_list_demo (23 ms)
[ RUN      ] test.empty_demo
-------------------------------------- now running code
empty_demo() {
	var a;
	a=str();
	a=list();
	a=set();
	a=dict();
}

-------------------------------------- the result
[       OK ] test.empty_demo (31 ms)
[ RUN      ] test.str_demo
-------------------------------------- now running code
str_demo() {
	string s="jadesoul";
	char *p="jadesoul";
	var s1="";
	var s2=str();
	var s3
	=str("hi");
	var s4=str(p);
	var s5=str(s.c_str());
	var s6(s);
	var s7(p);
	var s8(s
	       .c_str());
	var s9(s.c_str(), s.c_str()+s.size());
	var s10(p, p+3);
}

-------------------------------------- the result
[       OK ] test.str_demo (53 ms)
[ RUN      ] test.list_demo
-------------------------------------- now running code
list_demo() {
	var a[]={1,2,3};
	vector<var> tmp(a, a+3);
	var b(a, a+3);
	var c=list(a, a
		   +3);
	var d(tmp);
}

-------------------------------------- the result
[       OK ] test.list_demo (34 ms)
[ RUN      ] test.tuple_demo
-------------------------------------- now running code
tuple_demo() {
	var a=1, b=2, c=3;
	var x(a, b, c);
	var y=tuple(a, b, c);
}

-------------------------------------- the result
[       OK ] test.tuple_demo (46 ms)
[ RUN      ] test.set_demo
-------------------------------------- now running code
set_demo() {
	var a[]={1,2,2};
	var x(a, a+3, int());
	var y=set(a, a+3);
}

-------------------------------------- the result
[       OK ] test.set_demo (38 ms)
[ RUN      ] test.dict_demo
-------------------------------------- now running code
dict_demo() {
	var a[]={ "name", "jadesoul", "age", 24, "sex", 'M', "height", 1.76 };
	v
	ar x(a, a+8, float());
	var y=dict(a, a+8);
}

-------------------------------------- the result
[       OK ] test.dict_demo (48 ms)
[----------] 12 tests from test (570 ms total)

[----------] Global test environment tear-down
[==========] 12 tests from 1 test case ran. (578 ms total)
	[  PASSED  ] 12 tests.
	[ mmgr: before delete ]  str: 19 list: 4 tuple: 2 set: 3 dict: 3
[ mmgr: after delete ]  str: 0 list: 0 tuple: 0 set: 0 dict: 0
} 运行完毕
:
:
请按任意键继续. . .