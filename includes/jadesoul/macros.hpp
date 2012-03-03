#ifndef MACROS_HPP_1324964318_13
#define MACROS_HPP_1324964318_13
/**
 * File: macros.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-26 18:27:36.135000
 * Written In: Peking University, beijing, China
 */

#define debug

#define AND &&
#define OR ||
#define NOT !

//easy for loop
#define forever FOREVER
#define FOREVER         for (;;)

//for i in 0-n
#define for_n(i, n) for (uint i=0; i<n; ++i)
#define for_tn(type, i, n) for (type i=0; i<n; ++i)

//for i in range start-step-stop
#define for_any(i, start, end) for (int i=start; i<=end; ++i)
#define for_tany(type, i, start, end) for (type i=start; i<=end; ++i)
#define for_in(i, start, end, step) for (int i=start; i<end; i+=step)
#define for_tin(type, i, start, end, step) for (type i=start; i<end; i+=step)

//for container iterations, in for_iterc, the 'c' means the container can be changes in the for loop
#ifdef CPL_MSVC
	#define for_iter(it, type, con) for(type::iterator it=con.begin(), itend=con.end(); it!=itend; ++it)
	#define for_iterc(it, type, con) for(type::iterator it=con.begin(); it!=con.end(); ++it)
	#define for_riter(it, type, con) for(type::reverse_iterator it=con.rbegin(), itend=con.end(); it!=itend; ++it)
	#define for_riterc(it, type, con) for(type::reverse_iterator it=con.rbegin(); it!=con.rend(); ++it)
#else
	#define for_iter(it, type, con) for(typename type::iterator it=con.begin(), itend=con.end(); it!=itend; ++it)
	#define for_iterc(it, type, con) for(typename type::iterator it=con.begin(); it!=con.end(); ++it)
	#define for_riter(it, type, con) for(typename type::reverse_iterator it=con.rbegin(), itend=con.end(); it!=itend; ++it)
	#define for_riterc(it, type, con) for(typename type::reverse_iterator it=con.rbegin(); it!=con.rend(); ++it)
#endif
#define if_in(val, con) if (con.find(val)!=con.end())
#define if_not_in(val, con) if (con.find(val)==con.end())
#define is_in(val, con) (find(con.begin(), con.end(), val)!=con.end())
#define is_in_rg(val, begin, end) (find(begin, end, val)!=end)


//for debug option
#ifdef debug
	#define print(var) cout<<#var<<"="<<var<<endl;
	#define magic(...) log(__VA_ARGS__)
#else
	#define print(var)
	#define magic(...)
#endif

#define jtest(name, id, ...) \
struct name{\
	name() {\
		cout<<"-------------------------------------------------- "\
		<<#id<<" : "\
		<<#name\
		<<"\n";\
		__VA_ARGS__\
	}\
} id;

#ifdef OS_WIN32
	#define Char2WChar(lpMultiByteStr,cbMultiByte,lpWideCharStr,cbWideChar) \
		MultiByteToWideChar(CP_ACP,0,lpMultiByteStr,cbMultiByte,lpWideCharStr,cbWideChar)
	#define WChar2Char(lpWideCharStr,cbWideChar,lpMultiByteStr,cbMultiByte) \
		WideCharToMultiByte(CP_ACP,0,lpWideCharStr,cbWideChar,lpMultiByteStr,cbMultiByte,NULL,NULL)
#endif


#ifndef PI
	#define PI       3.14159265358979323846
#endif

#ifndef TWO_PI
	#define TWO_PI   6.28318530717958647693
#endif

#ifndef M_TWO_PI
	#define M_TWO_PI   6.28318530717958647693
#endif

#ifndef FOUR_PI
	#define FOUR_PI 12.56637061435917295385
#endif

#ifndef HALF_PI
	#define HALF_PI  1.57079632679489661923
#endif

#ifndef DEG_TO_RAD
	#define DEG_TO_RAD (PI/180.0)
#endif

#ifndef RAD_TO_DEG
	#define RAD_TO_DEG (180.0/PI)
#endif

#ifndef MIN
	#define MIN(x,y) (((x) < (y)) ? (x) : (y))
#endif

#ifndef MAX
	#define MAX(x,y) (((x) > (y)) ? (x) : (y))
#endif

#ifndef CLAMP
	#define CLAMP(val,min,max) (MAX(MIN(val,max),min))
#endif

#ifndef ABS
	#define ABS(x) (((x) < 0) ? -(x) : (x))
#endif


#endif /* MACROS_HPP_1324964318_13 */
