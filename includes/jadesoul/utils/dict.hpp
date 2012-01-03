#ifndef DICT_HPP_1325515224_71
#define DICT_HPP_1325515224_71
/**
 * File: dict.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-02 22:40:24.711000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"

class dict : public object {
public:
	typedef object* pointer;
	typedef object& refence;
	typedef pointer element;
	typedef std::pair<element, element> pair;
	typedef std::map<element, element> container;
	
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
	template<class T1>
	dict(T1& t1) {
		append(&t1);
	}
	
	template<class T1, class T2>
	dict(T1& t1, T2& t2) {
		append(&t1);
		append(&t2);
	}
	
	template<class T1, class T2, class T3>
	dict(T1& t1, T2& t2, T3& t3) {
		append(&t1);
		append(&t2);
		append(&t3);
	}
	
	// dict(iterator begin, iterator end):con(begin, end) {}
	
	// for modifiers
	inline dict& append(const element& r) {
		con.push_back(r);
		return *this;
	}
	
	inline dict& insert(const element& r, int i=0) {
		con.insert(iter(i), r);
		return *this;
	}
	
	inline dict& del(int i=0) {
		con.erase(iter(i));
		return *this;
	}
	
	inline dict& clear() {
		con.clear();
		return *this;
	}
	
	//push - pop
	inline dict& push(const element& r) {
		return append(r);
	}
	
	inline element pop() {
		if (con.empty()) return NULL;
		element tmp=con.back();
		con.pop_back();
	}
	
	//inject - shift
	inline dict& inject(const element& r) {
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
__class__:	type(object) -> the object's type
type(name, bases, dict) -> a new type
**************************************************/



/**************************************************
__cmp__:	x.__cmp__(y) <==> cmp(x,y)
**************************************************/



/**************************************************
__contains__:	D.__contains__(k) -> True if D has a key k, else False
**************************************************/



/**************************************************
__delattr__:	x.__delattr__('name') <==> del x.name
**************************************************/



/**************************************************
__delitem__:	x.__delitem__(y) <==> del x[y]
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
__getitem__:	x.__getitem__(y) <==> x[y]
**************************************************/



/**************************************************
__gt__:	x.__gt__(y) <==> x>y
**************************************************/



/**************************************************
__hash__:	None
**************************************************/



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
__setattr__:	x.__setattr__('name', value) <==> x.name = value
**************************************************/



/**************************************************
__setitem__:	x.__setitem__(i, y) <==> x[i]=y
**************************************************/



/**************************************************
__sizeof__:	D.__sizeof__() -> size of D in memory, in bytes
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
clear:	D.clear() -> None.  Remove all items from D.
**************************************************/



/**************************************************
copy:	D.copy() -> a shallow copy of D
**************************************************/



/**************************************************
fromkeys:	dict.fromkeys(S[,v]) -> New dict with keys from S and values equal to v.
v defaults to None.
**************************************************/



/**************************************************
get:	D.get(k[,d]) -> D[k] if k in D, else d.  d defaults to None.
**************************************************/



/**************************************************
has_key:	D.has_key(k) -> True if D has a key k, else False
**************************************************/



/**************************************************
items:	D.items() -> list of D's (key, value) pairs, as 2-tuples
**************************************************/



/**************************************************
iteritems:	D.iteritems() -> an iterator over the (key, value) items of D
**************************************************/



/**************************************************
iterkeys:	D.iterkeys() -> an iterator over the keys of D
**************************************************/



/**************************************************
itervalues:	D.itervalues() -> an iterator over the values of D
**************************************************/



/**************************************************
keys:	D.keys() -> list of D's keys
**************************************************/



/**************************************************
pop:	D.pop(k[,d]) -> v, remove specified key and return the corresponding value
If key is not found, d is returned if given, otherwise KeyError is raised
**************************************************/



/**************************************************
popitem:	D.popitem() -> (k, v), remove and return some (key, value) pair as a
2-tuple; but raise KeyError if D is empty
**************************************************/



/**************************************************
setdefault:	D.setdefault(k[,d]) -> D.get(k,d), also set D[k]=d if k not in D
**************************************************/



/**************************************************
update:	D.update(E, **F) -> None.  Update D from E and F: for k in E: D[k] = E[k]
(if E has keys else: for (k, v) in E: D[k] = v) then: for k in F: D[k] = F[k]
**************************************************/



/**************************************************
values:	D.values() -> list of D's values
**************************************************/



private:
	inline iterator iter(int& i) {
		return ((i<0)?end():begin())+i;
	}
	
	inline const_iterator iter(int& i) const {
		return ((i<0)?end():begin())+i;
	}
	
};

#endif /* DICT_HPP_1325515224_71 */
