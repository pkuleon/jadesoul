#ifndef COMPILER_HPP_BY_JADESOUL
#define COMPILER_HPP_BY_JADESOUL
/**
 * File: compiler.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-26 18:19:11.150000
 * Written In: MSRA, beijing, China
 */

#include "os.hpp"

//detect compiler types
#if defined(__GNUC__)
	#define CPL_GNUC
	#define CPL_VER __GNUC__
#endif

#if defined(_MSC_VER)
	#define CPL_MSVC
	#define CPL_VER _MSC_VER
#endif

#if (defined OS_WIN32) && (defined CPL_MSVC)
	#define ENV_WIN32_MSVC
#endif
// #if defined(__STDC__) || defined(__cplusplus) || defined(_MSC_EXTENSIONS)
// #else
// #endif

// #if defined(_MSC_VER) && (_MSC_VER >= 1020)
// #pragma once
// #endif

#endif /* COMPILER_HPP_BY_JADESOUL */
