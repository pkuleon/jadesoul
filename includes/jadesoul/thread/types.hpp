#ifndef TYPES_HPP_1326250681_71
#define TYPES_HPP_1326250681_71
/**
 * File: types.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-11 10:58:01.714000
 * Written In: Peking University, beijing, China
 */

//we don't want to break old code that uses ofSimpleApp
//so we forward declare ofBaseApp and make ofSimpleApp mean the same thing
class ofBaseApp;
typedef ofBaseApp ofSimpleApp;

enum ofLogLevel{
	OF_LOG_VERBOSE,
	OF_LOG_NOTICE,
	OF_LOG_WARNING,
	OF_LOG_ERROR,
	OF_LOG_FATAL_ERROR,
	OF_LOG_SILENT	//this one is special and should always be last - set ofSetLogLevel to OF_SILENT to not recieve any messages
};

#define OF_DEFAULT_LOG_LEVEL  OF_LOG_WARNING;

// serial error codes
#define OF_SERIAL_NO_DATA 	-2
#define OF_SERIAL_ERROR		-1

// core: ---------------------------
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>  //for ostringsream
#include <iomanip>  //for setprecision
using namespace std;

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

#define 	OF_FILLED				0x01
#define 	OF_OUTLINE				0x02
#define 	OF_WINDOW 				0
#define 	OF_FULLSCREEN 			1
#define 	OF_GAME_MODE			2

#define 	OF_RECTMODE_CORNER				0
#define 	OF_RECTMODE_CENTER				1

#define 	OF_IMAGE_GRAYSCALE		0x00
#define 	OF_IMAGE_COLOR			0x01
#define 	OF_IMAGE_COLOR_ALPHA	0x02
#define 	OF_IMAGE_UNDEFINED		0x03

#define		OF_MAX_STYLE_HISTORY	32
#define		OF_MAX_CIRCLE_PTS 1024

// these are straight out of glu, but renamed and included here
// for convenience
//
// we don't mean to wrap the whole glu library (or any other library for that matter)
// but these defines are useful to give people flexability over the polygonizer
//
// some info:
// http://glprogramming.com/red/images/Image128.gif
//
// also: http://glprogramming.com/red/chapter11.html
// (CSG ideas)

#define 	OF_POLY_WINDING_ODD 	          100130
#define 	OF_POLY_WINDING_NONZERO           100131
#define 	OF_POLY_WINDING_POSITIVE          100132
#define 	OF_POLY_WINDING_NEGATIVE          100133
#define		OF_POLY_WINDING_ABS_GEQ_TWO       100134

#define 	OF_CLOSE						  (true)


//--------------------------------------------
//
// 	Keyboard definitions
//
// 	ok -- why this?
// 	glut key commands have some annoying features,
// 	in that some normal keys have the same value as special keys,
// 	but we want ONE key routine, so we need to redefine several,
// 	so that we get some normalacy across keys routines
//
// 	(everything that comes through "glutSpecialKeyFunc" will get 256 added to it,
// 	to avoid conflicts, before, values like "left, right up down" (ie, 104, 105, 106) were conflicting with
// 	letters.. now they will be 256 + 104, 256 + 105....)


	#define OF_KEY_MODIFIER 	0x0100
	#define OF_KEY_RETURN		13
	#define OF_KEY_ESC			27

	// http://www.openframeworks.cc/forum/viewtopic.php?t=494
	// some issues with keys across platforms:

	#ifdef TARGET_OSX
		#define OF_KEY_BACKSPACE	127
		#define OF_KEY_DEL			8
	#else
		#define OF_KEY_BACKSPACE	8
		#define OF_KEY_DEL			127
	#endif

	// zach - there are more of these keys, we can add them here...
	// these are keys that are not coming through "special keys"
	// via glut, but just other keys on your keyboard like

	#define OF_KEY_F1			(1 | OF_KEY_MODIFIER)
	#define OF_KEY_F2			(2 | OF_KEY_MODIFIER)
	#define OF_KEY_F3			(3 | OF_KEY_MODIFIER)
	#define OF_KEY_F4			(4 | OF_KEY_MODIFIER)
	#define OF_KEY_F5			(5 | OF_KEY_MODIFIER)
	#define OF_KEY_F6			(6 | OF_KEY_MODIFIER)
	#define OF_KEY_F7			(7 | OF_KEY_MODIFIER)
	#define OF_KEY_F8			(8 | OF_KEY_MODIFIER)
	#define OF_KEY_F9			(9 | OF_KEY_MODIFIER)
	#define OF_KEY_F10			(10 | OF_KEY_MODIFIER)
	#define OF_KEY_F11			(11 | OF_KEY_MODIFIER)
	#define OF_KEY_F12			(12 | OF_KEY_MODIFIER)
	#define OF_KEY_LEFT			(100 | OF_KEY_MODIFIER)
	#define OF_KEY_UP			(101 | OF_KEY_MODIFIER)
	#define OF_KEY_RIGHT		(102 | OF_KEY_MODIFIER)
	#define OF_KEY_DOWN			(103 | OF_KEY_MODIFIER)
	#define OF_KEY_PAGE_UP		(104 | OF_KEY_MODIFIER)
	#define OF_KEY_PAGE_DOWN	(105 | OF_KEY_MODIFIER)
	#define OF_KEY_HOME			(106 | OF_KEY_MODIFIER)
	#define OF_KEY_END			(107 | OF_KEY_MODIFIER)
	#define OF_KEY_INSERT		(108 | OF_KEY_MODIFIER)

// not sure what to do in the case of non-glut apps....


//--------------------------------------------
//console colors for our logger - shame this doesn't work with the xcode console

#ifdef OS_WIN32

	#define OF_CONSOLE_COLOR_RESTORE (0 | (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE) )
	#define OF_CONSOLE_COLOR_BLACK (0)
	#define OF_CONSOLE_COLOR_RED (FOREGROUND_RED)
	#define OF_CONSOLE_COLOR_GREEN (FOREGROUND_GREEN)
	#define OF_CONSOLE_COLOR_YELLOW (FOREGROUND_RED|FOREGROUND_GREEN)
	#define OF_CONSOLE_COLOR_BLUE (FOREGROUND_BLUE)
	#define OF_CONSOLE_COLOR_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE )
	#define OF_CONSOLE_COLOR_CYAN (FOREGROUND_GREEN | FOREGROUND_BLUE)
	#define OF_CONSOLE_COLOR_WHITE (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)

#else

	#define OF_CONSOLE_COLOR_RESTORE (0)
	#define OF_CONSOLE_COLOR_BLACK (30)
	#define OF_CONSOLE_COLOR_RED (31)
	#define OF_CONSOLE_COLOR_GREEN (32)
	#define OF_CONSOLE_COLOR_YELLOW (33)
	#define OF_CONSOLE_COLOR_BLUE (34)
	#define OF_CONSOLE_COLOR_PURPLE (35)
	#define OF_CONSOLE_COLOR_CYAN (36)
	#define OF_CONSOLE_COLOR_WHITE (37)

#endif


#endif /* TYPES_HPP_1326250681_71 */
