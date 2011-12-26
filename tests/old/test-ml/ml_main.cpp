/**
 * File: ml_main.cpp
 * Description: for ml testing
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-07 13:49:03.745000
 * Written In: Peking University, beijing, China$
 */

#define debug
#include <ml.hpp>


int main () {
	typedef FeatureSet<int, 4> array;
	array t;
	for_n(j, 10) {
		t.push_back(1);
		for_n(i, t.size()) cout<<t[i]<<"\t";
		cout<<endl;
	}
}
