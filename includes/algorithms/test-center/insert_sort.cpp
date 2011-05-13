/*
 * File: insert_sort.cpp
 * Description: 插入排序算法实现
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2010-10-10 22:28:19.666000$
 */


#include <iostream>
using namespace std;

#define show(x) print(#x, x)
template<class RandomAccessIterator >
void insert_sort2(RandomAccessIterator  first, RandomAccessIterator  last) {
	int i, j;
	for (i=1; i<last-first; ++i) {
		show(i);
		iterator_traits<RandomAccessIterator>::value_type now(*(first+i));
		show(now);
		for (j=i-1; j>=0 && now < *(first+j); --j) {
			*(first+j+1)=*(first+j);
			print("\tj", j);
		}
		*(first+j+1)=now;
	}
}
