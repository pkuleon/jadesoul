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
	typedef object* pointer;
	typedef object& reference;
	typedef pointer element;
	typedef std::vector<element> container;
	
	typedef container::iterator iterator;
	typedef container::const_iterator const_iterator;
	typedef container::reverse_iterator reverse_iterator;
	typedef container::const_reverse_iterator const_reverse_iterator;
	
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
	
	/**************************************************
	constructors:
	**************************************************/
	//constructors
	// template<class T1>
	// list(T1& t1) {
		// append(&t1);
	// }
	
	// template<class T1, class T2>
	// list(T1& t1, T2& t2) {
		// append(&t1);
		// append(&t2);
	// }
	
	// template<class T1, class T2, class T3>
	// list(T1& t1, T2& t2, T3& t3) {
		// append(&t1);
		// append(&t2);
		// append(&t3);
	// }
	
	list(pointer begin, pointer end):con(begin, end) {}
	list(iterator begin, iterator end):con(begin, end) {}
	list(const_iterator begin, const_iterator end):con(begin, end) {}
	list(reverse_iterator begin, reverse_iterator end):con(begin, end) {}
	list(const_reverse_iterator begin, const_reverse_iterator end):con(begin, end) {}
	list(const pointer& begin, const pointer& end):con(begin, end) {}
	
	/**************************************************
	output operator: <<
	**************************************************/
	friend ostream& operator<<(ostream& out, const list& l) {
		return out<<"[list]";
	}
	
	/**************************************************
	bool expressions:	== != > >= < <=
	**************************************************/
	//for 
	bool operator==(const list& r) {
		if (this==&r) return true;
		if (len()!=r.len()) return false;
		return std::equal(begin(), end(), r.begin());
	}
	bool operator!=(const list& r) {
		return !(*this==r);
	}
	bool operator>(const list& r) {
		return len()>r.len();
	}
	bool operator<=(const list& r) {
		return !(*this>r);
	}
	bool operator<(const list& r) {
		return len()<r.len();
	}
	bool operator>=(const list& r) {
		return !(*this<r);
	}
	
	/**************************************************
	operators:	+= + *= *
	**************************************************/
	list& operator+=(const list& r) {
		this->extend(r);
		return *this;
	}
	list operator+(const list& r) {
		list t(*this);
		t.extend(r);
		return t;
	}
	list& operator*=(const uint& n) {
		if (n==0) {
			clear();
		} else if (n!=1) {
			con.reserve(len()*(n-1);
			::repeat(begin(), end(), inserter(end()), n);
		}
		return *this;
	}
	list operator*(cosnt list& l, const uint& n) {
		list tmp=l.clone();
		tmp*=n;
		return tmp;
	}
	list operator*(const uint& n, cosnt list& l) {
		return l*n;
	}
	
	/**************************************************
	contains:	x.contains(y) <==> y in x
	**************************************************/
	//for elements
	inline object& operator [](int i) {
		return *elem(i);
	}
	
	inline const object& operator [](int i) const {
		return *elem(i);
	}
	
	inline element& elem(int i) {
		return *iter(i);
	}
	
	inline const element& elem(int i) const {
		return *iter(i);
	}
	
	object& at(int i) {
		uint l=len();
		if (i<0) i+=l;
		assert(i>=0 AND i<l);
		return this->operator[](i);
	}
	
	//slice
	list operator()(const int& i, const int& j) {
		return list(iter(i), jter(j));
	}
	

	
	/**************************************************
	contains:	x.contains(y) <==> y in x
	**************************************************/
	bool contains(const element& r) {
		return std::search(begin(), end(), &r, (&r)+1)!=end();
	}
	
	/**************************************************
	del:	x.del(i) <==> del x[i]
	**************************************************/
	list& del(const int& i=0) {
		con.erase(iter(i));
		return *this;
	}
	
	/**************************************************
	del:	x.del(i, j) <==> del x[i:j]
		Use of negative indices is also supported.
	**************************************************/
	list& del(const int& i, const int& j) {
		con.erase(iter(i), jter(j));
		return *this;
	}
	
	/**************************************************
	doc:	str(object) -> string
		Return a nice string representation of the object.
		If the argument is a string, the return value is the same object.
	**************************************************/
	string doc() {
		return "doc of list: TODO";
	}

	uint hash() {
		//TODO
		return 0;
	}

	/**************************************************
	append:	L.append(object)
			append object to end
	**************************************************/
	// for modifiers
	inline list& append(const element& r) {
		con.push_back(r);
		return *this;
	}
	
	/**************************************************
	clear:	L.clear()
			clear all
	**************************************************/
	inline list& clear() {
		con.clear();
		return *this;
	}

	/**************************************************
	count:	L.count(value) -> integer
			return number of occurrences of value
	**************************************************/
	inline uint count(const &element e, int start=0, int end=0) {
		return ::count(iter(start), jter(end), (&e), (&e)+1);
	}

	/**************************************************
	extend:	L.extend(iterable)
			extend list by appending elements from the iterable
	**************************************************/
	inline list& extend(object& iterable) {
		con.insert(con.end(), iterable.begin(), iterable.end());
	}

	/**************************************************
	find:	L.find(value, [start, [stop]]) -> integer
			return first index of value
	rfind:	L.find(value, [start, [stop]]) -> integer
			return the last index of value
	**************************************************/
	inline int find(const list& sub, int start=0, int end=0) const {
		const_iterator a=iter(start), b=jter(end);
		if (a>=b) return -1;
		const_iterator c=std::search(a, b, sub.begin(), sub.end());
		return (c==b)?-1:c-a;
	}

	inline int rfind(const list& sub, int start=0, int end=0) const {
		uint l=len();
		start=(start>0)?l-1-start:-start-l;
		end=(end>0)?l-1-end:-end-l;
		const_reverse_iterator a=jter(end), b=iter(start);
		if (a>=b) return -1;
		const_reverse_iterator c=std::search(a, b, sub.rbegin(), sub.rend());
		return (c==b)?-1:(b-c)-sub.len()-1;
	}
	
	/**************************************************
	insert:	L.insert(index, object)
			insert object before index
	**************************************************/
	inline list& insert(const element& r, int i=0) {
		con.insert(iter(i), r);
		return *this;
	}

	/**************************************************
	push:	L.push(item) -> L
			append an item at last
	pop:		L.pop() -> item
			remove and return item at last
	**************************************************/
	inline list& push(const element& r) {
		return append(r);
	}
	
	inline element pop() {
		if (con.empty()) return NULL;
		element tmp=con.back();
		con.pop_back();
		return tmp;
	}
	
	/**************************************************
	inject:	L.inject(item) -> L
			insert an item at first
	shift:	L.shift() -> item
			remove and return item at first
	**************************************************/
	inline list& inject(const element& r) {
		return insert(r);
	}
	
	inline element shift() {
		if (con.empty()) return NULL;
		element tmp=con.front();
		del(0);
		return tmp;
	}

	/**************************************************
	remove:	L.remove(value)
			remove first occurrence of value
	**************************************************/
	inline list& remove(const element& e) {
		uint i=find(e);
		if (i!=-1) del(i);
		return *this;
	}
	
	/**************************************************
	reverse:		L.reverse() -> L
				reverse *IN PLACE*
	reversed:	L.reversed() -> new L
				reverse with clone
	**************************************************/
	list& reverse() {
		std::reverse(begin(), end());
		return *this;
	}
	
	inline list reversed() {
		return list(rbegin(), rend());
	}

	/**************************************************
	sort:	L.sort(cmp=None, key=None, reverse=False)
			stable sort *IN PLACE*;
			cmp(x, y) -> -1, 0, 1
	sorted:	L.sort(cmp=None, key=None, reverse=False) -> new L
			return a sorted clone
	**************************************************/
	list& sort() {
		std::sort(begin(), end());
		return *this;
	}
	
	inline list sorted() {
		return clone().sort();
	}
	
	/*************************************************
	L.clone() -> new L
		Return a deep copy of list L, which is a clone
		of L.
	*************************************************/
	inline list clone() {
		return list(*this);
	}
	
	//foreach
	template<class Function>
	void foreach(Function f) {
		std::for_each(begin(), end(), f);
	}
	
private:
	inline iterator iter(const int& i) {
		return ((i<0)?end():begin())+i;
	}
	
	inline const_iterator iter(const int& i) const {
		return ((i<0)?end():begin())+i;
	}
	
	inline iterator jter(const int& i) {
		return ((i<=0)?end():begin())+i;
	}
	
	inline const_iterator jter(const int& i) const {
		return ((i<=0)?end():begin())+i;
	}
};


#endif /* LIST_HPP_1325430399_29 */