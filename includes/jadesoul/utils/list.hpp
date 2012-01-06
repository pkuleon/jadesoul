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
#include "object.hpp"

template<class element>
class list : public object {
public:
	// typedef std::list<element> container;
	typedef std::vector<element> container;
	typedef typename container::iterator iterator;
	typedef typename container::const_iterator citerator;
	typedef typename container::reverse_iterator riterator;
	typedef typename container::const_reverse_iterator criterator;
	
private:
	container con;
	
public:
	// for iterators
	inline iterator begin() { return con.begin(); }
	inline iterator end() { return con.end(); }
	inline riterator rbegin() { return con.rbegin(); }
	inline riterator rend() { return con.rend(); }
	
	inline citerator begin() const { return con.begin(); }
	inline citerator end() const { return con.end(); }
	inline criterator rbegin() const { return con.rbegin(); }
	inline criterator rend() const { return con.rend(); }
	
	// for size query
	inline const uint size() const { return con.size(); }
	inline const bool empty() const { return con.empty(); }
	
	// for pos to iter
	inline iterator iter(const int& i) { return ((i<0)?end():begin())+i; }
	inline iterator jter(const int& i) { return ((i<=0)?end():begin())+i; }
	inline citerator iter(const int& i) const { return ((i<0)?end():begin())+i; }
	inline citerator jter(const int& i) const { return ((i<=0)?end():begin())+i; }
	
	inline riterator riter(const int& i) { return ((i<0)?rend():rbegin())+i; }
	inline riterator rjter(const int& i) { return ((i<=0)?rend():rbegin())+i; }
	inline criterator riter(const int& i) const { return ((i<0)?rend():rbegin())+i; }
	inline criterator rjter(const int& i) const { return ((i<=0)?rend():rbegin())+i; }
	/**************************************************
	constructors:
	**************************************************/
	// template<class T1>
	// list(T1& t1) {
		// append(&t1);
	// }
	
	// template<class T1, class T2>
	// list(T1& t1, T2& t2) {
		// append(&t1);
		// append(&t2);
	// }
	
	template<class T1, class T2, class T3>
	list(T1& t1, T2& t2, T3& t3) {
		append(&t1);
		append(&t2);
		append(&t3);
	}
	
	list() {}
	list(const list& r):con(r.con) {};
	list(iterator begin, iterator end):con(begin, end) {}
	list(citerator begin, citerator end):con(begin, end) {}
	list(riterator begin, riterator end):con(begin, end) {}
	list(criterator begin, criterator end):con(begin, end) {}
	list(const element*& begin, const element*& end):con(begin, end) {}
	
	/**************************************************
	output operator: <<
	**************************************************/
	friend ostream& operator<<(ostream& out, const list& l) {
		return out<<"[list]";
	}
	
	/**************************************************
	assign operator: =
	**************************************************/
	inline list& operator=(const list& r) {
		return assign(r);
	}
	inline list& assign(const list& r) {
		con=r.con;
		return *this;
	}
	
	/**************************************************
	bool expressions:	== != > >= < <=
	**************************************************/
	// for 
	bool operator==(const list& r) {
		if (this==&r) return true;
		if (size()!=r.size()) return false;
		return std::equal(begin(), end(), r.begin());
	}
	bool operator!=(const list& r) {
		return !(*this==r);
	}
	bool operator>(const list& r) {
		return size()>r.size();
	}
	bool operator<=(const list& r) {
		return !(*this>r);
	}
	bool operator<(const list& r) {
		return size()<r.size();
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
			con.reserve(size()*(n-1));
			::repeat(begin(), end(), inserter(con, end()), n);
		}
		return *this;
	}
	list operator*(const uint& n) {
		list tmp(*this);
		tmp*=n;
		return tmp;
	}
	
	/**************************************************
	contains:	x.contains(y) <==> y in x
	**************************************************/
	// for elements
	inline element& operator [](int i) {
		return *elem(i);
	}
	
	inline const element& operator [](int i) const {
		return *elem(i);
	}
	
	inline element& elem(int i) {
		return *iter(i);
	}
	
	inline const element& elem(int i) const {
		return *iter(i);
	}
	
	element& at(int i) {
		uint l=size();
		if (i<0) i+=l;
		assert(i>=0 AND i<l);
		return this->operator[](i);
	}
	
	// slice
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

	uint hash() {
		// TODO
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
	inline uint count(const element& e, int start=0, int end=0) {
		return ::count(iter(start), jter(end), (&e), (&e)+1);
	}

	/**************************************************
	extend:	L.extend(iterable)
			extend list by appending elements from the iterable
	**************************************************/
	inline list& extend(const list& r) {
		con.insert(con.end(), r.begin(), r.end());
	}

	/**************************************************
	find:	L.find(value, [start, [stop]]) -> integer
			return first index of value
	rfind:	L.find(value, [start, [stop]]) -> integer
			return the last index of value
	**************************************************/
	inline int find(const list& sub, int start=0, int end=0) const {
		citerator a=iter(start), b=jter(end);
		if (a>=b) return -1;
		citerator c=std::search(a, b, sub.begin(), sub.end());
		return (c==b)?-1:c-a;
	}

	inline int rfind(const list& sub, int start=0, int end=0) const {
		uint l=size();
		start=(start>0)?l-1-start:-start-l;
		end=(end>0)?l-1-end:-end-l;
		criterator a=rjter(end), b=riter(start);
		if (a>=b) return -1;
		criterator c=std::search(a, b, sub.rbegin(), sub.rend());
		return (c==b)?-1:(b-c)-sub.size()-1;
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
	index:	L.index(value) -> int
			return the position if found, or -1
			O(n)
	**************************************************/
	inline int index(const element& e) const {
		uint l=size();
		for_n(i, l) if (con[i]->equals(*e)) return i;
		return -1;
	}
	
	/**************************************************
	remove:	L.remove(value)
			remove first occurrence of value
	**************************************************/
	inline list& remove(const element& e) {
		uint i=index(e);
		if (i!=-1) del(i);
		return *this;
	}
	
	/**************************************************
	reverse:		L.reverse() -> L
				reverse *IN PLACE*
	reversed:	L.reversed() -> new L
				reverse with copy
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
			return a sorted copy
	**************************************************/
	list& sort() {
		std::sort(begin(), end());
		return *this;
	}
	
	inline list sorted() {
		return copy().sort();
	}
	
	/*************************************************
	L.copy() -> new L
		Return a shadow copy of list L, is the same to L
		in the first level
	*************************************************/
	inline list copy() {
		return list(*this);
	}
	
	/*************************************************
	L.clone() -> new L
		Return a deep copy of list L, which is a clone
		of L. The same in all level
	*************************************************/
	inline list clone() {
		// TODO
		return list();
	}
	
	// foreach
	template<class Function>
	void foreach(Function f) {
		std::for_each(begin(), end(), f);
	}
};


typedef list<str> liststr;
typedef list<int> listint;
typedef list<uint> listuint;

Macro__over_load_dump__ValueType(liststr);
Macro__over_load_dump__ValueType(listint);
Macro__over_load_dump__ValueType(listuint);


#endif /* LIST_HPP_1325430399_29 */
