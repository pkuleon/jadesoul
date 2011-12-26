/**
 * File: objectworld.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-12-24 22:56:19.011000
 * Written In: Peking University, beijing, China
 */
 
#include "jadesoul.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Type {
	const char* name;
public:
	Type(const char* name):name(name) {}
};

Type Type_Type("type");

namespace objectworld {
	
	template<class T>
	class heap_ptr {
	public:
	};
	
	template<class T>
	class reference {
	private:
		T* ptr;
		size_t ref_cnt;
	public:
		reference(T* ptr):ptr(ptr), ref_cnt(0) {}
	};
	
	class object {
		typedef heap_ptr<object*> reference;
	public:
		template<class T>
		__add__(const reference<T>& ref) {
			
		}
	};
	
	class number : public object {
	public:
		
	};
	
	class string : public object {
	public:
		
	};

	class list : public object {
	public:
		
	};
	
	class set : public object {
	public:
		
	};
	
	class tuple : public object {
	public:
		
	};
	
	class dict : public object {
	public:
		
	};
	
}

class App {
public:
	App() {
		cout<<"hello, world"*3<<endl;
	}
};

int main () {
	App();
}
