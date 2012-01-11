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
	print(str("ABCDEFCDG2").count("B"));
	print(str("ABCDEFCDG2").count("C"));
	print(str("ABCDEFCDG2").count("CD"));
	print(str("ABCDEFCDG2").count(1));
	print(str("ABCDEFCDG2").count(2));
	print(str("ABCDEFCDG2").count("C", 2));
	print(str("ABCDEFCDG2").count("C", 3));
	print(str("ABCDEFCDG2").count("C", 3, -4));
	print(str("ABCDEFCDG2").count("C", 3, -3));
	print(str("ABCDEFCDG2").count("C", -3));
	print(str("ABCDEFCDG2").count("C", -4));
)

jtest(center, test10,
	print(str("ABC").center(10, ' '));
	print(str("ABC").center(10, '*'));
	print(str("ABC").center(10, '-'));
	print(str("ABCDEFG").center(2, '-'));
	print(str("ABCDEFG").center(3, '-'));
	print(str("ABC").center(2, '-'));
	print(str("ABC").center(1, '-'));
)

jtest(startswith, test11,
	print(str("ABCDEFG").startswith("A"));
	print(str("ABCDEFG").startswith("B"));
	print(str("ABCDEFG").startswith("AB"));
	print(str("ABCDEFG").startswith("AC"));
	print(str("ABCDEFG").startswith("ABC"));
	print(str("ABCDEFG").startswith("CDE"));
	print(str("ABCDEFG").startswith("CDE", 1));
	print(str("ABCDEFG").startswith("CDE", 2));
	print(str("ABCDEFG")(2).startswith("CDE"));
	print(str("ABCDEFG")(2, -1).startswith("CDE"));
	print(str("ABCDEFG")(2, -1, 2).startswith("CDE"));
	print(str("ABCDEFG").startswith("CDE", 3));
	print(str("ABCDEFG").startswith("CDE", 3, 5));
	print(str("ABCDEFG").startswith("CDE", 3, 6));
	print(str("ABCDEFG").startswith("CDE", 3, -1));
)

jtest(endswith, test12,
	print(str("ABCDEFG").endswith("G"));
	print(str("ABCDEFG").endswith("FG"));
	print(str("ABCDEFG").endswith("AB"));
	print(str("ABCDEFG").endswith("AC"));
	print(str("ABCDEFG").endswith("ABC"));
	print(str("ABCDEFG").endswith("CDE"));
	print(str("ABCDEFG").endswith("CDE", 0, -1));
	print(str("ABCDEFG").endswith("CDE", 0, -2));
	print(str("ABCDEFG").endswith("CDE", 0, -3));
)

jtest(expandtabs, test13,
	print(str("ABCDEFG\n\tsadasd\n\tsadas").expandtabs(18));
)

jtest(upper, test14,
	print(str("abCDefG").upper());
)

jtest(lower, test15,
	print(str("abCDefG").lower());
)

jtest(swapcase, test16,
	print(str("abCDefG").swapcase());
)

jtest(reverse, test17,
	print(str("abCDefG").reverse());
	print(str("abCDefG").reversed());
)

jtest(repeat, test18,
	print(str("abCDefG").repeated(-2));
	print(str("abCDefG").repeated(3));
)

jtest(sort, test19,
	print(str("qnmaldoep").sort());
	print(str("qnmaldoep").sorted());
)

jtest(strip, test20,
	print(str("  aqnmaldoep\t   ").strip());
	print(str("  aqnmaldoep\t   ").lstrip());
	print(str("  aqnmaldoep\t   ").rstrip());
	print(str("  aqnmaldoep\t   ").striped());
	print(str("  aqnmaldoep\t   ").lstriped());
	print(str("  aqnmaldoep\t   ").rstriped());
)

jtest(multiply, test21,
	print(str("ABC")*10);
	print(str("ABC")*0);
	print(str("ABC")*-10);
)

jtest(repr, test22,
	print(str("ABC").repr());
	print(str("A\tB"));
	print(str("A\tB").repr());
	print(str("A\\B"));
	print(str("A\\B").repr());
)

int main () {}

