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



class list : public object {
public:
	typedef object* ref;
	typedef std::vector<ref> container;
	typedef container::iterator iterator;
	typedef container::const_iterator const_iterator;
	typedef container::reverse_iterator reverse_iterator;
	typedef container::const_reverse_iterator const_reverse_iterator;
	
private:
	container vec;
	
public:
	template<class T1>
	list(T1 t1) {
		append(&t1);
	}
	
	template<class T1, class T2>
	list(T1 t1, T2 t2) {
		append(&t1);
		append(&t2);
	}
	
	template<class T1, class T2, class T3>
	list(T1 t1, T2 t2, T3 t3) {
		append(&t1);
		append(&t2);
		append(&t3);
	}
	
	// list(iterator begin, iterator end):vec(begin, end) {}
	
	inline append(ref& r) {
		vec.push_back(r);
	}
	
	inline object& operator [](int i) {
		return **(i+(i<0)?vec.end():vec.begin());
	}
	
	object& at(int i) {
		uint l=len();
		if (i<0) i+=l;
		assert(i>=0 AND i<l);
		return this->operator[](i);
	}
	
	inline const size_t len() const {
		return vec.size();
	}
	
};


#endif /* LIST_HPP_1325430399_29 */
