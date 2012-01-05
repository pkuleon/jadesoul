#ifndef SET_HPP_1325514702_2
#define SET_HPP_1325514702_2
/**
 * File: set.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-02 22:31:42.204000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"

class set : public object {
public:
	typedef object* pointer;
	typedef object& refence;
	typedef pointer element;
	typedef std::set<element> container;
	
	typedef container::iterator iterator;
	typedef container::const_iterator const_iterator;
	typedef container::reverse_iterator reverse_iterator;
	typedef container::const_reverse_iterator const_reverse_iterator;
	
	typedef const_iterator citerator;
	typedef reverse_iterator riterator;
	typedef const_reverse_iterator criterator;
	
private:
	container con;
	
public:
	//for iterators
	inline iterator begin() { return con.begin(); } 
	inline iterator end() { return con.end(); }
	inline reverse_iterator rbegin() { return con.rbegin(); }
	inline reverse_iterator rend() { return con.rend(); }
	
	inline const_iterator begin() const { return con.begin(); } 
	inline const_iterator end() const { return con.end(); }
	inline const_reverse_iterator rbegin() const { return con.rbegin(); }
	inline const_reverse_iterator rend() const { return con.rend(); }
	
	//for size query
	inline const size_t size() const { return con.size(); }
	inline const size_t len() const { return con.size(); }
	inline const bool empty() const { return con.empty(); }
	
	/**************************************************
	constructors:
	**************************************************/
	// template<class T1>
	// set(T1& t1) {
		// add(&t1);
	// }
	// template<class T1, class T2>
	// set(T1& t1, T2& t2) {
		// add(&t1);
		// add(&t2);
	// }
	// template<class T1, class T2, class T3>
	// set(T1& t1, T2& t2, T3& t3) {
		// add(&t1);
		// add(&t2);
		// add(&t3);
	// }
	set() {}
	set(const set& r):con(r.con) {
	set(iterator begin, iterator end):con(begin, end) {}
	set(const_iterator begin, const_iterator end):con(begin, end) {}
	set(reverse_iterator begin, reverse_iterator end):con(begin, end) {}
	set(const_reverse_iterator begin, const_reverse_iterator end):con(begin, end) {}
	set(const pointer& begin, const pointer& end):con(begin, end) {}

	/**************************************************
	output operator: <<
	**************************************************/
	friend ostream& operator<<(ostream& out, const set& l) {
		return out<<"[set]";
	}
	
	/**************************************************
	assign operator: =
	**************************************************/
	inline set& operator=(const set& r) {
		return assign(r);
	}
	inline set& assign(const set& r) {
		con=r.con;
		return *this;
	}
	
	/**************************************************
	bool expressions:	== != > >= < <= ! & &= | |= ^ ^=
	math expressions:	+= + -= -
	**************************************************/
	inline bool operator==(const set& r) { return equals(r); }
	inline bool operator>(const set& r) { return this>&r; }
	inline bool operator<(const set& r) { return this<&r; }
	inline bool operator!=(const set& r) { return !(*this==r); }
	inline bool operator<=(const set& r) { return !(*this>r); }
	inline bool operator>=(const set& r) { return !(*this<r); }
	inline bool operator!() { return empty(); }
	inline set operator &(const set& x, const set& y) { return x.intersection(y); }
	inline set operator |(const set& x, const set& y) { return x.unioned(y); }
	inline set operator +(const set& x, const set& y) { return x.unioned(y); }
	inline set operator -(const set& x, const set& y) { return x.difference(y); }
	inline set operator ^(const set& x, const set& y) { return x.crossed(y); }
	inline set& operator &=(const set& r) { return intersect(r); }
	inline set& operator |=(const set& r) { return unionto(r); }
	inline set& operator +=(const set& r) { return unionto(r); }
	inline set& operator -=(const set& r) { return differ(r); }
	inline set& operator ^=(const set& r) { return cross(r); }
	
	/**************************************************
	add:	Add an element to a set.
			This has no effect if the element is already present.
	**************************************************/
	inline set& add(const element& r) {
		con.insert(r);
		return *this;
	}
	
	/**************************************************
	del:	Delete an element from a set.
			This has no effect if the element is not yet present.
	**************************************************/
	inline set& del(iterator i) {
		con.erase(i);
		return *this;
	}
	inline set& del(const element& e) {
		con.erase(e);
		return *this;
	}
	
	/**************************************************
	find:	Find element iterator from this set.
	**************************************************/
	inline iterator find(const element& e) {
		return con.find(e);
	}
	inline citerator find(const element& e) const {
		return con.find(e);
	}
	
	/**************************************************
	contains:	x.contains(y) <==> y in x.
	**************************************************/
	bool contains(const element& e) const {
		return find(e)!=end();
	}
	
	/**************************************************
	equals:	x.equals(y) <==> x == y.
	**************************************************/
	bool equals(const set& r) const {
		if (this==&r) return true;
		if (len()!=r.len()) return false;
		return std::equal(begin(), end(), r.begin());
	}
	
	uint hash() {
		//TODO
		return 0;
	}
	
	/**************************************************
	clear:	Remove all elements from this set.
	**************************************************/
	inline set& clear() {
		con.clear();
		return *this;
	}

	/*************************************************
	S.copy() -> new S
		Return a shadow copy of list L, is the same to L
		in the first level
	*************************************************/
	inline set copy() {
		return set(*this);
	}
	
	/*************************************************
	S.clone() -> new S
		Return a deep copy of list L, which is a clone
		of L. The same in all level
	*************************************************/
	inline set clone() {
		//TODO
		return set();
	}
	
	/**************************************************
	discard:
		Remove an element from a set if it is a member.
		If the element is not a member, do nothing.
	**************************************************/
	inline set& discard(const element& e) {
		// iterator i=find(e);
		// if (i!=end()) del(i);
		return del(e);
	}
	
	/**************************************************
	intersect:
		Update a set with the intersection of itself and another.
	intersection:
		Return the intersection of two sets as a new set.
	(i.e. all elements that are in both sets.)
	**************************************************/
	set& intersect(const set& r) {
		return assign(intersection(r));
	}
	inline set intersection(const set& r) {
		set inter;
		for (citerator i(r.begin()), e(r.end()); i!=e; ++i) if (contains(*i)) inter.add(*i);
		return inter;
	}
	
	/**************************************************
	unionto:
		update a set with the union of sets
	unioned:
		Return the union of sets as a new set.
		(i.e. all elements that are in either set.)
	**************************************************/
	set& unionto(const set& r) {
		con.insert(r.begin(), r.end());
		return *this;
	}
	inline set unioned(const set& r) {
		return copy().unionto(r);
	}
	
	/**************************************************
	differ:	
		remove elements from this set which are both 
		in this set and other other set
	difference:	
		Return the difference of two or more sets as a new set.
		(i.e. all elements that are in this set but not the others.)
	**************************************************/
	set& differ(const set& r) {
		for (iterator i=r.begin(), e=r.end(), f; i!=e; ++i) {
			f=find(*i);
			if (f!=end()) del(f);
		}
		return *this;
	}
	inline set difference(const set& r) {
		return copy().differ(r);
	}
	
	/**************************************************
	cross:
		Update a set with the symmetric difference of itself and another.
		remove all in both set and add all this set don't have
	crossed:
		Return the symmetric difference of two sets as a new set.
		(i.e. all elements that are in exactly one of the sets.)
	**************************************************/
	set& cross(const set& r) {
		for (iterator i=r.begin(), e=r.end(), f; i!=e; ++i) {
			f=find(*i);
			if (f!=end()) del(f);
			else add(*i);
		}
		return *this;
	}
	inline set crossed(const set& r) {
		return copy().cross(r);
	}

	/**************************************************
	isdisjoint:
		Return True if two sets have a null intersection.
	**************************************************/
	bool isdisjoint(const set& r) const {
		return unioned(*this, r).empty();
	}
	
	/**************************************************
	issubset:
		Report whether another set contains this set.
	**************************************************/
	bool issubset(const set& r) const {
		iterator i=r.con.lower_bound(*begin());
		if (i<r.begin()) return false;
		iterator j=r.con.upper_bound(*rbegin());
		if (j>=r.end()) return false;
		return true;
	}
	
	/**************************************************
	issuperset:
		Report whether this set contains another set.
	**************************************************/
	bool issuperset(const set& r) const {
		return r.issubset(*this);
	}
	
	/**************************************************
	pop:	
		Remove and return an arbitrary set element.
		just remove and return the first element
	**************************************************/
	inline element pop() {
		iterator i=begin();
		element e=*i;
		del(i);
		return e;
	}
	
	/**************************************************
	remove:	Remove an element from a set;
	**************************************************/
	inline set& remove(const element& e) {
		return del(e);
	}
	
	//foreach
	template<class Function>
	void foreach(Function f) {
		std::for_each(begin(), end(), f);
	}
	

};

#endif /* SET_HPP_1325514702_2 */
