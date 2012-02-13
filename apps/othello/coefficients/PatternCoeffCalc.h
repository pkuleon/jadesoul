#pragma once

#include "window.h"
#include <math.h>
#include "Evaluator.h"

extern char* pccBook;

void CalcPatternCoefficients(char* gamesFile, char* coefficientOutputFile, int maxEvaluations=300,
							 int increment=1, bool weighted=true, bool conjugateGradient=true, bool polakRibere=false);

////////////////////////////////
// options
////////////////////////////////

const int maxEvals =550;
const int maxPositions=3700000;

// calculation information
// higher damping means values of rare configurations will be closer to 0. 2 seems best for time-dependent MPC searches,
//	4-8 seems best when comparing at 3-ply
const double damping=2;

// a higher nonlinearity means that more lopsided games are used to determine coefficents.
const double kdNonlinearity=0.10;

// undamping is used to move coefficients away from 0, to counter the effects of damping and nonlinearity.
//	All coefficient values are multiplied by this constant.
const double dUndamping=1.2;

// coefficients will be calculated using only positions in the following windows.
//	the number of empties must be in [begin, end) to be used.
/*
const CWindow windows[]={
	{50,60},
	{40,50},
	{30,40},
	{20,30},
	{10,20},
	{ 6,10}
};
*/
const CWindow windows[]={
	{50,60},
	{46,56},
	{40,50},
	{34,44},
	{28,38},
	{22,32},
	{16,26},
	{10,20},
	{ 4,12},
	{ 0,10}
};
const int nWindows=sizeof(windows)/sizeof(CWindow);

// calculation method
const bool fPreconditioned=true;
const bool fConjugateGradient=true;
const bool fPolakRibere=false;

// print a human-readable log file if this is true
const bool printHumanReadable=true;
// print coefficients for only those patterns that occurred in a game, else for all patterns (others should be 0)
const bool printOnlyOccurring=true;	

#define PATTERN 'L'

///////////////////////////////////
// patterns
///////////////////////////////////

#if PATTERN=='J'
#define GETPATTERNS(ids) GetIDsJ(ids)
#define maps mapsJ
#define patternToMap patternToMapJ
#define nPatterns nPatternsJ
#define nMaps nMapsJ
#endif

inline int NIDs(int map) {
	return maps[map].NIDs();
}

