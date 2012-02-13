// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#include "Utils.h"
#include "NodeStats.h"

#ifndef _H_TIMING
#define _H_TIMING

const u4 kNeedValue=1;
const u4 kNeedMove=2;
const u4 kNeedMPCStats=4;
const u4 kNeedDeviations=8;
const u4 kNeedRandSearch=16;

///////////////////////////////////////////////
// CalcParams class
///////////////////////////////////////////////

class CCalcParams {
public:
	CCalcParams();

	// new functioms
	virtual void SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const;
	virtual bool RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const;
	virtual int LogCacheSize(int aPrune) const;
	virtual void Out(ostream& os) const = 0;
	virtual void Name(ostream& os) const;
	virtual int Strength() const=0;
	virtual CHeightInfo MinHeight(int nEmpty) const;

	bool fInBook;

	static CCalcParams* NewFromString(const string& sCalcParams);
};

inline ostream& operator<<(ostream& os, const CCalcParams& pcp) { pcp.Out(os); return os; }
inline CCalcParams::CCalcParams() { fInBook=false; }

class CCalcParamsFixedHeight : public CCalcParams {
public:
	CCalcParamsFixedHeight(CHeightInfo hi);

	virtual void SetHeight(CHeightInfo hi);
	virtual int LogCacheSize(int aPrune) const;
	virtual void Out(ostream& os) const;
	virtual CHeightInfo MinHeight(int nEmpty) const;
	virtual int Strength() const;

protected:
	CHeightInfo hiMax;
};

class CCalcParamsFixedNEmpty : public CCalcParams {
public:
	CCalcParamsFixedNEmpty(CHeightInfo hi);

	virtual void Out(ostream& os) const;
	virtual CHeightInfo MinHeight(int nEmpty) const;
	virtual int Strength() const;

protected:
	CHeightInfo hiMax;
};

class CCalcParamsStandard: public CCalcParams {
public:
	CCalcParamsStandard(int hMidgame);

	int LogCacheSize(int aPrune) const;
	virtual void Out(ostream& os) const;
	virtual void Name(ostream& os) const;
	virtual CHeightInfo MinHeight(int nEmpty) const;
	virtual int Strength() const;

protected:
	void CalcHeights();
	int hMidgame;
	int hWLD[6];
};

class CCalcParamsTurbo: public CCalcParamsStandard {
public:
	CCalcParamsTurbo(int ahMidgame);
	virtual void Out(ostream& os) const;
	virtual void Name(ostream& os) const;
	int Strength() const;
};

class CCalcParamsAverageTime: public CCalcParams {
public:
	CCalcParamsAverageTime(double tAverage);
	CCalcParamsAverageTime(double tAverage, int nEmptyMinSolve);

	virtual void SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const;
	virtual bool RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const;
	virtual int LogCacheSize(int aPrune) const;
	virtual void Out(ostream& os) const;
	virtual int Strength() const;

protected:
	virtual double TTypical(int nEmpty) const;
	double tAverage;
	int nEmptyMinSolve;
};

class CCalcParamsMatchTime: public CCalcParams {
public:
	virtual void SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const;
	virtual bool RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const;
	virtual void Out(ostream& os) const;
	virtual void Name(ostream& os) const;
	virtual int Strength() const;

protected:
	double TTypical(int nEmpty, double tRemaining) const;
};

#endif // (defined _H_TIMING)