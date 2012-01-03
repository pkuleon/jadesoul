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
	inline iterator begin() { return vec.begin(); } 
	inline iterator end() { return vec.end(); }
	inline reverse_iterator rbegin() { return vec.rbegin(); }
	inline reverse_iterator rend() { return vec.rend(); }
	
	inline const_iterator begin() const { return vec.begin(); } 
	inline const_iterator end() const { return vec.end(); }
	inline const_reverse_iterator rbegin() const { return vec.rbegin(); }
	inline const_reverse_iterator rend() const { return vec.rend(); }
	
	template<class T1>
	list(const T1& t1) {
		append(&t1);
	}
	
	template<class T1, class T2>
	list(const T1& t1, const T2& t2) {
		append(&t1);
		append(&t2);
	}
	
	template<class T1, class T2, class T3>
	list(const T1& t1, const T2& t2, const T3& t3) {
		append(&t1);
		append(&t2);
		append(&t3);
	}
	
	// list(iterator begin, iterator end):vec(begin, end) {}
	
	inline append(ref& r) {
		vec.push_back(r);
	}
	
	inline insert(ref& r, int i=0) {
		vec.insert(i+(i<0)?end():begin(), r);
	}
	
	inline ref pop() {
		if (vec.empty()) return NULL;
		ref tmp=vec.back();
		vec.pop_back();
	}
	
	inline ref shift() {
		if (vec.empty()) return NULL;
		ref tmp=vec.back();
		vec.pop_back();
	}
	
	inline object& operator [](int i) {
		return **(i+(i<0)?end():begin());
	}
	
	object& at(int i) {
		uint l=len();
		if (i<0) i+=l;
		assert(i>=0 AND i<l);
		return this->operator[](i);
	}
	
	//for size query
	inline const size_t size() const { return vec.size(); }
	inline const size_t len() const { return vec.size(); }
	
};


#endif /* LIST_HPP_1325430399_29 */
