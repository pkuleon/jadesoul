#ifndef SPLIT_HPP_1324966420_55
#define SPLIT_HPP_1324966420_55
/**
 * File: split.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-27 14:13:40.548000
 * Written In: MSRA, beijing, China
 */

/**
 *  split -- split a big container into many subcontainers by a specified small delimiter container
 *
 *  by jadesoul @ 2010-10-1
 *  return a vector consists of pairs, each pair has a begin iterator
 *  and a end iterator of the prime container
*/
template <  class InputIterator1,
class InputIterator2    >
vector<pair<InputIterator1, InputIterator1> > split(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2    ) {
	vector<pair<InputIterator1, InputIterator1> > result;
	pair<InputIterator1, InputIterator1> tmp;

	ptrdiff_t len1 = distance(first1, last1), len2 = distance(first2, last2);
	if (len1 < len2) return result;
	InputIterator1 start = first1, stop = search(first1, last1, first2, last2);
	if (stop==last1) return result;
	do {
		result.push_back( make_pair(start, stop) );
		advance(stop, len2);
		start = stop;
		stop = search(start, last1, first2, last2);
	} while (stop!=last1);
	assert( stop==last1 );
	result.push_back( make_pair(start, last1) );
	return result;
}

#endif /* SPLIT_HPP_1324966420_55 */
