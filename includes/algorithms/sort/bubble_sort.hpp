/**
 * File: bubble_sort.cpp
 * Description:
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2010-10-16 18:17:28.900000$
 */

// O(n^2)
template <  class RandomAccessIterator >
void bubble_sort(RandomAccessIterator first, RandomAccessIterator last) {
	typedef RandomAccessIterator iter_t;
	for (iter_t end=last-1; first!=end; --end) {
		for (iter_t it=first; it!=end; ++it) {
			if (*it > *(it+1)) iter_swap(it, it+1) ;
		}
	}
}


