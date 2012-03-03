/**
 * File: sgf_parser.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2012-03-02 18:04:08.749000
 * Written In: MSRA, beijing, China
 */

#include <jadesoul.hpp>

namespace sgf {

	enum PropertyID {
		COMMENT,
		TOTAL_PROPERTY_NUM
	};
	
	str PropertyNames[]={
		"C",
		""
	};
	
	typedef str PropertyValue;
	typedef list<PropertyValue> PropertyValueList;
	
	class Property {
	public:
		PropertyID id;
		PropertyValueList values;
	};
	
	class Node {
	public:
		
	};
	
	class Branch {
	public:
		
	};
	
	class Tree {
	public:
		
	};
	
	class Collection {
	public:
		list<Tree> trees;
	};
	
	class Parser {
	public:
		
	};
}

int main () {
	cout<<"hello, world"<<endl;
}

