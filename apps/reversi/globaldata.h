#pragma once

#define EMPTY 0
#define BLACK 1
#define WHITE 2
#define BORDER_LEN 8

//#define GA_MODE true


#ifdef GA_MODE
	//#define PEEK true
	//#define GUI true
	#define PEEK_GENE true
	//#define SLEEP_WHILE_PLAY true
	//#define DEBUG_DEBUG true
#else
	#define PEEK true
	#define GUI true
	#define PEEK_GENE true
	#define SLEEP_WHILE_PLAY true
	//#define DEBUG_DEBUG true
#endif


#ifdef IN_ENGINE
	#undef PEEK
	#undef GUI
	#undef PEEK_GENE
	#undef SLEEP_WHILE_PLAY 
	#undef DEBUG_DEBUG
#endif


#define GS_PLAYING 0
#define GS_ONE_PASSED 1
#define GS_OVER 2

using namespace std;

typedef unsigned int uint;
typedef unsigned char uchar;
