/**
 * File: select_sort.cpp
 * Description:
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * $Date: 2010-10-20 18:37:47.692000$
 */

//select the smallest element and exchange it with the n-th element
//O(n^2)

template< class iterator >
void select_sort(iterator begin, iterator end) {
	for (iterator round=begin; round<end-1; ++round) {
		iterator min=round;
		for (iterator it=round+1; it<end; ++it)
			if (*it<*min) min=it;
		iter_swap(round, min);
	}
}
