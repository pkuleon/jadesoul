/**
 * File: max_sub_sum
 * Description: 动态规划算法
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * $Date: 2010-10-16 18:37:47.692000$
 */

template< class iterator >
void max_sub_sum(iterator begin,
				 iterator end,
				 iterator& first,
				 iterator& last) {
	typename iterator_traits<iterator>::value_type sum=0, b=0;
	for (iterator i=begin; i<end; ++i) {
		if (b>0) b+=*i;
		else {
			b=*i;
			first=i;
		}
		if (sum<b) {
			sum=b;
			last=i;
		}
	}
}
