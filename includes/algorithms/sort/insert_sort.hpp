/**
 * File: insert_sort.cpp
 * Description:
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2010-10-16 18:18:56.205000$
 */

// O(n^2)

template <  class RandomAccessIterator >
void insert_sort(RandomAccessIterator begin, RandomAccessIterator end) {
	RandomAccessIterator i, j;
	for (i=begin+1; i<end; ++i) {
		for (j=i; j>begin && *i < *(j-1); --j) ;
		if (j!=i) rotate(j, i, i+1);
	}
}



//using binary search when insert
// O(n log n)

template <  class RandomAccessIterator >
void binary_insert_sort(RandomAccessIterator begin, RandomAccessIterator end) {
	RandomAccessIterator i, low, high, mid;
	for (i=begin+1; i<end; ++i) {
		low=begin;
		high=i-1;
		while (low<high) {
			mid=low+(high-low)/2;
			if (*mid==*i) {
				low=mid;//let low represent the result
				break;
			}
			else if (*mid<*i) low=mid+1;
			else high=mid-1;
		}
		if (low!=i) rotate(low, i, i+1);
	}
}
