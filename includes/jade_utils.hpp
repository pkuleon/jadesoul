#ifndef JADE_UTILS_HPP
#define JADE_UTILS_HPP

#include "jade_global.hpp"
#include "jade_algorithm.hpp"




//______________________________________________________________________________________

/**
  * dump -- show all elements in a iterable container
  * usage:  dump< vector<int> >(v, ", ", "[", "]", cout) or show(v, ", ", "[", "]", cout) or just show(v);
  */

const char* default_show_deli=" ";
const char* default_show_left="[ ";
const char* default_show_right="]";

template<class Container >
void dump(const Container& c,
          const char* deli=default_show_deli,
          const char* left=default_show_left,
          const char* right=default_show_right,
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



//now is ostream overloads
//
//here we define our macro format:
//  Macro_ + _over_load_operator_out_ + _ContainerTemplate_ValueType
//    ^ prefix      ^ function explaination   ^ macro parameters
//
//this macro below is important
#define Macro__over_load_operator_out__ContainerTemplate_ValueType( CT, T )  \
inline ostream& operator <<(ostream& os, const CT < T >& c) { \
    dump(c, default_show_deli, default_show_left, default_show_right, os);    \
    return os;  \
}

Macro__over_load_operator_out__ContainerTemplate_ValueType(vector, int);
Macro__over_load_operator_out__ContainerTemplate_ValueType(vector, char);
Macro__over_load_operator_out__ContainerTemplate_ValueType(std::list, int);
Macro__over_load_operator_out__ContainerTemplate_ValueType(std::list, char);


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




class smart_parser {
public:
	static vec_int list(const string& s) {
		istringstream iss(s);
		int i;
		vec_int r;
		while(iss>>i) r.push_back(i);
		return r;
	}
};


// #define LIST smart_parser::list

#endif // JADE_UTILS_HPP
