#ifndef SLICE_HPP_1324966077_89
#define SLICE_HPP_1324966077_89
/**
 * File: slice.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-27 14:07:57.894000
 * Written In: MSRA, beijing, China
 */

#include "includes.hpp"


/**
 *  slice -- slice a big container by a range to get a smaller one (will copy a new one)
 *
 *  by jadesoul @ 2010-10-1
 *  return a new container
*/

template <  class Container >
Container slice(Container& c, int start, int stop) {
	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	assert( r.step!=0 );
	int len=c.size();
	if (len==0) return Container();

	if (r.step<0) {
		if (r.very_begin()) r.start=start;
		if (r.very_end()) r.stop=stop;
	}

	//adjust start
	if (r.start<0)
		if (r.start+len<0) r.start=0;
		else r.start+=len;
	else if (r.start>len) r.start=len;

	//adjust stop
	if (r.stop<0)
		if (r.stop+len<0) r.stop=0;
		else r.stop+=len;
	else if (r.stop>len) r.stop=len;

	if (r.start==r.stop) return Container();

	//empty situation
	if ((r.start<r.stop AND r.step<0) || (r.start>r.stop AND r.step>0)) return Container();

	if (r.step==1) {
		iterator first=c.begin(), last=first;
		if (r.start!=0)
			advance(first, r.start);
		if (r.stop==len)
			last=c.end();
		else
			advance(last, r.stop);
		return Container(first, last);
	} else if (r.step==-1) {
		r.start=len-r.start;
		r.stop=len-r.stop;
		reverse_iterator first=c.rbegin(), last=first;
		if (r.start!=0)
			advance(first, r.start);
		if (r.stop==len)
			last=c.rend();
		else
			advance(last, r.stop);
		return Container(first, last);
	} else {
		Container ret;
		if (r.start<r.stop AND r.step>0)
			for (int i=r.start; i<r.stop; i+=r.step) ret.push_back(c[i]);
		if (r.start>r.stop AND r.step<0)
			for (int i=r.start; i>r.stop; i+=r.step) ret.push_back(c[i]);
		return ret;
	}
}

#endif /* SLICE_HPP_1324966077_89 */
