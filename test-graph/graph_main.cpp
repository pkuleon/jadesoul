/**
 * File: graph_main.cpp
 * Description: for graph testing
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2011-05-06 01:25:15.285000$
 */


#include "../includes/graph_types.hpp"

int main () {
	graph a;
	fstream fin("graph.txt");
	fin>>a;
	cout<<a;
	// bool a;
	// cin>>a;
	// cout<<a;
}

