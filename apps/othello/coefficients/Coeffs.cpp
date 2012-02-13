#include "Coeffs.h"

CCoeffs* cfWeights;

extern int nPositions;
extern u2 ids[maxPositions][nPatterns];
extern float results[maxPositions];

/////////////////////////////////////////////////////////////
// Functions for CCoeffs class and CCoeffInfo class
/////////////////////////////////////////////////////////////

CCoeffs::CCoeffs() {
	int map;
	int nPatterns;

	for (map=0; map<nMaps; map++) {
		nPatterns=NIDs(map);
		values[map]=new double[nPatterns];
		_ASSERT(values[map]);
	}
}

CCoeffs::~CCoeffs() {
	int map;
	
	for (map=0; map<nMaps; map++) {
		delete[] values[map];
	}
}

CCoeffs& CCoeffs::operator=(const CCoeffs& old) {
	int map, id;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++)
			values[map][id]=old.values[map][id];

	return *this;
}

void CCoeffs::Mult(const CCoeffs& a, const CCoeffs& b) {
	int map, id;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++)
			values[map][id]=a[map][id]*b[map][id];
}

double CCoeffs::Norm() const {
	double result;
	int map, id;

	result=0;
	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++) {
			result+=values[map][id]*values[map][id];
		}

	return result;
}

double CCoeffs::Dot(const CCoeffs& b) const {
	double result;
	int map, id;

	result=0;
	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++) {
			result+=values[map][id]*b[map][id];
		}

	return result;
}

void CCoeffs::UpdateFrom(const CCoeffs& old, const CCoeffs& gradient, double beta) {
	int map, id;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++)
			values[map][id]=old.values[map][id]+gradient[map][id]*-beta;
}

void CCoeffs::UpdateFrom(const CCoeffs& old, const CCoeffs& gradient, const CCoeffs& weightings, double beta) {
	int map, id;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++)
			values[map][id]=old.values[map][id]+gradient[map][id]*weightings[map][id]*-beta;
}

void CCoeffs::Update(const CCoeffs& gradient, double beta) {
	int map, id;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++)
			values[map][id]+=gradient[map][id]*beta;
}

void CCoeffs::Update(const CCoeffs& gradient, const CCoeffs& weightings, double beta) {
	int map, id;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++)
			values[map][id]+=gradient[map][id]*weightings[map][id]*beta;
}


void CCoeffs::Clear() {
	int map, id;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++)
			values[map][id]=0;
}

void CCoeffs::Reciprocate() {
	int map, id;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++)
			if (values[map][id])
				values[map][id]=1/values[map][id];
}

void CCoeffs::Print(FILE* outfile) const {
	int map, id;
	float flCoeff, weight;

	for (map=0; map<nMaps; map++)
		for (id=0; id<NIDs(map); id++) {
			
			// New style coefficients, stored as floats
			flCoeff=values[map][id]*(dUndamping/kdNonlinearity);
			if (!fwrite(&flCoeff, sizeof(float), 1, outfile)) {
				fprintf(stderr, "error writing to coefficient file\n");
				printf("error writing to coefficient file\n");
			}

			// write coefficient in human-readable format
			weight=(*cfWeights)[map][id];
			if (printHumanReadable && (!printOnlyOccurring || flCoeff)) {
				printf("(%2d,%4d, %s):% .3lf",map,id,maps[map].IDToString(id),flCoeff);
				if (weight)
					printf("\tWeight: %lg",weight);
				printf("\n");
			}
		}
}

u4 CCoeffs::MaxSize() {
	u4 map;
	u4 nPatterns;

	for (map=nPatterns=0; map<nMaps; map++) {
		nPatterns+=NIDs(map);
	}
	return nPatterns*sizeof(double);
}

double CCoeffInfo::CalcSSE() {
	double g, g1, error, c_dot_i;
	int map, id, t, pattern;

	// initialize with damping values
	sse=0;
	for (map=0; map<nMaps; map++) {
		for (id=0; id<NIDs(map); id++) {
			g=tanh(coeffs[map][id]);
			g1=(1-g)*(1+g);
			error=g;
			sse+=damping*error*error;
			sse1[map][id]=damping*error*g1;
			sse2[map][id]=damping*g1*g1;
		}
	}

	for (t=0; t<nPositions; t++) {

		// compute predicted value g, its derivatives g1 and g2, and error
		c_dot_i=0;
		for (pattern=0; pattern<nPatterns; pattern++) {
			c_dot_i+=coeffs[patternToMap[pattern]][ids[t][pattern]];
		}
		g=tanh(c_dot_i);
		g1=1-g*g;
		error=g-results[t];
		sse+=error*error;

		// calculate first and second derivatives of sse
		// actually the first derivative is 2*sse1 and the second is 2*sse2.
		for (pattern=0; pattern<nPatterns; pattern++) {
			sse1[patternToMap[pattern]][ids[t][pattern]]+=error*g1;
			sse2[patternToMap[pattern]][ids[t][pattern]]+=g1*g1;
		}
	}
	sse2.Reciprocate();
	return sse;
}

void CCoeffInfo::UpdateFrom(const CCoeffInfo& old, double beta) {
	// coeffs.UpdateFrom(old.coeffs, old.sse1, beta);	// steepest descent
	coeffs.UpdateFrom(old.coeffs, old.sse1, old.sse2, beta);	// weighted steepest descent
}

CCoeffInfo& CCoeffInfo::operator=(const CCoeffInfo& old) {
	coeffs=old.coeffs;
	sse1=old.sse1;
	sse2=old.sse2;
	sse=old.sse;

	return *this;
}

void CCoeffInfo::Clear() {
	coeffs.Clear();
}

void CCoeffInfo::Print(FILE* outfilep) {
	coeffs.Print(outfilep);
}

