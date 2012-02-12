/**
 * File: othello.cpp
 * Description: This is the othello program of jadesoul
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-24 14:38:34.530000
 * Written In: Peking University, beijing, China
 */

#include "othello.hpp"

using namespace othello;

int main () {
	board b;
	cout<<b;
	move m(BLACK, b);
	// print(m.mime);
	// print(m.yours);
	move* next=m.generate_move(), *cur=&m;
	while (next) {
		b.play(next->prev->p, next->prev->c);
		system("cls");
		cout<<b;
		char a[100];
		// cin.getline(a, 100);
		next=next->generate_move();
	}
}




