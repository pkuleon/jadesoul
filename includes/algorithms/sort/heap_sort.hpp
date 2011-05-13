/**
 * File: heap_sort.cpp
 * Description:
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2010-10-16 18:18:56.205000$
 */

//most bad: O(nlogn)
//average: O(nlogn)

template <  class Container >
void heap_sort(Container& c) {
	make_heap(c.begin(), c.end());
	sort_heap(c.begin(), c.end());
}
