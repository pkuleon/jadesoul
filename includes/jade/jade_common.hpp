#ifndef JADE_COMMON_HPP
#define JADE_COMMON_HPP

//this file works like the visual c++'s stdafx.h/stdafx.cpp ,
//put the headers of code that merely change each time here
//and all of the code here will be compiled only once, in
//this way a lot of time will be saved during compiling

//standard libaries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdarg>
#include <cassert>
#include <ctime>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <fstream>
#include <map>
#include <bitset>
#include <set>
#include <typeinfo>
#include <iterator>
#include <exception>
#include <numeric>

#ifdef OS_WIN32
	#include <conio.h>
#endif

//boost libs -- foreach
//#include <boost/foreach.hpp>
//#define foreach BOOST_FOREACH
//#define reverse_foreach BOOST_REVERSE_FOREACH

//namespaces
// using namespace std;
using std::vector;
using std::stack;
using std::queue;
using std::pair;
using std::swap;
using std::map;
using std::string;
using std::stringstream;
using std::ostream;
using std::istream;
using std::boolalpha;
using std::accumulate;

// using std::set;
// using std::list;
using std::hex;
using std::cout;
using std::cin;
using std::istringstream;
using std::ostringstream;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::bitset;
using std::ostream_iterator;
using std::iterator_traits;

//yaml for dumping
//#include "yaml-cpp/yaml.h"

//global configs and types
#include "jade_config.hpp"
#include "jade_types.hpp"

typedef std::vector<int> vec_int;
typedef std::vector<char> vec_char;
typedef std::vector<string> vec_str;

#define AND &&
#define OR ||
#define NOT !

//easy for loop
#define forever FOREVER
#define FOREVER         for (;;)

//for i in 0-n
#define for_n(i, n) for (int i=0; i<n; ++i)
#define for_tn(type, i, n) for (type i=0; i<n; ++i)

//for i in range start-step-stop
#define for_in(i, start, end, step) for (int i=start; i<end; i+=step)
#define for_tin(type, i, start, end, step) for (type i=start; i<end; i+=step)

#define for_iter(it, type, con) for(type::iterator it=con.begin(); it!=con.end(); ++it)
#define for_citer(it, type, con) for(type::const_iterator it=con.begin(); it!=con.end(); ++it)
#define for_riter(it, type, con) for(type::reverse_iterator it=con.rbegin(); it!=con.rend(); ++it)
#define for_criter(it, type, con) for(type::const_reverse_iterator it=con.rbegin(); it!=con.rend(); ++it)

#define if_in(val, con) if (con.find(val)!=con.end())
#define if_not_in(val, con) if (con.find(val)==con.end())
#define is_in(val, con) (find(con.begin(), con.end(), val)!=con.end())
#define is_in_rg(val, begin, end) (find(begin, end, val)!=end)

#define magic(...) {log("now running code: %s", #__VA_ARGS__); __VA_ARGS__;log("done!");}

#endif // JADE_COMMON_HPP
