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
#include "list.hpp"
#include "str.hpp"

class dict : public object {
public:
	typedef object* pointer;
	typedef object& refence;
	typedef str key;
	typedef pointer value;
	struct entry {
		key k;
		value v;
	};
	typedef std::pair<key, value> pair;
	typedef std::list<pair> pairlist;
	typedef std::map<key, value> container;
	
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
	
	//constructors
	// template<class T1>
	// dict(T1& t1) {
		// append(&t1);
	// }
	
	// template<class T1, class T2>
	// dict(T1& t1, T2& t2) {
		// append(&t1);
		// append(&t2);
	// }
	
	// template<class T1, class T2, class T3>
	// dict(T1& t1, T2& t2, T3& t3) {
		// append(&t1);
		// append(&t2);
		// append(&t3);
	// }
	
	dict() {}
	dict(const dict& r):con(r.con) {
	dict(iterator begin, iterator end):con(begin, end) {}
	dict(const_iterator begin, const_iterator end):con(begin, end) {}
	dict(reverse_iterator begin, reverse_iterator end):con(begin, end) {}
	dict(const_reverse_iterator begin, const_reverse_iterator end):con(begin, end) {}
	
	//for size query
	inline const size_t size() const { return con.size(); }
	inline const size_t len() const { return con.size(); }
	
	/**************************************************
	output operator: <<
	**************************************************/
	friend ostream& operator<<(ostream& out, const dict& l) {
		return out<<"[dict]";
	}
	
	/**************************************************
	assign operator: =
	**************************************************/
	inline dict& operator=(const dict& r) {
		return assign(r);
	}
	inline dict& assign(const dict& r) {
		con=r.con;
		return *this;
	}
	
	/**************************************************
	bool expressions:	== != > >= < <= ! & &= | |= ^ ^=
	math expressions:	+= + -= -
	**************************************************/
	inline bool operator==(const dict& r) { return equals(r); }
	inline bool operator>(const dict& r) { return this>&r; }
	inline bool operator<(const dict& r) { return this<&r; }
	inline bool operator!=(const dict& r) { return !(*this==r); }
	inline bool operator<=(const dict& r) { return !(*this>r); }
	inline bool operator>=(const dict& r) { return !(*this<r); }
	inline bool operator!() { return empty(); }
	inline dict operator &(const dict& x, const dict& y) { return x.intersection(y); }
	inline dict operator |(const dict& x, const dict& y) { return x.unioned(y); }
	inline dict operator +(const dict& x, const dict& y) { return x.unioned(y); }
	inline dict operator -(const dict& x, const dict& y) { return x.difference(y); }
	inline dict operator ^(const dict& x, const dict& y) { return x.crossed(y); }
	inline dict& operator &=(const dict& r) { return intersect(r); }
	inline dict& operator |=(const dict& r) { return unionto(r); }
	inline dict& operator +=(const dict& r) { return unionto(r); }
	inline dict& operator -=(const dict& r) { return differ(r); }
	inline dict& operator ^=(const dict& r) { return cross(r); }

	/**************************************************
	clear:	D.clear() -> None.  Remove all items from D.
	**************************************************/
	inline dict& clear() {
		con.clear();
		return *this;
	}
	
	/*************************************************
	copy:	D.copy() -> new D
		Return a shadow copy of dict D, is the same to D
		in the first level
	*************************************************/
	inline dict copy() {
		return dict(*this);
	}
	
	/*************************************************
	clone:	D.clone() -> new D
		Return a deep copy of dict D, which is a clone
		of D. The same in all level
	*************************************************/
	inline dict clone() {
		//TODO
		return dict();
	}
	
	/**************************************************
	fromkeys:	dict.fromkeys(S[,v]) -> New dict with keys from S and values equal to v.
	v defaults to None.
	**************************************************/
	//TODO
	
	/**************************************************
	get:	D.get(k[,d]) -> D[k] if k in D, else d.  d defaults to None.
	**************************************************/
	inline element get(const element& key, const element& defaultkey=0) {
		return has_key(key)?con[key]:defaultkey;
	}
	
	/**************************************************
	superget:	D.setdefault(k[,d]) -> D.get(k,d), 
				also set D[k]=d if k not in D
	**************************************************/
	inline element superget(const element& key, const element& defaultval) {
		if (has_key(key)) return con[key];
		con[key]=defaultval;
		return defaultval;
	}
	
	/**************************************************
	set:	D.set(k, v) -> D[k]=v
	**************************************************/
	inline void set(const element& key, const element& value) {
		con[key]=value;
	}
	
	//for element 
	inline object& operator [](const object& key) {
		return con[&key];
	}
	
	inline const object& operator [](const object& key) const {
		return con[&key];
	}
	
	/**************************************************
	find:	Find element iterator from this dict.
	**************************************************/
	inline iterator find(const element& key) {
		return con.find(key);
	}
	inline citerator find(const element& key) const {
		return con.find(key);
	}
	
	/**************************************************
	has_key:	D.has_key(k) -> True if D has a key k, else False
	**************************************************/
	bool has_key(const element& key) const {
		return find(key)!=end();
	}
	
	/**************************************************
	items:	D.items() -> list of D's (key, value) pairs, as 2-tuples
	**************************************************/
	pairlist items() {
		pairlist pl;
		for (iterator i=begin(), j=end(); i!=j; ++i) pl.push_back(pair(i->first, i->second));
		return pl;
	}

	/**************************************************
	iteritems:	D.iteritems() -> an iterator over the (key, value) items of D
	**************************************************/
	//TODO


	/**************************************************
	iterkeys:	D.iterkeys() -> an iterator over the keys of D
	**************************************************/
	//TODO


	/**************************************************
	itervalues:	D.itervalues() -> an iterator over the values of D
	**************************************************/
	//TODO

	/**************************************************
	keys:	D.keys() -> list of D's keys
	**************************************************/
	list keys() {
		list ks;
		for (iterator i=begin(), j=end(); i!=j; ++i) ks.push_back(i->first);
		return ks;
	}

	/**************************************************
	values:	D.values() -> list of D's values
	**************************************************/
	list values() {
		list ks;
		for (iterator i=begin(), j=end(); i!=j; ++i) ks.push_back(i->second);
		return ks;
	}
	
	/**************************************************
	pop:	D.pop(k[,d]) -> v, remove specified key and return the corresponding value
	If key is not found, d is returned if given, otherwise KeyError is raised
	**************************************************/
	inline element pop() {
		if (con.empty()) return NULL;
		element tmp=con.back();
		con.pop_back();
	}


	/**************************************************
	popitem:	D.popitem() -> (k, v), 
		remove and return some (key, value) pair as a
		2-tuple; but raise KeyError if D is empty
	**************************************************/
	//TODO

	/**************************************************
	update:	D.update(D2) -> None.  
		Update D from E and F: for k in E: D[k] = E[k]
		(if E has keys else: for (k, v) in E: D[k] = v) 
		then: for k in F: D[k] = F[k]
	**************************************************/
	void update(const dict& d) {
		for(iterator i=begin(), j=end(); i!=j; ++i) {
			element& key=i->first;
			element& val=i->second;
			if (has_key(key)) set(key, val);
		}
	}
	
	//foreach
	template<class Function>
	void foreach(Function f) {
		std::for_each(begin(), end(), f);
	}
	
	/**************************************************
	__hash__:	None
	**************************************************/
	uint hash() {
		//TODO
		return 0;
	}
};

#endif /* DICT_HPP_1325515224_71 */
