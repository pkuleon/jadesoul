#ifndef LIST_HPP_1325430399_29
#define LIST_HPP_1325430399_29
/**
 * File: list.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-01 23:06:39.291000
 * Written In: Peking University, beijing, China
 */


#include "includes.hpp"

template<class T>
class  list : public object {
private:
	std::vector<T> vec;
public:
	typedef std::vector<T> container;
	// typedef container::iterator iterator;
	// typedef container::conse_iterator const_iterator;
	// typedef container::reverse_iterator reverse_iterator;
	// typedef container::const_reverse_iterator const_reverse_iterator;
	
	// list(iterator begin, iterator end):vec(begin, end) {}
	
};


#endif /* LIST_HPP_1325430399_29 */
