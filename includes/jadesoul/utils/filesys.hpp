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
	
	inline path& add(const str& r) {
		p+=r;
		return *this;
	}
	
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
	
	inline const string tostr() const { return p.s; }
	
};

class file {
private:
	ifstream ifs;
	ofstream ofs;
	const path p;
	const char mode;
public:
	file(const path& p, const char m='r'): {
		if (mode=='r') ifs.open(p.tostr());
		else if (mode=='w') ofs.open(p.tostr());
		else if (mode=='a') ifs.open(p.tostr());
		else assert(false);
	}
	
};



#endif /* FILESYS_HPP_1325514009_53 */
