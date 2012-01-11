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
#include "str.hpp"

template<class key>
struct hashkey {
	enum {
		bucket_size=1<<2,
		min_buckets=1<<3
	};
	inline const uint operator()(const key& k) const {
		return k.hash();
	}
	inline const bool operator()(const key& key1, const key& key2) const {
		return key1.cmp(key2);
	}
};

template<class key, class value>
class dict : public object {
public:
	typedef std::pair<key, value> pair;
	typedef std::list<pair> pairs;
	
	typedef hashkey<key> keyhash;
	typedef hash_map<key, value, keyhash> container;
	
	typedef typename container::iterator iterator;
	typedef typename container::const_iterator citerator;
	typedef typename container::reverse_iterator riterator;
	typedef typename container::const_reverse_iterator criterator;

private:
	container con;
	
public:
	//for iterators
	inline iterator begin() { return con.begin(); } 
	inline iterator end() { return con.end(); }
	inline riterator rbegin() { return con.rbegin(); }
	inline riterator rend() { return con.rend(); }
	
	inline citerator begin() const { return con.begin(); } 
	inline citerator end() const { return con.end(); }
	inline criterator rbegin() const { return con.rbegin(); }
	inline criterator rend() const { return con.rend(); }
	
	//for size query
	inline const uint size() const { return con.size(); }
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
	dict(const dict& r):con(r.con) {}
	dict(iterator begin, iterator end):con(begin, end) {}
	dict(citerator begin, citerator end):con(begin, end) {}
	dict(riterator begin, riterator end):con(begin, end) {}
	dict(criterator begin, criterator end):con(begin, end) {}
	

	
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
	// inline bool operator>(const dict& r) { return this>&r; }
	// inline bool operator<(const dict& r) { return this<&r; }
	// inline bool operator!=(const dict& r) { return !(*this==r); }
	// inline bool operator<=(const dict& r) { return !(*this>r); }
	// inline bool operator>=(const dict& r) { return !(*this<r); }
	// inline bool operator!() { return empty(); }
	// inline dict operator &(const dict& x, const dict& y) { return x.intersection(y); }
	// inline dict operator |(const dict& x, const dict& y) { return x.unioned(y); }
	// inline dict operator +(const dict& x, const dict& y) { return x.unioned(y); }
	// inline dict operator -(const dict& x, const dict& y) { return x.difference(y); }
	// inline dict operator ^(const dict& x, const dict& y) { return x.crossed(y); }
	// inline dict& operator &=(const dict& r) { return intersect(r); }
	// inline dict& operator |=(const dict& r) { return unionto(r); }
	// inline dict& operator +=(const dict& r) { return unionto(r); }
	// inline dict& operator -=(const dict& r) { return differ(r); }
	// inline dict& operator ^=(const dict& r) { return cross(r); }

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
	inline value get(const key& k, const value& dval=0) {
		return has_key(k)?con[k]:dval;
	}
	
	/**************************************************
	superget:	D.setdefault(k[,d]) -> D.get(k,d), 
				also set D[k]=d if k not in D
	**************************************************/
	inline value superget(const key& k, const value& dval) {
		if (has_key(k)) return con[k];
		con[k]=dval;
		return dval;
	}
	
	/**************************************************
	set:	D.set(k, v) -> D[k]=v
	**************************************************/
	inline void set(const key& k, const value& v) {
		con[k]=v;
	}
	
	//for element 
	inline value& operator [](const key& k) {
		return *(con[k]);
	}
	
	inline const value& operator [](const key& k) const {
		return *(con[k]);
	}
	
	/**************************************************
	find:	Find element iterator from this dict.
	**************************************************/
	inline iterator find(const key& k) {
		return con.find(k);
	}
	inline citerator find(const key& k) const {
		return con.find(k);
	}
	
	/**************************************************
	has_key:	D.has_key(k) -> True if D has a key k, else False
	**************************************************/
	bool has_key(const key& k) const {
		return find(k)!=end();
	}
	
	/**************************************************
	items:	D.items() -> list of D's (key, value) pairs, as 2-tuples
	**************************************************/
	pairs items() {
		pairs pl;
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
	vecstr keys() {
		vecstr ks;
		for (iterator i=begin(), j=end(); i!=j; ++i) ks.push_back(i->first);
		return ks;
	}

	/**************************************************
	values:	D.values() -> list of D's values
	**************************************************/
	list values() {
		list vs;
		for (iterator i=begin(), j=end(); i!=j; ++i) vs.append(i->second);
		return vs;
	}
	
	/**************************************************
	pop:	D.pop(k[,d]) -> v, remove specified key and return the corresponding value
	If key is not found, d is returned if given, otherwise KeyError is raised
	**************************************************/
	inline value pop() {
		if (con.empty()) return NULL;
		iterator i=con.begin();
		value tmp=i->second;
		con.erase(i);
		return tmp;
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
	void update(dict& d) {
		for(iterator i=begin(), j=end(); i!=j; ++i) {
			const key& k=i->first;
			value& val=i->second;
			if (has_key(k)) set(k, val);
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
