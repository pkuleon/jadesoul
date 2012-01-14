#ifndef DUMP_HPP_1324964966_23
#define DUMP_HPP_1324964966_23
/**
 * File: dump.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-27 13:49:26.234000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"
#include "datetime.hpp"

/**************************************************
format: format string to stream
**************************************************/
inline string va_format(const char* fmt, va_list ap) {
	const int MAX=1<< 12;
	char buf[MAX+1];
	vsprintf(buf, fmt, ap);
	va_end(ap);
	string ret(buf, buf+strlen(buf));
	return ret;
}

string format(const char* fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	string ret=va_format(fmt, ap);
	va_end(ap);
	return ret;
}

/**************************************************
log: log massage by format, auto add time
**************************************************/
void log(const char* fmt, ...) {
	va_list ap;
	datetime now;
	cout<<"LOG : "<<now<<" : ";
	va_start(ap, fmt);
	vfprintf(stdout, fmt, ap);
	va_end(ap);
	cout<<endl;
}

/**************************************************
dump: show a variable in the readable format
**************************************************/
// template<class Container >
// void dump(const Container& c,
          // const char* deli=", ",
          // const char* left="[ ",
          // const char* right="]",
	  // ostream& out=cout ) {
	// out<<left;
	// ostream_iterator<typename Container::value_type> osit(out, deli);
	// copy(c.begin(), c.end(), osit);
	// out<<right<<endl;
// }

//some special over loads
// #define Macro__over_load_dump__ValueType( T )                           \
// inline void dump( const T & v, ostream & out=cout ) {                   \
    // out<<v<<endl;                                                       \
// };

// Macro__over_load_dump__ValueType(bool);
// Macro__over_load_dump__ValueType(int);
// Macro__over_load_dump__ValueType(unsigned int);
// Macro__over_load_dump__ValueType(char);
// Macro__over_load_dump__ValueType(unsigned char);
// Macro__over_load_dump__ValueType(short);
// Macro__over_load_dump__ValueType(unsigned short);
// Macro__over_load_dump__ValueType(long);
// Macro__over_load_dump__ValueType(unsigned long);
// Macro__over_load_dump__ValueType(float);
// Macro__over_load_dump__ValueType(double);
// Macro__over_load_dump__ValueType(int8);
// Macro__over_load_dump__ValueType(uint8);
// Macro__over_load_dump__ValueType(string);

template<class T>
inline void dump(const T& v, ostream& o=cout) {
	o<<v<<endl;
}

#define Macro__over_load_operator_out__SequenceContainer_Left_Deli_Right(Container, left, deli, right)\
template<class T>\
inline ostream& operator<<(ostream& o, const Container<T> c) {\
	o<<left;\
	ostream_iterator<typename Container<T>::value_type> osit(o, deli);\
	copy(c.begin(), c.end(), osit);\
	return out<<right;\
}

Macro__over_load_operator_out__SequenceContainer_Left_Deli_Right(vector, "[ ", ", ", " ]");
Macro__over_load_operator_out__SequenceContainer_Left_Deli_Right(std::list, "( ", ", ", " )");
Macro__over_load_operator_out__SequenceContainer_Left_Deli_Right(std::set, "< ", ", ", " >");


#define Macro__over_load_operator_out__AssociatedContainer_Left_Center_Deli_Right(Container, left, center, deli, right)\
template<class K, class V>\
inline ostream& operator<<(ostream& o, const Container<K, V> c) {\
	o<<left;\
	for (typename Container<K, V>::iterator i=c.begin(), j=c.end(); i!=j; ++i) {\
		o<<i->first<<center<<i->second<<deli;\
	}\
	return o<<right;\
}

Macro__over_load_operator_out__AssociatedContainer_Left_Center_Deli_Right(map, "{ ", ":", ", ", " }");
Macro__over_load_operator_out__AssociatedContainer_Left_Center_Deli_Right(hash_map, "{ ", ":", ", ", " }");




#endif /* DUMP_HPP_1324964966_23 */
