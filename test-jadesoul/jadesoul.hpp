#ifndef JADESOUL_HPP_BY_JADESOUL
#define JADESOUL_HPP_BY_JADESOUL
/**
 * File: jadesoul.hpp
 * Description: 
 * 
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-04 14:28:37.770000
 * Written In: MSRA, beijing, China
 */


//#define ENABLE_BOOST_UNIT_TEST
// #define ENABLE_GOOGLE_TEST
#define ENABLE_UNIT_TEST_DYNAMIC_LINK
//#define ENABLE_OPENGL_TEST
// #define debug


//detect OS types
#if defined( __WIN32__ ) || defined( _WIN32 )
	#define OS_WIN32
#elif defined( __APPLE_CC__)
	#include <TargetConditionals.h>
	#if (TARGET_OF_IPHONE_SIMULATOR) || (TARGET_OS_IPHONE) || (TARGET_IPHONE)
		#define OS_IPHONE
		#define OS_OPENGLES
	#else
		#define OS_OSX
	#endif
#else
	#define OS_LINUX
#endif

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

//char
typedef   signed char        int1;
typedef   signed char        sint1;
typedef unsigned char        uint1;
typedef unsigned char        uchar;

//short
typedef   signed short       int2;
typedef   signed short       sint2;
typedef unsigned short       uint2;
typedef unsigned short       ushort;

//int
typedef	signed	int	int4;
typedef	signed	int	sint4;
typedef	unsigned	int	uint4;
typedef	unsigned	int	uint;

//float double
typedef	float		real4;
typedef	double	real8;
// typedef          long double realC;//not often used
typedef	signed	long	long	int8;
typedef	signed	long	long	sint8;
typedef	signed	long	long	slong;
typedef	unsigned	long	long	uint8;

//do not define in linux
#ifdef OS_WIN32
typedef	unsigned	long	long	ulong;
#endif

//ptr
typedef void* vptr;
typedef char* cptr;

typedef const void* cvptr;
typedef const char* ccptr;

typedef const void* const cvptrc;
typedef const char* const ccptrc;


const	sint1		min_sint1		=	0x80;
const	sint1		max_sint1		=	0x7F;
const	uint1	min_uint1		=	0x00;
const	uint1	max_uint1	=	0xFF;
const	sint2		min_sint2		=	0x8000;
const	sint2		max_sint2		=	0x7FFF;
const	uint2	min_uint2		=	0x0000;
const	uint2	max_uint2	=	0xFFFF;
const	sint4		min_sint4		=	0x80000000;
const	sint4		max_sint4		=	0x7FFFFFFF;
const	uint4	min_uint4		=	0x00000000;
const	uint4	max_uint4	=	0xFFFFFFFF;
const	sint8		min_sint8		=	0x8000000000000000LL;
const	sint8		max_sint8		=	0x7FFFFFFFFFFFFFFFLL;
const	uint8	min_uint8		=	0x0000000000000000LL;
const	uint8	max_uint8	=	0xFFFFFFFFFFFFFFFFLL;





#endif /* JADESOUL_HPP_BY_JADESOUL */
