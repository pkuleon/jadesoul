#ifndef DICT_HPP_1325515224_71
#define DICT_HPP_1325515224_71
/**
 * File: dict.hpp
 * Description: this file implement a dict using open address method to solve the confiliction as python does
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
#include "list.hpp"

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
		return key1<key2;
	}
};


//first hash
//second hash
template<class key, class value, class hash=uint>
class dict : public object {
public:
	struct entry {
		key k;
		value v;
		hash h;
		entry(const key& k, const value& v, const hash& h):k(k), v(v), h(h) {}
	};
	typedef std::vector<entry> sequence;
	// typedef std::list<entry> sequence;
	
	typedef list<key> klist;
	typedef list<value> vlist;
	
	// typedef hashkey<key> keyhash;
	
	typedef typename sequence::iterator iterator;
	typedef typename sequence::const_iterator citerator;
	typedef typename sequence::reverse_iterator riterator;
	typedef typename sequence::const_reverse_iterator criterator;

private:
	sequence seq;
	
public:
	// for iterators
	inline iterator begin() { return seq.begin(); } 
	inline iterator end() { return seq.end(); }
	inline riterator rbegin() { return seq.rbegin(); }
	inline riterator rend() { return seq.rend(); }
	
	inline citerator begin() const { return seq.begin(); } 
	inline citerator end() const { return seq.end(); }
	inline criterator rbegin() const { return seq.rbegin(); }
	inline criterator rend() const { return seq.rend(); }
	
	// for size query
	inline const uint size() const { return seq.size(); }
	inline const bool empty() const { return seq.empty(); }
	
	// for constructors
	// template<class K1, class V1>
	// dict(const K1& k1, V1& v1) {
		// seq[k1]=v1;
	// }
	
	dict() {}
	dict(const dict& r):seq(r.seq) {}
	dict(iterator begin, iterator end):seq(begin, end) {}
	dict(citerator begin, citerator end):seq(begin, end) {}
	dict(riterator begin, riterator end):seq(begin, end) {}
	dict(criterator begin, criterator end):seq(begin, end) {}
	
	/**************************************************
	output operator: <<
	**************************************************/
	friend ostream& operator<<(ostream& out, dict& d) {
		uint l=d.size(), cnt=0;
		out<<"{ ";
		for (iterator i=d.begin(), j=d.end(); i!=j; ++i, ++cnt) {
			const key& k=i->first;
			const value& v=i->second;
			out<<k<<':'<<v;
			if (cnt!=l-1) out<<',';
			out<<' ';
		}
		return out<<'}';
	}
	
	/**************************************************
	assign operator: =
	**************************************************/
	inline dict& operator=(const dict& r) {
		return assign(r);
	}
	inline dict& assign(const dict& r) {
		seq=r.seq;
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
		seq.clear();
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
		return has_key(k)?seq[k]:dval;
	}
	
	/**************************************************
	superget:	D.setdefault(k[,d]) -> D.get(k,d), 
				also set D[k]=d if k not in D
	**************************************************/
	inline value superget(const key& k, const value& dval) {
		if (has_key(k)) return seq[k];
		seq[k]=dval;
		return dval;
	}
	
	/**************************************************
	set:	D.set(k, v) -> D[k]=v
	**************************************************/
	inline void set(const key& k, const value& v) {
		seq[k]=v;
	}
	
	//for element
	inline value& operator [](const key& k) {
		return seq[k];
	}
	
	inline const value& operator [](const key& k) const {
		return seq[k];
	}
	
	/**************************************************
	find:	Find element iterator from this dict.
	**************************************************/
	inline iterator find(const key& k) {
		return seq.find(k);
	}
	inline citerator find(const key& k) const {
		return seq.find(k);
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
	inline pairs items() {
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
	inline klist keys() {
		klist ks;
		for (iterator i=begin(), j=end(); i!=j; ++i) ks.push_back(i->first);
		return ks;
	}

	/**************************************************
	values:	D.values() -> list of D's values
	**************************************************/
	inline vlist values() {
		vlist vs;
		for (iterator i=begin(), j=end(); i!=j; ++i) vs.append(i->second);
		return vs;
	}
	
	/**************************************************
	pop:	D.pop(k[,d]) -> v, remove specified key and return the corresponding value
	If key is not found, d is returned if given, otherwise KeyError is raised
	**************************************************/
	inline value pop() {
		if (seq.empty()) return NULL;
		iterator i=seq.begin();
		value tmp=i->second;
		seq.erase(i);
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
	
	/**************************************************
	foreach:	apply function on each element
	**************************************************/
	template<class Function>
	inline void foreach(Function f) { std::for_each(begin(), end(), f); }
	
	/**************************************************
	hash:	return an uint hash value
	**************************************************/
	inline uint hash() { return uint(this); }
};

typedef dict<str, str> D;

#endif /* DICT_HPP_1325515224_71 */
