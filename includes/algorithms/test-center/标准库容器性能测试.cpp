/*
 * Description: 
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2010-10-09 21:32:09.836000$
 */

#include <jadesoul>
#include <list>
#include <vector>
#include <algorithm>

vector<int> a;
list<int> b;

void test () {
	cout<<"hello, world"<<endl;
}


gtest(vector_push) {
	for (int i=0; i<10000000; ++i) {
		a.push_back(i);
	}
}



gtest(list_push) {
	for (int i=0; i<10000000; ++i) {
		b.push_back(i);
	}
}

gtest(vector_search) {
	for (int i=0; i<1; ++i) {
		find(a.begin(), a.end(), 10000000);
	}
}

gtest(list_search) {
	for (int i=0; i<1; ++i) {
		find(b.begin(), b.end(), 10000000);
	}
}