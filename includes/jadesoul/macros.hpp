#ifndef MACROS_HPP_1324964318_13
#define MACROS_HPP_1324964318_13
/**
 * File: macros.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-26 18:27:36.135000
 * Written In: MSRA, beijing, China
 */

#define debug

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


//for debug option
#ifdef debug
	#define show(msg, var) cout<< msg <<" = ";dump(var)
	#define printv(var) show(#var , var)
	// #define printl(msg, var) cout<<msg<<": "<<var<<endl;
	#define dbglog(...) log(__VA_ARGS__)
	// #define print2(var1, var2) show( #var1 , var1); show( #var2 , var2)
	#define magic(...) {log("now running code: %s", #__VA_ARGS__); __VA_ARGS__;log("done!");}

#else
	#undef show
	#define show(a, b)
	
	
	#undef printv
	#define printv(a)

	// #undef printl
	// #define printl(msg, var)

	#undef dbglog
	#define dbglog(...)
	
	
	#undef magic
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

#endif /* MACROS_HPP_1324964318_13 */
