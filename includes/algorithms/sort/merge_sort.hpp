/**
 * File: merge_sort.cpp
 * Description:
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2010-10-16 18:37:47.692000$
 */

/*
  * tmp is a temporary helper container which at least has the same size of region [first, last)
  */

//O(nlogn)
template <  class RandomAccessIterator >
void merge_sort(RandomAccessIterator first, RandomAccessIterator last, RandomAccessIterator tmp) {
	assert( last>first );
	ptrdiff_t len=last-first;
	if (len>1) {
		ptrdiff_t half_len=len/2;
		RandomAccessIterator mid=first+half_len;
		merge_sort(first, mid, tmp);
		merge_sort(mid, last, tmp+half_len);
		merge(first, mid, mid, last, tmp);
		copy(tmp, tmp+len, first);
	}
}

/*
  * compare function version
  */
template <  class RandomAccessIterator, class Compare >
void merge_sort(RandomAccessIterator first, RandomAccessIterator last, RandomAccessIterator tmp, Compare cmp) {
	assert( last>first );
	ptrdiff_t len=last-first;
	if (len>1) {
		ptrdiff_t half_len=len/2;
		RandomAccessIterator mid=first+half_len;
		merge_sort(first, mid, tmp, cmp);
		merge_sort(mid, last, tmp+half_len, cmp);
		merge(first, mid, mid, last, tmp, cmp);
		copy(tmp, tmp+len, first);
	}
}

/*
 * improvement of merge sort
 * by divide the container into 4 parts
 */
template <  class RandomAccessIterator >
void merge_sort_improved(RandomAccessIterator first, RandomAccessIterator last, RandomAccessIterator tmp) {
	assert( last>first );
	ptrdiff_t len=last-first;
	if (len<=16) {
		insert_sort(first, last);
	} else {
		ptrdiff_t len_half=len/2;
		RandomAccessIterator mid=first+len_half;

		ptrdiff_t len_left=mid-first;
		ptrdiff_t len_quarter_left=len_left/2;
		RandomAccessIterator quarter_left=first+len_quarter_left;
		merge_sort_improved(first, quarter_left, tmp);
		merge_sort_improved(quarter_left, mid, tmp+len_quarter_left);

		ptrdiff_t len_right=last-mid;
		ptrdiff_t len_quarter_right=len_right/2;
		RandomAccessIterator quarter_right=mid+len_quarter_right;
		merge_sort_improved(mid, quarter_right, tmp+len_half);
		merge_sort_improved(quarter_right, last, tmp+len_half+len_quarter_right);

		merge(first, quarter_left, quarter_left, mid, tmp);
		merge(mid, quarter_right, quarter_right, last, tmp+len_half);
		merge(tmp, tmp+len_half, tmp+len_half, tmp+len, first);
	}
}
