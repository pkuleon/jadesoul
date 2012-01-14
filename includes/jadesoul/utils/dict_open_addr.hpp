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

#define INIT_ENTRY_CNT 8
#define DUMMY_PTR -1

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
		const key k;
		value v;
		const hash h;
		entry(const key& k, const value& v, const hash& h):k(k), v(v), h(h) {}
	};
	typedef std::vector<entry*> sequence;
	// typedef std::list<entry> sequence;
	
	typedef list<entry> elist;
	typedef list<key> klist;
	typedef list<value> vlist;
	
	typedef list<const entry const*> cpelist;
	typedef list<const key const*> cpklist;
	typedef list<const value const*> cpvlist;
	
	// typedef hashkey<key> keyhash;
	
	typedef typename sequence::iterator iterator;
	typedef typename sequence::const_iterator citerator;
	typedef typename sequence::reverse_iterator riterator;
	typedef typename sequence::const_reverse_iterator criterator;

private:
	sequence seq;
	uint len;
	uint active;
	uint dummy;
	
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
	
	// for constructors
	// template<class K1, class V1>
	// dict(const K1& k1, V1& v1) {
		// seq[k1]=v1;
	// }
	
	dict():sequence(INIT_ENTRY_CNT, NULL), len(INIT_ENTRY_CNT), active(0), dummy(0) {}
	dict(const dict& r):seq(r.seq), len(r.len), active(r.active), dummy(r.dummy) {}
	
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
	for query: size empty less grater cmp
	bool expressions:	== != > >= < <= !
	**************************************************/
	inline const uint size() const { return active; }
	inline const bool empty() const { return seq.empty(); }
	inline const bool equals(const dict& r) const { return seq==r.seq; }
	inline const bool less(const dict& r) const { return seq<r.seq; }
	inline const bool grater(const dict& r) const { return seq>r.seq; }
	inline const bool cmp(const dict& r) const { return less(r); }
	
	inline bool operator==(const dict& r) { return equals(r); }
	inline bool operator!=(const dict& r) { return !equals(r); }
	inline bool operator<(const dict& r) { return less(r); }
	inline bool operator<=(const dict& r) { return !grater(r); }
	inline bool operator>(const dict& r) { return grater(r); }
	inline bool operator>=(const dict& r) { return !less(r); }
	inline bool operator!() { return empty(); }
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
	locate: 
		Find the index of the key if exists or return a empty 
		or dummy entry index to put the key
	**************************************************/
	inline const uint locate(const key& k) {
		//first hash
		uint h=k.hash;
		uint first=h % len;
		uint now=first, times=0, last=-1;
		if (isempty(now) OR isdummy(now)) return now;
		else if (equals(now, k, h) return now; 
		
		while (1) {
			//again hash
			next(first, now, times, last)
			if (isempty(now)) return (last!=-1)?last:now;
			else if isdummy(now) {
				if (last==-1) last=now;
			}
			else if (equals(now, k, h)) return now;
		}
	}
	
	/**************************************************
	find:	Find a key from this dict. return -1 if not found
	**************************************************/
	inline const uint find(const key& k) {
		uint i=locate(k);
		return isactive(i)?i:-1;
	}
	

	/**************************************************
	haskey:	D.haskey(k) -> True if D has a key k, else False
	**************************************************/
	inline const bool haskey(const key& k) {
		return isactive(locate(k));
	}
	
private:
	inline const bool isactive(const entry* &p) const {
		return p!=NULL AND p!=DUMMY_PTR;
	}
	inline const bool isactive(const uint& i) const {
		return isactive(seq[i]);
	}
	inline const bool isdummy(const entry* &p) const {
		return p==DUMMY_PTR;
	}
	inline const bool isdummy(const uint& i) const {
		return isdummy(seq[i]);
	}
	inline const bool isempty(const entry* &p) const {
		return p==NULL;
	}
	inline const bool isempty(const uint& i) const {
		return isempty(seq[i]);
	}
	inline void next(const uint& first, uint& now, uint& times, uint& last) {//again hash strategy
		times+=1;
		now+=1;
		if (now==len) {
			// TODO: expand
			now=0;
		}
	}
	inline const bool equals(const uint& i, const key& k, const hash& h) const {
		return seq[i]->h==h AND seq[i]->k==k;
	}
	inline void insert(const uint& i, const key& k, const value& v) {
		if (isdummy(i)) dummy-=1;
		seq[i]=new entry(k, v, k.hash());
		active+=1;
	}
	
public:
	/**************************************************
	get:	
		D.get(k[,d]) -> D[k] if k in D, else d.  
		d defaults to None.
	**************************************************/
	inline value get(const key& k, const value& d=value()) {
		uint i=locate(k);
		return isactive(i)?seq[i]->v:d;
	}
	
	/**************************************************
	sget:
		D.sget(k[,d]) -> D.get(k,d), 
		At the same time, set D[k]=d if k not in D
	**************************************************/
	inline value sget(const key& k, const value& d=value()) {
		uint i=locate(k);
		if (isactive(i)) return seq[i]->v;
		insert(i, k, d);
		return d;
	}
	
	/**************************************************
	set:	D.set(k, v) -> D[k]=v
	**************************************************/
	inline void set(const key& k, const value& v) {
		uint i=locate(k);
		if (isactive(i)) seq[i]->v=v;
		else insert(i, k, v);
	}
	
	// for element
	inline value& operator [](const key& k) {
		uint i=locate(k);
		if (isactive(i)) return seq[i]->v;
		insert(i, k, value());
		return seq[i]->v;
	}
	
	inline const value& operator [](const key& k) const {
		uint i=locate(k);
		assert(isactive(i) AND "The key must exists to get value") 
		return seq[i]->v=v;
	}
	
	/**************************************************
	clear:	D.clear() -> None.  Remove all items from D.
	**************************************************/
	inline dict& clear() {
		for_n(i, len) {
			entry*& p=seq[i];
			if ((p==NULL) //empty ptr
			OR (p==DUMMY_PTR)) continue; //dummy ptr
			delete p;
		}
		seq.assign(INIT_ENTRY_CNT, NULL);
		len=INIT_ENTRY_CNT;
		active=0;
		dummy=0;
		return *this;
	}
	
	/*************************************************
	copy:	D.copy() -> new D
		Return a shadow copy of dict D
	*************************************************/
	inline dict copy() {
		return dict(*this);
	}
	
	/*************************************************
	clone:	D.clone() -> new D
		Return a deep copy of dict D, which is a clone
		of D.
	*************************************************/
	inline dict clone() {
		//TODO
		return copy();
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
	fromkeys:	dict.fromkeys(S[,v]) -> New dict with keys from S and values equal to v.
	v defaults to None.
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
			if (haskey(k)) set(k, val);
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

#undef INIT_ENTRY_CNT
#undef DUMMY_PTR

#endif /* DICT_HPP_1325515224_71 */
