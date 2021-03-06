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

int x=0;

class mythread : public thread {
private:
	int id;
public:
	mythread(int id):id(id) {
		start();
	}
protected:
	void run() {
		// for_n(i, 2) printf("running my thread: %d\n", id);
		while(1) printf("in thread %d, x=%d\n", id, x++);
	}
};

int main () {
	mythread a[]={1, 2, 3, 4, 5, 6};
	while (1);
}

