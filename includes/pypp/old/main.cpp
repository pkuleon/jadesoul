/**
 * File: main.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-07 21:37:10.814000
 * Written In: Peking University, beijing, China$
 */


#include "types.hpp"


// template<class T>
// class list : public std::vector<T>{
// public:
	// ~list() {
		// std::vector<T>::~vector();
		// std::cout<<"kill a list";
	// }
// };

// list a;
// for i, v in a:
	// print i, v

#define for_1(n) for (int i=0; i<n; ++i)
#define for_2(i, n) for (int i=0; i<n; ++i)
#define for_3(type, i, n) for (type i=0; i<n; ++i)
#define for_4(type, i, begin, end) for (type i=begin; i<end; ++i)
#define for_5(type, i, begin, end, step) for (type i=begin; i<end; i+=step)
#define for1 for_1
#define for2 for_2
#define for3 for_3
#define for4 for_4
#define for5 for_5

#undef for_in
#define for_in(i, a) for (int i=0; i<a.size(); ++i)

#define for_rng(expr, i, vi) vec_int vi(range(#expr).to_vec()); for_in(i, vi)

#define for_iter


// for (list::iterator it=a.begin(); it!=a.end(); ++it)

int main () {
	vector<int> a(10, 3);
	// for_in(i, a) cout<<i<<":"<<a[i]<<endl;
	// for2(i, 10) for2(j, 10) cout<<i<<"*"<<j<<"="<<i*j<<"\t";
	
	for_rng(:10, i, vi) cout<<i;
	return 0;
}

