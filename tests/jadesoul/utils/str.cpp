/**
 * File: str.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-12-27 22:53:13.267000
 * Written In: Peking University, beijing, China
 */

#include <jadesoul.hpp>

void test_constructors() {
	// str a=str("hi")+str(2147483648L);
	str a=str("hi")+str(1);
	// string c("shit");
	// str a=c;
	for_n(i, a.size()) cout<<a.at(i);
	cout<<endl;
	cout<<a[-1]<<endl;
	cout<<a[-2]<<endl;
	
	char t[]="sjjjdiuuiw";
	str c(t, t+10);
	string e="asdasdkjasd";
	str d(e.begin(), e.end());
	cout<<c[-1]<<endl;
	cout<<d[-2]<<endl;
}

void test_slice() {
	str a="0123456789";
	cout<<a["1:4"]<<endl;
	cout<<a[":4"]<<endl;
	cout<<a["4:"]<<endl;
	cout<<a["1:8:2"]<<endl;
	cout<<a["::-1"]<<endl;
	cout<<a["::-2"]<<endl;
	cout<<a["-1::-3"]<<endl;
}

void test_substr() {
	str a="0123456789";
	
	cout<<a(1, 5)<<endl;
	cout<<a(1, 5, 2)<<endl;
	cout<<a(1, 5, -2)<<endl;
	cout<<a(5, 1, -2)<<endl;
	cout<<a(-5, -1)<<endl;
	cout<<a(-5, -1, -1)<<endl;
	cout<<a(5, -1)<<endl;
	cout<<a(5, -1, 1)<<endl;
	
	for_n(i, 10) cout<<a(i)<<endl;
	for_n(i, 10) cout<<a(-i-1)<<endl;
	for_n(i, 10) cout<<a(0, i)<<endl;
	for_n(i, 10) cout<<a(0, -i)<<endl;
}

void test_join() {
	str a="123";
	str b="(^_^)";
	str c[]={1, "HI", '3', 3.14, "world"};
	
	for_n(i, 5) dump(c[i]);
	
	vector<str> d(c, c+5);
	dump(d);
	str e=b.join(d);
	
	dump(e);
	
	string f(100, '+');
	string g(f.begin(), join(b.begin(), b.end(), c, c+5, f.begin()));
	cout<<g<<endl;
}

void test_split() {
	str a="1233243243234234";
	str b="3243";
	vec_str c;
	a.split(b, c);
	dump(c);
	
	std::set<string> d;
	a.split(b, d);
	dump(d);
	
	dump(a.split(b));
}

void test_find() {
	cout<<string::npos<<endl;
	cout<<size_t(-1)<<endl;
	cout<<int(string::npos)<<endl;
	
	str a="ABCDEFCG";
	str b="C";
	dump(a.find(b));
}

void test_rfind() {
	str a="ABCDEFCG";
	str b="C";
	dump(a.rfind(b));
	dump(a.rfind("H"));
}

void test_replace() {
	str a="ABCDEFCG";
	str b="C";
	dump(a.rfind(b));
	dump(a.rfind("H"));
}

int main () {
	// test_constructors();
	// test_slice();
	// test_substr();
	// test_join();
	// test_split();
	// test_find();
	// test_rfind();
	test_replace();
}

