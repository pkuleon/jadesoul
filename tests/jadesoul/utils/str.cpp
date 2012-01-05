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

jtest(constructors, test1,
	str a=str("hi")+str(1);
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
)

jtest(slice, test2,
	str a="0123456789";
	cout<<a["1:4"]<<endl;
	cout<<a[":4"]<<endl;
	cout<<a["4:"]<<endl;
	cout<<a["1:8:2"]<<endl;
	cout<<a["::-1"]<<endl;
	cout<<a["::-2"]<<endl;
	cout<<a["-1::-3"]<<endl;
)

jtest(substr, test3,
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
)

jtest(join, test4,
	str a="123";
	str b="(^_^)";
	str c[]={1, "HI", '3', 3.14, "world"};
	
	for_n(i, 5) dump(c[i]);
)

jtest(split, test5,
	str a="1233243243234234";
	str b="3243";
	vecstr c;
	a.split(b, c);
	dump(c);
	
	std::set<string> d;
	a.split(b, d);
	dump(d);
	
	dump(a.split(b));
)

jtest(find, test6,
	cout<<string::npos<<endl;
	cout<<size_t(-1)<<endl;
	cout<<int(string::npos)<<endl;
	
	str a="ABCDEFCG";
	str b="C";
	dump(a.find(b));
)

jtest(rfind, test7,
	str a="ABCDEFCG";
	str b="C";
	dump(a.rfind(b));
	dump(a.rfind("H"));
)

jtest(replace, test8,
	str a="ABCDEFCG";
	str b="B";
	str c="C";
	dump(a.replace(b, c));
	dump(a);
	dump(a.replaced(c, b));
	dump(a.replaced(c, b, 2));
	dump(a.replaced(c, b, 1));
	dump(a);
)

jtest(count, test9,
	printv(str("ABCDEFCDG2").count("B"));
	printv(str("ABCDEFCDG2").count("C"));
	printv(str("ABCDEFCDG2").count("CD"));
	printv(str("ABCDEFCDG2").count(1));
	printv(str("ABCDEFCDG2").count(2));
	printv(str("ABCDEFCDG2").count("C", 2));
	printv(str("ABCDEFCDG2").count("C", 3));
	printv(str("ABCDEFCDG2").count("C", 3, -4));
	printv(str("ABCDEFCDG2").count("C", 3, -3));
	printv(str("ABCDEFCDG2").count("C", -3));
	printv(str("ABCDEFCDG2").count("C", -4));
)

jtest(center, test10,
	printv(str("ABC").center(10, ' '));
	printv(str("ABC").center(10, '*'));
	printv(str("ABC").center(10, '-'));
	printv(str("ABCDEFG").center(2, '-'));
	printv(str("ABCDEFG").center(3, '-'));
	printv(str("ABC").center(2, '-'));
	printv(str("ABC").center(1, '-'));
)

jtest(startswith, test11,
	printv(str("ABCDEFG").startswith("A"));
	printv(str("ABCDEFG").startswith("B"));
	printv(str("ABCDEFG").startswith("AB"));
	printv(str("ABCDEFG").startswith("AC"));
	printv(str("ABCDEFG").startswith("ABC"));
	printv(str("ABCDEFG").startswith("CDE"));
	printv(str("ABCDEFG").startswith("CDE", 1));
	printv(str("ABCDEFG").startswith("CDE", 2));
	printv(str("ABCDEFG")(2).startswith("CDE"));
	printv(str("ABCDEFG")(2, -1).startswith("CDE"));
	printv(str("ABCDEFG")(2, -1, 2).startswith("CDE"));
	printv(str("ABCDEFG").startswith("CDE", 3));
	printv(str("ABCDEFG").startswith("CDE", 3, 5));
	printv(str("ABCDEFG").startswith("CDE", 3, 6));
	printv(str("ABCDEFG").startswith("CDE", 3, -1));
)

jtest(endswith, test12,
	printv(str("ABCDEFG").endswith("G"));
	printv(str("ABCDEFG").endswith("FG"));
	printv(str("ABCDEFG").endswith("AB"));
	printv(str("ABCDEFG").endswith("AC"));
	printv(str("ABCDEFG").endswith("ABC"));
	printv(str("ABCDEFG").endswith("CDE"));
	printv(str("ABCDEFG").endswith("CDE", 0, -1));
	printv(str("ABCDEFG").endswith("CDE", 0, -2));
	printv(str("ABCDEFG").endswith("CDE", 0, -3));
)

jtest(expandtabs, test13,
	printv(str("ABCDEFG\n\tsadasd\n\tsadas").expandtabs(18));
)

jtest(upper, test14,
	printv(str("abCDefG").upper());
)

jtest(lower, test15,
	printv(str("abCDefG").lower());
)

jtest(swapcase, test16,
	printv(str("abCDefG").swapcase());
)

jtest(reverse, test17,
	printv(str("abCDefG").reverse());
	printv(str("abCDefG").reversed());
)

jtest(repeat, test18,
	printv(str("abCDefG").repeated(-2));
	printv(str("abCDefG").repeated(3));
)

jtest(sort, test19,
	printv(str("qnmaldoep").sort());
	printv(str("qnmaldoep").sorted());
)

jtest(strip, test20,
	printv(str("  aqnmaldoep\t   ").strip());
	printv(str("  aqnmaldoep\t   ").lstrip());
	printv(str("  aqnmaldoep\t   ").rstrip());
	printv(str("  aqnmaldoep\t   ").striped());
	printv(str("  aqnmaldoep\t   ").lstriped());
	printv(str("  aqnmaldoep\t   ").rstriped());
)

jtest(multiply, test21,
	printv(str("ABC")*10);
	printv(str("ABC")*0);
	printv(str("ABC")*-10);
)

int main () {}

