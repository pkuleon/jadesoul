/**
 * File: exchange_sort.cpp
 * Description:
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * $Date: 2010-10-20 18:37:47.692000$
 */

//O(n^2)
template< class iterator >
void exchange_sort(iterator begin, iterator end) {
	for (iterator now=begin; now<end-1; ++now) {
		for (iterator it=now+1; it<end; ++it)
			if (*now>*it) iter_swap(now, it);
	}
}

