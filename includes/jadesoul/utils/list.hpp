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
	
	// for modifiers
	inline list& append(const element& r) {
		con.push_back(r);
		return *this;
	}
	
	inline list& insert(const element& r, int i=0) {
		con.insert(iter(i), r);
		return *this;
	}
	
	inline list& clear() {
		con.clear();
		return *this;
	}
	
	//push - pop
	inline list& push(const element& r) {
		return append(r);
	}
	
	inline element pop() {
		if (con.empty()) return NULL;
		element tmp=con.back();
		con.pop_back();
	}
	
	//inject - shift
	inline list& inject(const element& r) {
		return insert(r);
	}
	
	inline element shift() {
		if (con.empty()) return NULL;
		element tmp=con.front();
		del(0);
		return tmp;
	}
	
	//for size query
	inline const size_t size() const { return con.size(); }
	inline const size_t len() const { return con.size(); }
	
	//foreach
	template<class Function>
	void foreach(Function f) {
		std::for_each(begin(), end(), f);
	}
	
	/**************************************************
	__add__:	x.__add__(y) <==> x+y
	**************************************************/
	list operator+(const list& r) {
		list& x=*this;
		list z(x);
		z.extend(y);
		return z;
	}
	
	/**************************************************
	__contains__:	x.__contains__(y) <==> y in x
	**************************************************/
	bool contains(const element& r) {
		return std::search(begin(), end(), &r, (&r)+1)!=end();
	}
	
	/**************************************************
	__delitem__:	x.__delitem__(y) <==> del x[y]
	**************************************************/
	list& del(const int& i=0) {
		con.erase(iter(i));
		return *this;
	}
	
	/**************************************************
	__delslice__:	x.__delslice__(i, j) <==> del x[i:j]
	
	Use of negative indices is also supported.
	**************************************************/
	list& del(const int& i, const int& j) {
		con.erase(iter(i), jter(j));
		return *this;
	}
	
	/**************************************************
	__doc__:	str(object) -> string

	Return a nice string representation of the object.
	If the argument is a string, the return value is the same object.
	**************************************************/
	string doc() {
		return "doc of list: TODO";
	}
	
	/**************************************************
	__eq__:	x.__eq__(y) <==> x==y
	**************************************************/
	bool operator==(const list& r) {
		if (this==&r) return true;
		if (len()!=r.len()) return false;
		return std::equal(begin(), end(), r.begin());
	}
	
	/**************************************************
	__ge__:	x.__ge__(y) <==> x>=y
	**************************************************/
	bool operator>=(const list& r) {
		return len()>=r.len();
	}
	
	/**************************************************
	__getitem__:	x.__getitem__(y) <==> x[y]
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


	/**************************************************
	__getslice__:	x.__getslice__(i, j) <==> x[i:j]
		       
	Use of negative indices is also supported.
	**************************************************/
	list operator()(const int& i, const int& j) {
		return list(iter(i), jter(j));
	}

	/**************************************************
	__gt__:	x.__gt__(y) <==> x>y
	**************************************************/
	bool operator>(const list& r) {
		return len()>r.len();
	}

	/**************************************************
	__hash__:	None
	**************************************************/
	uint hash() {
		//TODO
		return 0;
	}
	
	/**************************************************
	__iadd__:	x.__iadd__(y) <==> x+=y
	**************************************************/
	list& operator+=(const list& r) {
		this->extend(r);
		return *this;
	}
	
	/**************************************************
	__imul__:	x.__imul__(y) <==> x*=y
	**************************************************/
	list& operator*=(const uint& n) {
		if (n==0) {
			
		} else {
			con.reserve(len()*(n-1);
			::repeat(begin(), end(), inserter(end()), n);
		}
		return *this;
	}


	/**************************************************
	__init__:	x.__init__(...) initializes x; see x.__class__.__doc__ for signature
	**************************************************/



	/**************************************************
	__iter__:	x.__iter__() <==> iter(x)
	**************************************************/



	/**************************************************
	__le__:	x.__le__(y) <==> x<=y
	**************************************************/



	/**************************************************
	__len__:	x.__len__() <==> len(x)
	**************************************************/



	/**************************************************
	__lt__:	x.__lt__(y) <==> x<y
	**************************************************/



	/**************************************************
	__mul__:	x.__mul__(n) <==> x*n
	**************************************************/



	/**************************************************
	__ne__:	x.__ne__(y) <==> x!=y
	**************************************************/



	/**************************************************
	__new__:	T.__new__(S, ...) -> a new object with type S, a subtype of T
	**************************************************/



	/**************************************************
	__reduce__:	helper for pickle
	**************************************************/



	/**************************************************
	__reduce_ex__:	helper for pickle
	**************************************************/



	/**************************************************
	__repr__:	x.__repr__() <==> repr(x)
	**************************************************/



	/**************************************************
	__reversed__:	L.__reversed__() -- return a reverse iterator over the list
	**************************************************/



	/**************************************************
	__rmul__:	x.__rmul__(n) <==> n*x
	**************************************************/



	/**************************************************
	__setattr__:	x.__setattr__('name', value) <==> x.name = value
	**************************************************/



	/**************************************************
	__setitem__:	x.__setitem__(i, y) <==> x[i]=y
	**************************************************/



	/**************************************************
	__setslice__:	x.__setslice__(i, j, y) <==> x[i:j]=y
		       
		       Use  of negative indices is not supported.
	**************************************************/



	/**************************************************
	__sizeof__:	L.__sizeof__() -- size of L in memory, in bytes
	**************************************************/



	/**************************************************
	__str__:	x.__str__() <==> str(x)
	**************************************************/



	/**************************************************
	__subclasshook__:	Abstract classes can override this to customize issubclass().

	This is invoked early on by abc.ABCMeta.__subclasscheck__().
	It should return True, False or NotImplemented.  If it returns
	NotImplemented, the normal algorithm is used.  Otherwise, it
	overrides the normal algorithm (and the outcome is cached).

	**************************************************/



	/**************************************************
	append:	L.append(object) -- append object to end
	**************************************************/



	/**************************************************
	count:	L.count(value) -> integer -- return number of occurrences of value
	**************************************************/



	/**************************************************
	extend:	L.extend(iterable) -- extend list by appending elements from the iterable
	**************************************************/



	/**************************************************
	index:	L.index(value, [start, [stop]]) -> integer -- return first index of value
	**************************************************/



	/**************************************************
	insert:	L.insert(index, object) -- insert object before index
	**************************************************/



	/**************************************************
	pop:	L.pop([index]) -> item -- remove and return item at index (default last)
	**************************************************/



	/**************************************************
	remove:	L.remove(value) -- remove first occurrence of value
	**************************************************/



	/**************************************************
	reverse:	L.reverse() -- reverse *IN PLACE*
	**************************************************/



	/**************************************************
	sort:	L.sort(cmp=None, key=None, reverse=False) -- stable sort *IN PLACE*;
	cmp(x, y) -> -1, 0, 1
	**************************************************/

	
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
