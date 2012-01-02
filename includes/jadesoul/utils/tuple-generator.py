#coding:utf8

from datetime import datetime

fn='tuple.hpp'
tpl_file='''#ifndef TUPLE_HPP_1325477907_43
#define TUPLE_HPP_1325477907_43
/**
 * File: tuple.hpp
 * Description: this file is automatically generated by tuple-generator.py
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-02 12:18:27.450000
 * Written In: Peking University, beijing, China
 * Genetated Date: %s
 */

#include "includes.hpp"

//template code of tuple
/*
template<class T1=str, class T2=T1, ...>
class  tuple : public object {
public:
	T1& v1;
	T2& v2;
	...
	tuple(T1& t1, T2& t2, ...):v1(t1), v2(t2), ... {}
	
	tuple(tuple& t):v1(t.v1), v2(t.v2), ... {}
	
	template<class R1, class R2...>
	tuple& operator=(const tuple<R1, R2...>& t) {
		v1=t.v1;
		v2=t.v2;
		...
		return *this;
	}
	
	//TODO
	template<class R1, class R2...>
	tuple& assign(R1& r1, R2& r2, ...) {
		v1=r1;
		v2=r2;
	}
	
	friend ostream& operator <<(ostream& o, const tuple& t) {
		return o<<"("
			<<t.v1
			<<t.v2
			...
			<<", "<<")"<<endl;
	}
	
	friend istream& operator >>(istream& i, tuple& t) {
		return i
			>>t.v1
			>>t.v2
			...;
	}
	
	uint len() const {
		return 2;
	}
};

template<class T1, class T2...>
inline tuple<T1, T2...> tuple_(T1& t1, T2& t2...) {
	return tuple<T1, T2...>(t1, t2...);
}

*/

%s

#endif /* TUPLE_HPP_1325477907_43 */
'''

ss=[]

tpl_class='''
template<%s>
class  tuple : public object {
public:
	%s
	
	tuple(%s):%s {}
	
	tuple(tuple& t):%s {}
	
	template<%s>
	tuple& operator=(const tuple<%s>& t) {
		%s
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple& t) {
		return o<<"("<<%s<<")";
	}
	
	friend istream& operator >>(istream& i, tuple& t) {
		return i>>%s;
	}
	
	uint len() const {
		return %d;
	}
};

template<%s>
inline tuple<%s> TUPLE(%s) {
	return tuple<%s>(%s);
}

'''

for j in range(0, 10):
	id=j+1
	all=range(2, 2+j)
	templates=', '.join(['class T1=str']+['class T%d=T1' % i for i in all])
	# templates=', '.join(['class T1']+['class T%d' % i for i in all])
	members='\n\t'.join(['T1& v1;']+['T%d& v%d;' % (i, i) for i in all])
	params=', '.join(['T1& t1']+['T%d& t%d' % (i, i) for i in all])
	initials=', '.join(['v1(t1)']+['v%d(t%d)' % (i, i) for i in all])
	copyinitials=', '.join(['v1(t.v1)']+['v%d(t.v%d)' % (i, i) for i in all])
	
	templates2=', '.join(['class R1']+['class R%d' % i for i in all])
	types=', '.join(['R1']+['R%d' % i for i in all])
	
	assigns='\n\t\t'.join(['v1=t.v1;']+['v%d=t.v%d;' % (i, i) for i in all])
	inputs=''.join(['t.v1']+['<<", "<<t.v%d' % i for i in all])
	outputs=''.join(['t.v1']+['>>t.v%d' % i for i in all])
	
	templates3=', '.join(['class T1']+['class T%d' % i for i in all])
	returns=', '.join(['T1']+['T%d' % i for i in all])
	params2=', '.join(['T1& t1']+['T%d& t%d' % (i, i) for i in all])
	params3=', '.join(['t1']+['t%d' % i for i in all])
	
	new_tpl_class=tpl_class.replace('tuple', 'tuple%d' % id).replace('TUPLE', 'tuple')
	s=new_tpl_class % (templates, members, params, initials, copyinitials, templates2, types, \
		assigns, inputs, outputs, id, templates3, returns, params2, returns, params3)
	ss.append(s)

s=tpl_file % (datetime.now(), '\n\n'.join(ss))
open(fn, 'w').write(s)
























