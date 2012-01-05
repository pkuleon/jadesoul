#ifndef INCLUDES_HPP_1324964318_14
#define INCLUDES_HPP_1324964318_14
/**
 * File: includes.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-26 18:24:42.928000
 * Written In: MSRA, beijing, China
 */

#include "os.hpp"
#include "compiler.hpp"
#include "types.hpp"
#include "macros.hpp"


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
	#include <windows.h>
	
	//for psapi
	#include <psapi.h>
	#ifdef CPL_MSVC
		#pragma comment(lib,"psapi.lib")
	#endif
#endif

#ifdef OS_LINUX
	#include <sys/time.h>
	#include <unistd.h>
#endif

//for hash map
#if (defined CPL_GNUC) && (__GNUC__>2)
	#include <ext/hash_set>
	#include <ext/hash_map>
	using namespace __gnu_cxx;
#else
	#include <hash_set>
	#include <hash_map>
	using namespace stdext;
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
using std::insert_iterator;
using std::inserter;
using std::back_inserter;
using std::front_inserter;
using std::back_insert_iterator;
using std::front_insert_iterator;
using std::distance;
using std::advance;
using std::ptrdiff_t;

typedef std::vector<int> vec_int;
typedef vec_int vecint;
typedef std::vector<uint> vec_uint;
typedef vec_uint vecuint;
typedef std::vector<char> vec_char;
typedef vec_char vecchar;
typedef std::vector<string> vecstring;


#endif /* INCLUDES_HPP_1324964318_14 */
