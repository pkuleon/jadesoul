/**
 * File: engine.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-02-12 15:41:48.903000
 * Written In: Peking University, beijing, China
 */

#include "othello.hpp"

using namespace othello;

int main (int argc, char**argv) {
	if (argc!=2) return 0;
	char* s=argv[1];
	if (strlen(s)!=65) return 1;
	const char* r=odk_gen_move(s);
	puts(r);
}
