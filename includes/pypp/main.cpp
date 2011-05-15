/**
 * File: main.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-12 15:19:55.560000
 * Written In: Peking University, beijing, China
 */

// #define debug
#include "pypp.hpp"


int main () {
	// var s=eval("[1,<1,3,(1,[2,3,4],3)>,{'age':2, 'set':<1,2,3,>, 'tuple':(1,2,3)},'hi', 1232.213]  ");
	// s=eval("[1,2,3]");
	// var s=eval("[1,2,[1,[1,2,[1,2,3,'jadesoul',1.1],'jadesoul',1.1],3,'jadesoul',1.1],'jadesoul',1.1]");
	// var s=eval("{'as':1, 234324.234234\t\t\t:37983489,  4:[1,2,3], 5:<1,2,2>, 6:'hi'}");
	// var s=eval("<1,2,.2,3,'你好','你好'>");
	var s;
	s=LIST(1,2,3,  -4.234,9345   ,'你好',"我也好");
	s.dump().peek();
	s=TUPLE(1,2,.2,3,'你好','你好');
	s.dump().peek();
	s=SET(1,2,.2,3,3,4,4,5,'你好','你好');
	s.dump().peek();
	s=DICT(
		'name':'jadesoul',
		'age':27,
		'性别':'男',
		123:456
	);
	s.dump().peek();
	
	s=VAR(
		{
			'campany':'gbsoft',
			'leafer':'jadesoul',
			'list':[1,2,3 , 4.1, 4.1, 'hello', 'hello', 1],
			'tuple':(1,2,3 , 4.1, 4.1, 'hello', 'hello', 1),
			'set':<1,2,3 , 4.1, 4.1, 'hello', 'hello', 1>,
			'dict':{'nice':'nice', 1:1}
		}
	);
	s.dump().peek();
}

