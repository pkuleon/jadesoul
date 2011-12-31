#ifndef STR_HPP_1324997558_33
#define STR_HPP_1324997558_33
/**
 * File: str.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-12-27 22:52:38.326000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"
#include "range.hpp"

class str {
private:
	string s;
public:
	typedef string::iterator iterator;
	typedef string::const_iterator const_iterator;
	typedef string::reverse_iterator reverse_iterator;
	typedef string::const_reverse_iterator const_reverse_iterator;
	
	inline str() {
		//
	}
	
	//construction from c-style string
	inline str(const char* cstr):s(cstr) {
		// cout<<"s.size()="<<s.size()<<endl;
	}
	
	//construction from std string
	inline str(const string& cs):s(cs) {
	}
	
	//construction from two iterators
	template<class Iterator>
	inline str(Iterator begin, Iterator end):s(begin, end) {
	}
	
	// construction from char
	inline str(const char& c) {
		char buf[2];
		buf[0]=c;
		buf[1]=0;
		s=buf;
	}
	
	// construction from uchar
	inline str(const uchar& c) {
		char buf[2];
		buf[0]=c;
		buf[1]=0;
		s=buf;
	}
	
	// construction from short
	// construction from ushort
	
	// construction from int
	inline str(const int& n) {
		char buf[16];
		sprintf(buf, "%d", n);
		s=buf;
	}
	
	// construction from uint
	inline str(const uint& n) {
		char buf[16];
		sprintf(buf, "%u", n);
		s=buf;
	}
	
	// construction from long
	inline str(const long& n) {
		char buf[32];
		sprintf(buf, "%l", n);
		s=buf;
	}
	
	// construction from ulong
	// str(const ulong& n) {
		// char buf[32];
		// sprintf(buf, "%d", n);
		// s=buf;
	// }
	
	// construction from float
	inline str(const float& n) {
		char buf[32];
		sprintf(buf, "%f", n);
		s=buf;
	}
	
	// construction from double
	inline str(const double& n) {
		char buf[32];
		sprintf(buf, "%g", n);
		s=buf;
	}
	
	//copy construction
	inline str(const str& s):s(s.s) {
	}
	
	//for output
	inline friend ostream& operator <<(ostream& o, const str& s) {
		return o<<s.s;
	}
	
	//for connection
	inline const str operator +(const str& r) {
		return str(s+r.s);
	}
	
	//for size query
	inline const size_t size() const { return s.size(); }
	inline const size_t len() const { return s.size(); }
	inline const size_t length() const { return s.size(); }
	
	//for element visiting
	inline char& operator[](int i) {
		if (i<0) i+=s.size();
		return s[i];
	}
	
	//for element visiting, much more safe
	inline char& at(int i) {
		size_t len=s.size();
		assert(len>0);
		while(i<0) i+=len;
		while(i>=len) i-=len;
		return s.at(i);
	}
	
	//for slice
	inline str slice(const range& r) {
		cout<<r<<endl;
		return ::slice(s, r);
	}
	
	inline str operator [](const char* cstr) {
		return str::slice(range(cstr));
	}
	
	//for substr getter
	inline str operator()(int pos) {
		size_t l=len();		
		if (pos<0) pos+=l;
		assert(pos>=0 AND pos<l);
		return s.substr(pos);
	}
	
	//for substr
	str operator()(int start, int stop, int step=1) {
		if (step==0) return "";
		size_t l=len();
		if (start<0) start+=l;
		assert(start>=0 AND start<l);
		if (stop<0) stop+=l;
		if (step>0) {
			assert(stop>=0 AND stop<=l);
			int sl=stop-start;
			if (sl<=0) return "";
			if (step==1) return s.substr(start, sl);
			string ret;
			ret.reserve(sl);
			for (size_t i=start; i<stop; i+=step) ret.push_back(s[i]);
			return ret;
		} else {
			assert(stop>=-1 AND stop<l);
			int sl=start-stop;
			if (sl<=0) return "";
			if (step==-1) return string(s.rbegin()+start, s.rbegin()+(start+sl));
			string ret;
			ret.reserve(sl);
			for (size_t i=start; i>stop; i+=step) ret.push_back(s[i]);
			return ret;
		}
	}
	
	inline iterator begin() { return s.begin(); } 
	inline iterator end() { return s.end(); }
	inline reverse_iterator rbegin() { return s.rbegin(); }
	inline reverse_iterator rend() { return s.rend(); }
	
	inline const_iterator begin() const { return s.begin(); } 
	inline const_iterator end() const { return s.end(); }
	inline const_reverse_iterator rbegin() const { return s.rbegin(); }
	inline const_reverse_iterator rend() const { return s.rend(); }
	
	//reverse the str
	inline str& reverse() {
		for(size_t i=0, j=len()-1; i<j; ++i,--j) swap(s[i], s[j]);
		return *this;
	}
	
	//return a reversed new str
	inline str reversed() {
		return string(s.rbegin(), s.rend());
	}
	
	//sort the str
	inline str& sort() {
		::sort(s.begin(), s.end());
		return *this;
	}
	
	//return a sorted new str
	inline str sorted() {
		return clone().sort();
	}
	
	/*************************************************
	S.split([sep [,results]]) -> list of strings
		Return a list of the words in the string S, using sep as the
		delimiter string. If results is given, it will get all the 
		result list of strings. If sep is not specified, any
		whitespace string is a separator and empty strings are removed
		from the result.
	*************************************************/
	template<class Container>
	inline Container& split(const str& sep, Container& results) {	//faster version
		vector<string::iterator> o;
		::split(s, sep, o);
		for (size_t i=0; i<o.size(); i+=2) results.insert(results.end(), Container::value_type(o[i], o[i+1]));
		return results;
	}
	
	inline const vec_str split(const str& d) {	//slower version
		vec_str vs;
		vs.reserve(20);
		return this->split(d, vs);
	}
	
	vec_str split() {
		vec_str vs;
		vs.reserve(20);
		//TODO
		return this->split(d, vs);
	}
	
	/*************************************************
	S.join(sequence) -> str
		Return a string which is the concatenation of the strings in the
		sequence.  The separator between elements is S.
	*************************************************/
	template<class Container>
	inline str join(const Container& c) {
		string r;
		r.reserve(1024);
		return ::join(s, c, r);
	}
	
	/*************************************************
	S.find(sub [,start [,end]]) -> int
		Search from left to right.
		Return the lowest index in S where substring sub is found,
		such that sub is contained within s[start:end].  Optional
		arguments start and end are interpreted as in slice notation.
		Return -1 on failure.
	*************************************************/
	int find(const str& sub, int start=0) const {
		size_t l=len(), r;
		if (l==0) return -1;
		if (start<0) start+=l;
		assert(start>=0 AND start<l);
		return s.find(sub.s, start);
	}
	
	inline int find(const str& sub, int start, int end) const {
		return (*this)(start, end).find(sub);
	}
	
	/*************************************************
	S.rfind(sub [,start [,end]]) -> int
		Search from right to left.
		Return the highest index in S where substring sub is found,
		such that sub is contained within s[start:end].  Optional
		arguments start and end are interpreted as in slice notation.
		Return -1 on failure.
	*************************************************/
	int rfind(const str& sub, int start=-1) const {
		size_t l=len(), r;
		if (l==0) return -1;
		if (start<0) start+=l;
		assert(start>=0 AND start<l);
		return s.rfind(sub.s, start);
	}
	
	int rfind(const str& sub, int start, int end) const {
		return (*this)(start, end).rfind(sub);
	}
	
	/*************************************************
	S.clone() -> new str
		Return a deep copy of string S, which is a clone
		of S.
	*************************************************/
	inline str clone() {
		return s;
	}
	
	/*************************************************
	S.replace(old, new[, count]) -> S
		Return string S with all occurrences of substring old 
		replaced by new.  If the optional argument count is 
		given, only the first count occurrences are replaced.
	*************************************************/
	str& replace(const str& old, const str& new_, size_t count=-1) {
		size_t start=0, olen=old.len(), nlen=new_.len();
		while(count==-1 OR count-->0) {
			start=s.find(old.s, start);
			if (start==string::npos) break;
			s.replace(start, olen, new_.s);
			start+=nlen;
		}
		return *this;
	}
	
	/*************************************************
	S.replaced(old, new[, count]) -> new str
		Return a copy of string S with all occurrences 
		of substring old replaced by new.  If the optional 
		argument count is given, only the first count 
		occurrences are replaced.
	*************************************************/
	inline str replaced(const str& old, const str& new_, size_t count=-1) {
		return clone().replace(old, new_, count);
	}
	
	/*************************************************
	S.count(sub[, start[, end]]) -> int
		Return the number of non-overlapping occurrences of substring sub in
		string S[start:end].  Optional arguments start and end are interpreted
		as in slice notation.
	*************************************************/
	
	
};


//for glue

Macro__over_load_dump__ValueType(str);


#endif /* STR_HPP_1324997558_33 */
