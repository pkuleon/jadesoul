/**
 * File: thread.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-11 11:52:04.632000
 * Written In: Peking University, beijing, China
 */
 
#include "jadesoul.hpp"

struct mythread : public thread {

};

int main () {
	mythread a;
	a.start();
	cout<<"hello, world"<<endl;
}

