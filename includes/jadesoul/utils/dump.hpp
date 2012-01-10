#ifndef DUMP_HPP_1324964966_23
#define DUMP_HPP_1324964966_23
/**
 * File: dump.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-27 13:49:26.234000
 * Written In: MSRA, beijing, China
 */

#include "includes.hpp"
#include "datetime.hpp"

std::ostream& vform( std::ostream& os, const char* fmt, va_list ap)
{
	const int MAX = 1 << 12;
	char buf[ MAX + 1 ];
	vsprintf( buf, fmt, ap );
	va_end(ap);
	return os << buf;
}

std::ostream& form( std::ostream& os, const char* fmt, ... )
{
	va_list ap;
	va_start( ap, fmt );
	vform(os, fmt, ap );
	va_end(ap);
	return os;
}

/**
 *	log msg
 */

void log(const char* fmt, ...) {
	va_list ap;
	datetime now;
	cout<<"LOG : "<<now<<" : ";
	va_start(ap, fmt);
	vfprintf(stdout, fmt, ap);
	va_end(ap);
	cout<<endl;
}

/**
  * dump -- show all elements in a iterable container
  * usage:  dump< vector<int> >(v, ", ", "[", "]", cout) or dump(v, ", ", "[", "]", cout) or just show(v);
  */

template<class Container >
void dump(const Container& c,
          const char* deli=", ",
          const char* left="[ ",
          const char* right="]",
	  ostream& out=cout ) {
	out<<left;
	ostream_iterator<typename Container::value_type> osit(out, deli);
	copy(c.begin(), c.end(), osit);
	out<<right<<endl;
}

//some special over loads
#define Macro__over_load_dump__ValueType( T )                           \
inline void dump( const T & v, ostream & out=cout ) {                   \
    out<<v<<endl;                                                       \
};                                                                      \
inline void dump( T * v, ostream & out=cout ) {                         \
    out<<v<<endl;                                                       \
}

Macro__over_load_dump__ValueType(bool);
Macro__over_load_dump__ValueType(int);
Macro__over_load_dump__ValueType(unsigned int);
Macro__over_load_dump__ValueType(char);
Macro__over_load_dump__ValueType(char*);
Macro__over_load_dump__ValueType(unsigned char);
Macro__over_load_dump__ValueType(short);
Macro__over_load_dump__ValueType(unsigned short);
Macro__over_load_dump__ValueType(long);
Macro__over_load_dump__ValueType(unsigned long);
Macro__over_load_dump__ValueType(float);
Macro__over_load_dump__ValueType(double);
Macro__over_load_dump__ValueType(int8);
Macro__over_load_dump__ValueType(uint8);
Macro__over_load_dump__ValueType(string);


//now is ostream overloads
//
//here we define our macro format:
//  Macro_ + _over_load_operator_out_ + _ContainerTemplate_ValueType
//    ^ prefix      ^ function explaination   ^ macro parameters
//
//this macro below is important
#define Macro__over_load_operator_out__ContainerTemplate_ValueType( CT, T )  \
inline ostream& operator <<(ostream& os, const CT < T >& c) { \
    dump(c, ", ", "[ ", "]", os);    \
    return os;  \
}

Macro__over_load_operator_out__ContainerTemplate_ValueType(vector, int);
Macro__over_load_operator_out__ContainerTemplate_ValueType(vector, char);
Macro__over_load_operator_out__ContainerTemplate_ValueType(vector, string);
Macro__over_load_operator_out__ContainerTemplate_ValueType(std::list, int);
Macro__over_load_operator_out__ContainerTemplate_ValueType(std::list, char);
Macro__over_load_operator_out__ContainerTemplate_ValueType(std::list, string);


/*no use now
template<class Container, class Iterator>
void show_old(const Container& c, const char* deli="", const char* left="{", const char* right="}") {
    cout<<left;
    ostream_iterator<typename Container::value_type> osit(cout, deli);
    copy(c.begin(), c.end(), osit);
    cout<<right<<endl;
}

template<class Container, class ValueType>
void show2(const Container& c, const char* deli="", const char* left="{", const char* right="}") {
    show_old<Container, iterator<input_iterator_tag, ValueType> >(c, deli, left, right);
}
*/


// class smart_parser {
// public:
	// static vec_int list(const string& s) {
		// istringstream iss(s);
		// int i;
		// vec_int r;
		// while(iss>>i) r.push_back(i);
		// return r;
	// }
// };

#endif /* DUMP_HPP_1324964966_23 */
