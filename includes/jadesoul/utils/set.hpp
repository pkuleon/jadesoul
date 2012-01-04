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
	template<class T1>
	set(T1& t1) {
		append(&t1);
	}
	
	template<class T1, class T2>
	set(T1& t1, T2& t2) {
		append(&t1);
		append(&t2);
	}
	
	template<class T1, class T2, class T3>
	set(T1& t1, T2& t2, T3& t3) {
		append(&t1);
		append(&t2);
		append(&t3);
	}

	set(pointer begin, pointer end):con(begin, end) {}
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
	bool expressions:	== != > >= < <=
	**************************************************/
	bool operator==(const set& r) {
		if (this==&r) return true;
		if (len()!=r.len()) return false;
		return std::equal(begin(), end(), r.begin());
	}
	bool operator!=(const set& r) {
		return !(*this==r);
	}
	bool operator>(const set& r) {
		return len()>r.len();
	}
	bool operator<=(const set& r) {
		return !(*this>r);
	}
	bool operator<(const set& r) {
		return len()<r.len();
	}
	bool operator>=(const set& r) {
		return !(*this<r);
	}
	
	/**************************************************
	operators:	+= + *= *
	**************************************************/
	set& operator+=(const set& r) {
		this->union_(r);
		return *this;
	}
	set operator+(const set& r) {
		set t(*this);
		t.union_(r);
		return t;
	}
	set& operator*=(const uint& n) {
		if (n==0) {
			clear();
		} else if (n!=1) {
			con.reserve(len()*(n-1);
			::repeat(begin(), end(), inserter(end()), n);
		}
		return *this;
	}
	set operator*(cosnt set& l, const uint& n) {
		set tmp=l.clone();
		tmp*=n;
		return tmp;
	}
	set operator*(const uint& n, cosnt set& l) {
		return l*n;
	}

	// for modifiers
	inline set& append(const element& r) {
		con.push_back(r);
		return *this;
	}
	
	inline set& insert(const element& r, int i=0) {
		con.insert(iter(i), r);
		return *this;
	}
	
	inline set& del(int i=0) {
		con.erase(iter(i));
		return *this;
	}
	
	inline set& clear() {
		con.clear();
		return *this;
	}
	
	//push - pop
	inline set& push(const element& r) {
		return append(r);
	}
	
	inline element pop() {
		if (con.empty()) return NULL;
		element tmp=con.back();
		con.pop_back();
	}
	
	//inject - shift
	inline set& inject(const element& r) {
		return insert(r);
	}
	
	inline element shift() {
		if (con.empty()) return NULL;
		element tmp=con.front();
		del(0);
		return tmp;
	}
	
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
	
	//for size query
	inline const size_t size() const { return con.size(); }
	inline const size_t len() const { return con.size(); }
	
	//foreach
	template<class Function>
	void foreach(Function f) {
		std::for_each(begin(), end(), f);
	}
	
	/**************************************************
	__and__:	x.__and__(y) <==> x&y
	**************************************************/
	


	/**************************************************
	__class__:	type(object) -> the object's type
	type(name, bases, dict) -> a new type
	**************************************************/



	/**************************************************
	__cmp__:	x.__cmp__(y) <==> cmp(x,y)
	**************************************************/



	/**************************************************
	__contains__:	x.__contains__(y) <==> y in x.
	**************************************************/



	/**************************************************
	__delattr__:	x.__delattr__('name') <==> del x.name
	**************************************************/



	/**************************************************
	__doc__:	str(object) -> string

	Return a nice string representation of the object.
	If the argument is a string, the return value is the same object.
	**************************************************/



	/**************************************************
	__eq__:	x.__eq__(y) <==> x==y
	**************************************************/



	/**************************************************
	__format__:	default object formatter
	**************************************************/



	/**************************************************
	__ge__:	x.__ge__(y) <==> x>=y
	**************************************************/



	/**************************************************
	__getattribute__:	x.__getattribute__('name') <==> x.name
	**************************************************/



	/**************************************************
	__gt__:	x.__gt__(y) <==> x>y
	**************************************************/



	/**************************************************
	__hash__:	None
	**************************************************/



	/**************************************************
	__iand__:	x.__iand__(y) <==> x&y
	**************************************************/



	/**************************************************
	__init__:	x.__init__(...) initializes x; see x.__class__.__doc__ for signature
	**************************************************/



	/**************************************************
	__ior__:	x.__ior__(y) <==> x|y
	**************************************************/



	/**************************************************
	__isub__:	x.__isub__(y) <==> x-y
	**************************************************/



	/**************************************************
	__iter__:	x.__iter__() <==> iter(x)
	**************************************************/



	/**************************************************
	__ixor__:	x.__ixor__(y) <==> x^y
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
	__ne__:	x.__ne__(y) <==> x!=y
	**************************************************/



	/**************************************************
	__new__:	T.__new__(S, ...) -> a new object with type S, a subtype of T
	**************************************************/



	/**************************************************
	__or__:	x.__or__(y) <==> x|y
	**************************************************/



	/**************************************************
	__rand__:	x.__rand__(y) <==> y&x
	**************************************************/



	/**************************************************
	__reduce__:	Return state information for pickling.
	**************************************************/



	/**************************************************
	__reduce_ex__:	helper for pickle
	**************************************************/



	/**************************************************
	__repr__:	x.__repr__() <==> repr(x)
	**************************************************/



	/**************************************************
	__ror__:	x.__ror__(y) <==> y|x
	**************************************************/



	/**************************************************
	__rsub__:	x.__rsub__(y) <==> y-x
	**************************************************/



	/**************************************************
	__rxor__:	x.__rxor__(y) <==> y^x
	**************************************************/



	/**************************************************
	__setattr__:	x.__setattr__('name', value) <==> x.name = value
	**************************************************/



	/**************************************************
	__sizeof__:	S.__sizeof__() -> size of S in memory, in bytes
	**************************************************/



	/**************************************************
	__str__:	x.__str__() <==> str(x)
	**************************************************/



	/**************************************************
	__sub__:	x.__sub__(y) <==> x-y
	**************************************************/



	/**************************************************
	__subclasshook__:	Abstract classes can override this to customize issubclass().

	This is invoked early on by abc.ABCMeta.__subclasscheck__().
	It should return True, False or NotImplemented.  If it returns
	NotImplemented, the normal algorithm is used.  Otherwise, it
	overrides the normal algorithm (and the outcome is cached).

	**************************************************/



	/**************************************************
	__xor__:	x.__xor__(y) <==> x^y
	**************************************************/



	/**************************************************
	add:	Add an element to a set.

	This has no effect if the element is already present.
	**************************************************/



	/**************************************************
	clear:	Remove all elements from this set.
	**************************************************/



	/**************************************************
	copy:	Return a shallow copy of a set.
	**************************************************/



	/**************************************************
	difference:	Return the difference of two or more sets as a new set.

	(i.e. all elements that are in this set but not the others.)
	**************************************************/



	/**************************************************
	difference_update:	Remove all elements of another set from this set.
	**************************************************/



	/**************************************************
	discard:	Remove an element from a set if it is a member.

	If the element is not a member, do nothing.
	**************************************************/



	/**************************************************
	intersection:	Return the intersection of two sets as a new set.

	(i.e. all elements that are in both sets.)
	**************************************************/



	/**************************************************
	intersection_update:	Update a set with the intersection of itself and another.
	**************************************************/



	/**************************************************
	isdisjoint:	Return True if two sets have a null intersection.
	**************************************************/



	/**************************************************
	issubset:	Report whether another set contains this set.
	**************************************************/



	/**************************************************
	issuperset:	Report whether this set contains another set.
	**************************************************/



	/**************************************************
	pop:	Remove and return an arbitrary set element.
	**************************************************/



	/**************************************************
	remove:	Remove an element from a set; it must be a member.

	If the element is not a member, raise a KeyError.
	**************************************************/



	/**************************************************
	symmetric_difference:	Return the symmetric difference of two sets as a new set.

	(i.e. all elements that are in exactly one of the sets.)
	**************************************************/



	/**************************************************
	symmetric_difference_update:	Update a set with the symmetric difference of itself and another.
	**************************************************/



	/**************************************************
	union:	Return the union of sets as a new set.

	(i.e. all elements that are in either set.)
	**************************************************/



	/**************************************************
	update:	Update a set with the union of itself and others.
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

#endif /* SET_HPP_1325514702_2 */
