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
	str b="-";
	str c[]={1, 2, '3', '4', '5'};
	dump(a.join(b));
	dump(b.join(a));
	dump(b.join("ABC"));
	// dump(b.join(c, c+5));
}

int main () {
	// test_constructors();
	// test_slice();
	// test_substr();
	test_join();
}

