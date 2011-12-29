/**
 * File: join.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-28 15:29:25.096000
 * Written In: MSRA, beijing, China
 */

#include <jadesoul.hpp>

void test1() {
	string a="0123456789";
	string b="-";
	
	cout<<a<<endl;
	cout<<b<<endl;
	
	char buf[100];
	string c(buf, join(a.begin(), a.end(), b.begin(), b.end(), buf));
	cout<<c.size()<<endl;
	cout<<c<<endl;
}

void test2() {
	string a="0123456789";
	string b="-";
	
	cout<<a<<endl;
	cout<<b<<endl;
	
	string c;
	c.resize(100);
	cout<<c.size()<<endl;
	cout<<"["<<c<<"]"<<endl;
	
	string d(c.begin(), join(a.begin(), a.end(), b.begin(), b.end(), c.begin()));
	cout<<c.size()<<endl;
	cout<<"["<<c<<"]"<<endl;
	cout<<d.size()<<endl;
	cout<<d<<endl;
	
}

void test3() {
	string frags="17361283681";
	string glue="+";
	
	cout<<frags<<endl;
	cout<<glue<<endl;
	
	size_t fsize=frags.size(), gsize=glue.size(), size;
	
	if (fsize==0) size=0;
	else if (gsize==0) size=fsize;
	else size=(fsize-1)*gsize+fsize;
	
	string c(size, 0);
	join(frags.begin(), frags.end(), glue.begin(), glue.end(), c.begin());
	
	cout<<c.size()<<endl;
	cout<<"["<<c<<"]"<<endl;
}

void test4() {
	str a="123";
	str b="ABC";
	str c[]={1, 2, '3', '4', '5'};
	dump(a.join(b));
	dump(b.join(a));
	dump(b.join(c, c+5));
}

int main () {
	// test1();
	// test2();
	// test3();
	test4();
	
}
