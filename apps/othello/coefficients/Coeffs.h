/////////////////////////////////////////////////////////////
// Declaration of CCoeffs class and CCoeffInfo class
/////////////////////////////////////////////////////////////

#pragma once

#include "PatternCoeffCalc.h"

class CCoeffs {
public:
	double *values[nMaps];

	CCoeffs();
	~CCoeffs();

	CCoeffs& operator=(const CCoeffs& old);
	void Mult(const CCoeffs&a, const CCoeffs& b);
	double Norm() const;								// calc sum over i (value[i])^2
	double Dot(const CCoeffs& b) const;
	void UpdateFrom(const CCoeffs& old, const CCoeffs& heading, double beta);
	void UpdateFrom(const CCoeffs& old, const CCoeffs& heading, const CCoeffs& weightings, double beta);
	void Update(const CCoeffs& heading, double beta);
	void Update(const CCoeffs& heading, const CCoeffs& weightings, double beta);
	void Reciprocate();
	void Clear();
	void Print(FILE* outfilep) const;
	static u4 MaxSize();

	double* operator[](int map) const { return values[map];};
};

class CCoeffInfo {
public:
	CCoeffs coeffs, sse1, sse2;
	double sse;

	double CalcSSE();
	void UpdateFrom(const CCoeffInfo& old, double beta);
	CCoeffInfo& operator=(const CCoeffInfo& old);
	void Clear();
	void Print(FILE* outfilep);
};

