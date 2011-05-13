/**
 * File: select_k_th
 * Description: 选择第k小的数
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * $Date: 2010-10-16 18:37:47.692000$
 */

//O(n)

template< class iterator >
iterator select_k_th(iterator begin, iterator end, unsigned int k) {
	assert(end-begin>=k);

	if (end-begin==1) return begin;
	rotate(begin, begin+1, end);
	iterator mid=partition(begin, end);

	if (k<=mid-begin) return select_k_th(begin, mid, k);
	else return select_k_th(mid, end, k-(mid-begin));
}
