#ifndef FILESYS_HPP_1325514009_53
#define FILESYS_HPP_1325514009_53
/**
 * File: filesys.hpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2012-01-02 22:20:09.534000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"
#include "str.hpp"
#include "list.hpp"
#include "set.hpp"
#include "tuple.hpp"
#include "dict.hpp"

class path {
private:
	str p;
public:
	inline path(const str& s):p(s) {}
	
	inline path& operator +=(const path& r) { return add(r); }
	inline path operator +(const path& r) const { return clone()+=r; }
	
	// inline path& operator +=(const str& r) { return add(r); }
	// inline path operator +(const str& r) const { return clone()+=r; }
	
	inline path& operator /=(const path& r) { return join(r); }
	inline path operator /(const path& r) const { return clone()/=r; }
	
	// inline path& operator /=(const str& r) { return join(path(r)); }
	// inline path operator /(const str& r) const { return clone()/=r; }
	
	inline path clone() const { return path(p); }
	inline path& add(const path& r) { p+=r.p; return *this; }
	
	inline path& join(const path& r) {
		const str& q=r.p;
		if (p.size()==0 OR q.size()==0) {
			p+=q;
			return *this;
		}
		char a='\\', b='/';
#ifdef OS_WIN32
		char sep=a;
#else
		char sep=b;
#endif
		char x=p[-1], y=q[0];
		if ((x==a OR x==b) AND (y==a OR y==b))  p=p(0, -1)+sep+q(1);
		else if ((x==a OR x==b) AND (y!=a AND y!=b))  p=p(0, -1)+sep+q;
		else if ((x!=a AND x!=b) AND (y==a OR y==b))  p=p+sep+q(1);
		else p=p+sep+q;
		return *this;
	}
	
	inline const string tostr() const { return p.tostr(); }
	inline const char* tocstr() const { return p.tocstr(); }
	
	inline const bool isfile() const {}
	inline const bool isdir() const {}
	inline const ulong fsize() const {}
	inline const uint fmtime() const {}
	inline const uint fatime() const {}
	inline const uint fctime() const {}
	inline liststr listfiles() const {}
	inline liststr listdirs() const {}
	inline liststr listall() const {}
	inline liststr split() const {}
	inline liststr splitdir() const {}
	inline liststr splitext() const {}
	inline liststr dirname() const {}
	inline liststr ext() const {}
	inline liststr filename() const {}
};

class file {
private:
	ifstream ifs;
	ofstream ofs;
	const path p;
	const char m;
	file(const file& r):p(0), m(0) {}
	file& operator=(const file& r) { return *this; }
public:
	file(const path& p, const char m='r'):p(p), m(m) {
		if (m=='r') {
			assert(p.isfile());
			ifs.open(p.tocstr());
		}
		else if (m=='w') ofs.open(p.tocstr());
		else if (m=='a') ofs.open(p.tocstr(), ofstream::app);
		else assert(false);
	}
	
	str read(uint size=0) {
		assert(m=='r');
		if (size==0) size=p.fsize();
		if (size==0) return "";
		char* s=new char[size];
		ifs.read(s, size);
		string ret(s, s+size);
		delete s;
		return ret;
	}
	
	str readline() {
		assert(m=='r');
		uint size=64*1024;
		char* s=new char[size];
		ifs.getline(s, size);
		string ret(s, s+size);
		delete s;
		return ret;
	}
	
	file& write(const str& s) {
		assert(m!='r');
		ofs.write(s.tocstr(), s.size());
		return *this;
	}
	
	file& writeline(const str& s) {
#ifdef OS_WIN32
		str nl="\r\n";
#else
		str nl="\n";
#endif
		write(s);
		write(nl);
	}
	
	~file() {
		if (m=='r') ifs.close();
		else ofs.close();
	}
};



#endif /* FILESYS_HPP_1325514009_53 */
