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

namespace py {

	class object {
	public:
		object() {
		
		}
		
		friend ostream& operator<<(ostream& out, const object& obj) {
			return out<<"[object]";
		}
		
		virtual object& print(ostream& out=cout) {
			out<<this->repr();
			return *this;
		}
		
		virtual object& printl(ostream& out=cout) {
			print(out);
			out<<std::endl;
			return *this;
		}
		
		virtual string repr() {
			ostringstream oss;
			oss<<*this;
			return oss.str();
		}
		
		virtual inline const size_t len() const {
			return 0; 
		}
		
		/**************************************************
		equals:	x.equals(y) <==> x == y.
		**************************************************/
		virtual inline const bool equals(const object& r) const {
			return this==&r;
		}
		
		/**************************************************
		hash:	x.hash() <==> Return DWORD hash
		**************************************************/
		virtual inline const size_t hash() const {
			return (size_t)this;
		}
		
		//common iterfaces
		//--------------------------------------------------
		
		
		
		//---------------------------------------------------
	};

}

#endif /* OBJECT_HPP_1325430546_23 */
