#ifndef OBJECT_HPP_1325430546_23
#define OBJECT_HPP_1325430546_23
/**
 * File: object.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-01 23:09:06.230000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"

class object {
public:
	object() {
	
	}
	
	friend ostream& operator<<(ostream& out, const object& obj) {
		return out<<"[object]";
	}
	
	virtual object& print() {
		cout<<this->repr();
		return *this;
	}
	
	virtual string repr() {
		ostringstream oss;
		oss<<*this;
		return oss.str();
	}
	
	inline const size_t len() const {
		return 0; 
	}
};

#endif /* OBJECT_HPP_1325430546_23 */
