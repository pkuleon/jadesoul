/*
 * File: minmax.cpp
 * Description: 求最大最小值
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2010-10-13 18:29:21.195000$
 */

#define debug
#include "jadesoul.hpp"
#include <jadesoul>

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


template <class iterator>
pair<iterator, iterator> maxmin(iterator first, iterator last) {
	assert(first<last);
	iterator max=first, min=first;
	for (; first!=last; ++first)
		if (*max < *first) max=first;
		else if (*min > *first) min=first;
	return make_pair<iterator, iterator>(max, min);
}

template <class iterator, class T>
void binary_maxmin(iterator i, iterator j, T& max, T& min) {
	if (i==j) {
		max=*i;
		min=*i;
	} else if (i==j-1) {
		if (*i < *j) {
			max=*j;
			min=*i;
		} else {
			max=*i;
			min=*j;
		}
	} else {
		iterator mid=i+(j-i)/2;
		T lmax, lmin, rmax, rmin;
		binary_maxmin(i, mid, lmax, lmin);
		binary_maxmin(mid+1, j, rmax, rmin);
		if (lmax > rmax) max=lmax;
		else max=rmax;
		if (lmin > rmin) min=rmin;
		else min=lmin;
	}
}

void test () {
	
}

int a[]={1, 5, 3, 6, 3, 2, 8, 0, 9};
pair<int*, int*> b;
int ma, mi;
#define N 100


gtest(test_maxmin) {
	vec_int aa=range(1, 100000, 1).to_vec();
	for (int i=0; i<N; ++i) maxmin(aa.begin(), aa.end());
}

gtest(test_binary_maxmin) {
	vec_int aa=range(1, 100000, 1).to_vec();
	for (int i=0; i<N; ++i) binary_maxmin(aa.begin(), aa.begin()-1, ma, mi);
}
