/**
 * File: str.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-12-27 22:53:13.267000
 * Written In: Peking University, beijing, China
 */

#include <jadesoul.hpp>

int main () {
	// str a=str("hi")+str(2147483648L);
	str a=str("hi")+"shit";
	// string c("shit");
	// str a=c;
	for_n(i, a.size()) cout<<a.at(i);
	cout<<endl;
	cout<<a[-1]<<endl;
	cout<<a[-2]<<endl;
	
	char t[]="sjjjdiuuiw";
	str c(t, t+10);
	string e="asdasdkjasd";
	str d(e.begin(), e.end());
	cout<<c[-1]<<endl;
	cout<<d[-2]<<endl;
}

