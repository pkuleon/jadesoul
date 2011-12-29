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
 *  That is join some Fragments with Glue between every two Fragments.
 *  In this case, each element in the Fragments is still a container, each element
 *  in this container is similiar to each element in the Glue.
 *  by jadesoul @ 2011-12-29
 *  return the end iterator of the result
*/

// List_join_ListOfList
// Elememt_join_List
template <class FragmentsInputIterator, class GlueInputIterator, class OutputIterator>
OutputIterator join(FragmentsInputIterator fbegin, FragmentsInputIterator fend,
	GlueInputIterator gbegin, GlueInputIterator gend, OutputIterator result) {
	
	// for special cases, move fast
	if (fbegin==fend) return result;
	
	// copy first frag
	std::copy(fbegin->begin(), fbegin->end(), result);
	GlueInputIterator stump=gbegin;
	while (++fbegin!=fend) {
		// insert a glue before each frag
		while (gbegin!=gend) *result++=*gbegin++;
		gbegin=stump;
		// copy frag
		std::copy(fbegin->begin(), fbegin->end(), result);
	}
	return result;
}

/**
 *  join -- join all elememts in a Fragments container with a Glue container.
 *  That is join some Fragments with Glue between every two Fragments.
 *  In this case, each element in the Fragments is similiar to each element in the Glue.
 *  by jadesoul @ 2011-12-28
 *  return the end iterator of the result
*/

// List_join_List
// Elememts_join_Elememts
template <class FragmentsInputIterator, class GlueInputIterator, class OutputIterator>
OutputIterator join(FragmentsInputIterator fbegin, FragmentsInputIterator fend,
	GlueInputIterator gbegin, GlueInputIterator gend, OutputIterator result, int /*flag*/) {
	
	// for special cases, move fast
	if (gbegin==gend) return std::copy(fbegin, fend, result);
	if (fbegin==fend) return result;
	
	// copy first frag
	*result++=*fbegin++;
	GlueInputIterator stump=gbegin;
	while (fbegin!=fend) {
		// insert a glue before each frag
		while (gbegin!=gend) *result++=*gbegin++;
		gbegin=stump;
		// copy frag
		*result++=*fbegin++;
	}
	return result;
}




#endif /* JOIN_HPP_1325054147_89 */
