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
	fstream fin("dataset.txt");
	examples ds;
	input_examples(fin, ds);
	
	for_n(i, ds.size()) {
		print(ds[i]);
	}
}

