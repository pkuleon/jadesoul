#ifndef JOIN_HPP_1325054147_89
#define JOIN_HPP_1325054147_89
/**
 * File: join.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-28 14:35:47.895000
 * Written In: MSRA, beijing, China
 */

#include "includes.hpp"

/**
 *  join -- join all elememts in a Fragments container with a Glue container.
 *  that is join some Fragments with Glue between every two Fragments.
 *  by jadesoul @ 2011-12-28
 *  return a new container
*/
template <class SequenceInputIterator, class OutputIterator>
OutputIterator join(SequenceInputIterator fbegin, SequenceInputIterator fend,
	SequenceInputIterator gbegin, SequenceInputIterator gend, OutputIterator result) {
	
	//for special cases, move fast
	if (gbegin==gend) return std::copy(fbegin, fend, result);
	if (fbegin==fend) return result;
	
	//copy first frag
	*result++=*fbegin++;
	SequenceInputIterator stump=gbegin;
	while (fbegin!=fend) {
		//insert a glue before each frag
		while (gbegin!=gend) *result++=*gbegin++;
		gbegin=stump;
		//copy frag
		*result++=*fbegin++;
	}
	return result;
}

template <class FragmentsInputIterator, class GlueInputIterator, class OutputIterator, class Converter>
OutputIterator join(FragmentsInputIterator fbegin, FragmentsInputIterator fend,
	GlueInputIterator gbegin, GlueInputIterator gend, OutputIterator result, Converter conv) {
	
	//for special cases, move fast
	if (gbegin==gend) return std::copy(fbegin, fend, result);
	if (fbegin==fend) return result;
	
	//copy first frag
	*result++=conv(*fbegin++);
	GlueInputIterator stump=gbegin;
	while (fbegin!=fend) {
		//insert a glue before each frag
		while (gbegin!=gend) *result++=*gbegin++;
		gbegin=stump;
		//copy frag
		*result++=*fbegin++;
	}
	return result;
}

#endif /* JOIN_HPP_1325054147_89 */
