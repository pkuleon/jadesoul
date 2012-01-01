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
	
	inline iterator begin() { return s.begin(); } 
	inline iterator end() { return s.end(); }
	inline reverse_iterator rbegin() { return s.rbegin(); }
	inline reverse_iterator rend() { return s.rend(); }
	
	inline const_iterator begin() const { return s.begin(); } 
	inline const_iterator end() const { return s.end(); }
	inline const_reverse_iterator rbegin() const { return s.rbegin(); }
	inline const_reverse_iterator rend() const { return s.rend(); }
	
	inline str() {
		// nothing to do
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
	inline str operator +(const str& r) {
		return str(s+r.s);
	}
	
	//for multiply
	inline str operator *(int n) {
		return repeated(n);
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
		return this->split(" ", vs);
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
	inline int find(const str& sub, int start=0, int end=0) const {
		const_iterator a=(start<0?s.end():s.begin())+start, b=(end<=0?s.end():s.begin())+end;
		if (a>=b) return -1;
		const_iterator c=std::search(a, b, sub.begin(), sub.end());
		return (c==b)?-1:c-a;
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
	
	inline int rfind(const str& sub, int start=0, int end=0) const {
		uint l=len();
		start=(start>0)?l-1-start:-start-l;
		end=(end>0)?l-1-end:-end-l;
		const_reverse_iterator a=(end<=0?s.rend():s.rbegin())+end, b=(start<0?s.rend():s.rbegin())+start;
		if (a>=b) return -1;
		const_reverse_iterator c=std::search(a, b, sub.rbegin(), sub.rend());
		return (c==b)?-1:(b-c)-sub.len()-1;
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
	S.count(sub[, start[, end]]) -> uint
		Return the number of non-overlapping occurrences of substring sub in
		string S[start:end].  Optional arguments start and end are interpreted
		as in slice notation.
	*************************************************/
	uint count(const str& sub, int start=0) const {
		size_t l=len(), cnt=0, lsub=sub.len();
		if (l==0) return 0;
		if (start<0) start+=l;
		assert(start>=0 AND start<l);
		while ((start=s.find(sub.s, start))!=string::npos) {
			++cnt;
			start+=lsub;
		}
		return cnt;
	}
	
	inline uint count(const str& sub, int start, int end) const {
		return (this->operator()(start, end)).count(sub);
	}
	
	/*************************************************
	S.center(width[, fillchar]) -> string
		Return S centered in a string of length width. Padding is
		done using the specified fill character (default is a space)
	*************************************************/
	inline str center(uint width, char fillchar) {
		string ret(width, fillchar);
		uint l=len();
		int r=(width-l)/2;
		if (r>=0) std::copy(s.begin(), s.end(), ret.begin()+r);
		else std::copy(s.begin()+(-r), s.begin()+(width-r), ret.begin());
		return ret;
	}
	
	/*************************************************
	S.startswith(prefix[, start[, end]]) -> bool
		Return True if S starts with the specified prefix, False otherwise.
		With optional start, test S beginning at that position.
		With optional end, stop comparing S at that position.
		prefix can also be a tuple of strings to try.
	*************************************************/
	bool startswith(const str& prefix, int start=0, int end=0) {
		return ::startswith((start<0?s.end():s.begin())+start, (end<=0?s.end():s.begin())+end, prefix.begin(), prefix.end());
	}
	
	/*************************************************
	S.endswith(suffix[, start[, end]]) -> bool
		Return True if S ends with the specified suffix, False otherwise.
		With optional start, test S beginning at that position.
		With optional end, stop comparing S at that position.
		suffix can also be a tuple of strings to try.
	*************************************************/
	bool endswith(const str& prefix, int start=0, int end=0) {
		return ::endswith((start<0?s.end():s.begin())+start, (end<=0?s.end():s.begin())+end, prefix.begin(), prefix.end());
	}
	

	
	
	/*************************************************
	S.expandtabs([tabsize]) -> string
		Return a copy of S where all tab characters are expanded using spaces.
		If tabsize is not given, a tab size of 8 characters is assumed.
	*************************************************/
	str expandtabs(uint tabsize=8) {
		return replaced("\t", str(" ")*tabsize);
	}
	
	/*************************************************
	S.upper() -> S
	S.uppered() -> new string
		Return a copy of the string S converted to uppercase.
	*************************************************/
	str& upper() {
		for (uint l=len(), i=0; i<l; ++i) {
			char& c=s[i];
			if (c>='a' AND c<='z') c+='A'-'a';
		}
		return *this;
	}
	
	inline str uppered() {
		return clone().upper();
	}
	
	/*************************************************
	S.lower() -> S
	S.lowered() -> new string
		Return a copy of the string S converted to lowercase.
	*************************************************/
	str& lower() {
		for (uint l=len(), i=0; i<l; ++i) {
			char& c=s[i];
			if (c>='A' AND c<='Z') c+='a'-'A';
		}
	}
	
	inline str lowered() {
		return clone().lower();
	}
	
	/*************************************************
	S.swapcase() -> S
	S.swapcased() -> new string
		Return a copy of the string S with uppercase characters
		converted to lowercase and vice versa.
	*************************************************/
	str& swapcase() {
		for (uint l=len(), i=0; i<l; ++i) {
			char& c=s[i];
			if (c>='a' AND c<='z') c+='A'-'a';
			else if (c>='A' AND c<='Z') c+='a'-'A';
		}
	}
	
	inline str swapcased() {
		return clone().swapcase();
	}
	
	/*************************************************
	S.reverse() -> S
	S.reversed() -> new string
		Return a copy of the string S with all chars
		reversed.
	*************************************************/
	str& reverse() {
		std::reverse(s.begin(), s.end());
		return *this;
	}
	
	inline str reversed() {
		return string(s.rbegin(), s.rend());
	}
	
	/*************************************************
	S.repeat(n) -> S
	S.repeated(n) -> new string
		Return a copy of the string S with itself repeated
		for n times. if n<0, the reversed S will be repeated.
	*************************************************/
	str& repeat(int n) {
		str& me=*this;
		uint l=len();
		if (l==0) return me;
		if (n==0) {
			s.clear();
			return me;
		}
		else if (n<0) {
			me.reverse();
			n=-n;
		}
		for (uint i=1; i<n; ++i) s.append(s.begin(), s.begin()+l);
		return me;
	}
	
	inline str repeated(int n) {
		return clone().repeat(n);
	}
	
	/*************************************************
	S.sort() -> S
	S.sorted() -> new string
		Return a copy of the string S with all chars
		sorted.
	*************************************************/
	str& sort() {
		std::sort(s.begin(), s.end());
		return *this;
	}
	
	//return a sorted new str
	inline str sorted() {
		return clone().sort();
	}
	
	/*************************************************
	S.strip([chars]) -> S
	S.lstrip([chars]) -> S
	S.rstrip([chars]) -> S
	S.striped([chars]) -> string
	S.lstriped([chars]) -> string
	S.rstriped([chars]) -> string
		Return a copy of the string S with leading and trailing
		whitespace removed.
		If chars is given, remove characters in chars instead.
	*************************************************/
	inline str& strip(const str& chars=" \t\v\r\n\b") {
		return rstrip(chars).lstrip(chars);
	}
	
	inline str& lstrip(const str& chars=" \t\v\r\n\b") {
		s.erase(0, s.find_first_not_of(chars.s));
		return *this;
	}
	
	inline str& rstrip(const str& chars=" \t\v\r\n\b") {
		s.erase(s.find_last_not_of(chars.s));
		return *this;
	}
	
	inline str& striped(const str& chars=" \t\v\r\n\b") {
		return clone().rstrip(chars).lstrip(chars);
	}
	
	inline str& lstriped(const str& chars=" \t\v\r\n\b") {
		return clone().lstrip(chars);
	}
	
	inline str& rstriped(const str& chars=" \t\v\r\n\b") {
		return clone().rstrip(chars);
	}
	
};


//for glue

Macro__over_load_dump__ValueType(str);


#endif /* STR_HPP_1324997558_33 */
