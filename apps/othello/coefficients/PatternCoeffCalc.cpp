// code to calculate coefficients based on pattern-matching


#include <stdio.h>
#include "Debug.h"
#include <time.h>
#include <io.h>
#include <fstream>
using namespace std;

#include "QPosition.h"
#include "Evaluator.h"
#include "Games.h"
#include "Pos2.h"
#include "Pos2Inlines.h"
#include "FastFlipPatterns.h"
#include "FastFlip.h"
#include "options.h"
#include "Coeffs.h"
#include "Book.h"

const char* fnBase="c:/devl/othello/coefficients/L1";
int iWindowStart, iWindowEnd;

// nonlinear target function for regression
double target(double result) {
	return tanh(kdNonlinearity*result);
}

int ParityDrop(int nEmpty, int fEvenOdd) {
	return fEvenOdd & 1<<(nEmpty & 1);
}

// info about which positions occurred in games
int nPositions;
u2 ids[maxPositions][nPatterns];
float results[maxPositions];

////////////////////////////////////////////////////////////////////
// Reading from file
////////////////////////////////////////////////////////////////////

extern CCoeffs *cfWeights;

// add the position to the regression. dTarget is from black's point of view
void AddPosition(bool fBlackMove, double dTarget, const CWindow& window, int fEvenOdd) {
	int pattern,map,id;

	if (!fBlackMove)
		dTarget=-dTarget;

	if (window.Valid(nEmpty_) && !ParityDrop(nEmpty_,fEvenOdd)) {
		// calculate weighted indicators
		GETPATTERNS(ids[nPositions]);
		results[nPositions]=dTarget;

		// add to occurrences table
		for(pattern=0;pattern<nPatterns; pattern++) {
			map=patternToMap[pattern];
			id=ids[nPositions][pattern];
			(*cfWeights)[map][id]++;
		}

		/* Debugging
		Print();
		PrintConfigs();
		extern CBitBoard bb;
		CBitBoard bb2(bb);
		bb2.FlipDiagonal();
		Initialize(bb2,true);
		Print();
		PrintConfigs();
		bb.FlipDiagonal();
		Initialize(bb2,true);

		cout << "\n" << dTarget << "\n\n";
		*/

		nPositions++;
	}
}

#pragma optimize("g", off)

void AddGame(COsGame& game, int iGame, const CWindow& window, int fEvenOdd) {
	double dTarget, result;
	char sBoardStart[NN+1];
	int iMover;

	// check to see if game is valid, and check result.
	//  result field be wrong (some versions of ntest) or
	//	be net of komi value, so it doesn't accurately reflect the position value.
	// some games may not be complete.
	game.CalcCurrentPos();
	if (!game.pos.board.GameOver()) {
		cout << "Game " << iGame << " not over!\n";
		return;
	}
	result=game.pos.board.Result();
	if (fabs(result-(game.result.dResult+game.KomiValue()))>0.01 && game.result.dResult!=game.pos.board.NetBlackSquares())
		cout << "Game " << iGame << " has bad result (" << game.result.dResult << " should be " << result << ")\n";
	dTarget=target(result);

	// set up start board
	game.posStart.board.TextGet(sBoardStart, iMover);
	Initialize(sBoardStart, !iMover);
	vector<CSGMoveListItem>::iterator i;

	// repeatedly add positions
	for (i=game.ml.begin(); i!=game.ml.end() && nPositions<maxPositions; i++) {
		// pass if needed
		if (toupper((*i).mv[0])=='P' && toupper((*i).mv[1]=='A')) {
			PassBB();
			i++;
		}
		AddPosition(fBlackMove_, dTarget, window, fEvenOdd);
		CSGSquare sq((*i).mv);
		if (!PlayMove(char(' '+sq.x+sq.y*8),0))
			break;	// game over
	}
}

void ReadLogGames(const char* filename, const CWindow& window, int fEvenOdd) {
	COsGame game;
	int nGames;

	cerr << "ReadLogGames " << filename << ":";

	// open file
	ifstream is(filename);
	if (!is.good()) {
		fprintf(stderr, "Can't open '%s'!\n", filename);
		QSSERT(0);
	}

	int t=time(0);
	cerr << "   k";
	for (nGames=0; game.InLogbook(is) && nPositions<maxPositions;  ) {
		AddGame(game, nGames, window, fEvenOdd);
		nGames++;
		if (nGames%1000==0)
			cerr << "\b\b\b" << setw(2) << nGames/1000 << "k";
	}
	cerr << "\nElapsed Time: " << time(0)-t << "\n";

	cerr << " nPositions = " << nPositions << "\n";
	QSSERT(_CrtCheckMemory());
}

void ReadGames(const char* filename, const CWindow& window, int fEvenOdd) {
	COsGame game;
	int nGames;

	cerr << "ReadGames " << filename << ":";

	// open file
	ifstream is(filename);
	if (!is.good()) {
		fprintf(stderr, "Can't open '%s'!\n", filename);
		QSSERT(0);
	}

	cerr << "   k";
	for (nGames=0; is>>game && nPositions<maxPositions; ) {
		AddGame(game, nGames, window, fEvenOdd);
		nGames++;
		if (nGames%1000==0)
			cerr << "\b\b\b" << setw(2) << nGames/1000 << "k";
	}

	cerr << " nPositions = " << nPositions << "\n";
	QSSERT(_CrtCheckMemory());
}

void ReadOldNtestGames(const char* filename, int iVersion, const CWindow& window, int fEvenOdd) {
	COsGame game;
	int nGames;

	cerr << "ReadGames " << filename << ":";

	// open file
	ifstream is(filename);
	if (!is.good()) {
		fprintf(stderr, "Can't open '%s'!\n", filename);
		QSSERT(0);
	}

	cerr << "   k";
	for (nGames=0; game.InOldNtest(is, iVersion) && nPositions<maxPositions; ) {
		AddGame(game, nGames, window, fEvenOdd);
		nGames++;
		if (nGames%1000==0)
			cerr << "\b\b\b" << setw(2) << nGames/1000 << "k";
	}

	cerr << " nPositions = " << nPositions << "\n";
	QSSERT(_CrtCheckMemory());
}

/*
void ReadGames(const char* filename, int nVersion, const CWindow& window, int fEvenOdd) {
	FILE* fp;
	double  dTarget;
	CSavedGame sg;
	int iPassCode, iMove;

	iPassCode=3;

	// open file
	fp=fopen(filename, "r");
	if (!fp) {
		fprintf(stderr, "Can't open '%s'!\n", filename);
		QSSERT(0);
	}

	while (sg.FScan(fp, nVersion) && nPositions<maxPositions) {
		// only look at finished games
		if (!sg.fComplete)
			continue;

		// set pos to beginning of window
		Initialize();

		// calculate result. Result is +.75 for win, -.75 for loss
		//	shouldn't use +1 for win and -1 for loss as an optimal weight vector
		//	may not exist - see 'GLEM', Michael Buro
		dTarget=target(sg.nResult);
		
		for (iMove=0;nPositions<maxPositions;iMove++) {
			AddPosition(fBlackMove_, dTarget, window, fEvenOdd);
			if (!PlayMove(sg.ml[iMove],iPassCode))
				break;	// game over
		}
	}
	fclose(fp);
	fprintf(stderr, "ReadGames %s: nPositions = %d\n", filename, nPositions);
	QSSERT(_CrtCheckMemory());
}
*/
void ReadBook(const char* filename, const CWindow& window, int fEvenOdd) {
	CBook book(filename);
	CBitBoard bb;
	double dTarget;

	int nEmpty;
	map<CBitBoard,CBookData>::const_iterator i;

	for (nEmpty=0; nEmpty<60; nEmpty++) {
		if (window.Valid(nEmpty) && !ParityDrop(nEmpty, fEvenOdd)) {
			for (i=book.entries[nEmpty].begin(); i!=book.entries[nEmpty].end() && nPositions<maxPositions; i++) {
				dTarget=target((double)(*i).second.Values().vHeuristic/kStoneValue);
				Initialize((*i).first,true);
				if (true)
					PassIfBB();
				AddPosition(fBlackMove_, dTarget, window, fEvenOdd);
			}
		}
	}
	cerr << " nPositions = " << nPositions << "\n";
}

void ReadPVs(const char* filename, const CWindow& window, int fEvenOdd) {
	FILE* fp;
	double  dTarget;
	int pass, pass2;
	CMoveValue mv;
	CBitBoard bb;
	CMoves moves;

	// open file
	fp=fopen(filename, "rb");
	if (!fp) {
		fprintf(stderr, "No file pointer!\n");
		QSSERT(0);
	}

	while (nPositions<maxPositions) {
		// read from file
		if (!bb.Read(fp)
			|| !fread(&mv.value, sizeof(mv.value), 1, fp)
			|| !fread(&pass, sizeof(pass), 1, fp)
			|| !fread(&mv.move, sizeof(mv.move), 1, fp)) {
			break;
		}

		Initialize(bb,true);
		pass2=PassIfBB();
		QSSERT(pass==pass2);
		dTarget=target((double)mv.value/kStoneValue);

		// add position
		AddPosition(fBlackMove_, dTarget, window, fEvenOdd);

		// add principal variation
		if (nPositions<maxPositions && pass!=2) {
			MakeMoveBB(mv.move.Square());
			PassIfBB();
			AddPosition(fBlackMove_, dTarget, window, fEvenOdd);
		}
	}
	fclose(fp);
	fprintf(stderr, "ReadPVs %s: nPositions = %d\n", filename, nPositions);
	QSSERT(_CrtCheckMemory());
}

// update indicators, weights, results, and nPositions for a given move number and games file
void GetPositions(const CWindow& window, int fEvenOdd) {
	nPositions=0;
	cfWeights->Clear();

	// read in positions
	fprintf(stderr, "---- GetPositions(): nEmpty in [%d,%d) ----\n", window.begin, window.end);

	ReadGames("results/rands.ggf", window, fEvenOdd);
	ReadLogGames("results/logbook.gam", window, fEvenOdd);
	ReadBook("coefficients/J8_s12.book", window, fEvenOdd);
	ReadBook("coefficients/J8_s21.book", window, fEvenOdd);
	ReadBook("coefficients/booklet.book", window, fEvenOdd);
	ReadPVs("captured.pv", window, fEvenOdd);
	ReadBook("coefficients/J8_s10.book", window, fEvenOdd);

	// check that we had enough space
	if (nPositions>=maxPositions)
		fprintf(stderr, "maxPositions too small in PatternCoeffCalc.cpp!\n");

	fprintf(stderr, "Done\n");
}

#ifndef _DEBUG
#pragma optimize("g",on)
#endif

const double tolerance=1e-6;

// minimize along the line with direction 'heading'; beta is a guess for how far to move.
//	outputs as beta how far we actually moved.
inline void linmin(CCoeffInfo coeffInfo[4], CCoeffs& gradient, CCoeffs& heading, double& beta, int& iterations,
				  int& printIterations, int maxEvaluations, double ss, bool conjugateGradient) {
	int linminIterations, midUnchanged;
	double betas[4], stepsize, r1, r2, numer, denom;
	int end1, end2, mid, spare, temp;

	// Bracket the minimum. First figure out which direction is downhill
	betas[0]=0;
	betas[1]=beta;
	coeffInfo[1].coeffs.UpdateFrom(coeffInfo[0].coeffs, heading, beta);
	coeffInfo[1].CalcSSE();
	iterations++;
	if (coeffInfo[1].sse > coeffInfo[0].sse) {
		mid=0;
		end1=1;
		stepsize=-beta;
	}
	else {
		mid=1;
		end1=0;
		stepsize=beta;
	}
	end2=2;
	spare=3;

	// Go downhill until we start going uphill
	while (1) {
		betas[end2]=betas[mid]+stepsize;
		coeffInfo[end2].coeffs.UpdateFrom(coeffInfo[mid].coeffs, heading, stepsize);
		coeffInfo[end2].CalcSSE();
		iterations++;
		if (coeffInfo[end2].sse > coeffInfo[mid].sse)
			break;
		temp=end1; end1=mid; mid=end2; end2=temp;
		stepsize+=stepsize;
	}
	
	// alternate golden section search with parabolic interpolation
	midUnchanged=0;
	for (linminIterations=0; (linminIterations<20) && (midUnchanged<3); linminIterations++) {

		// print convergence information
		if ((iterations>=printIterations)||!iterations) {
			printf("%3d iterations: %#7.4lf%%, %lf err\n",iterations,coeffInfo[mid].sse*100/ss, coeffInfo[mid].sse);
			printIterations<<=1;
		}

		// interpolate
		if (linminIterations & 1) {
			// parabolic interpolation step
			r1=(betas[end1]-betas[mid])*(coeffInfo[end2].sse-coeffInfo[mid].sse);
			r2=(betas[end2]-betas[mid])*(coeffInfo[end1].sse-coeffInfo[mid].sse);
			denom=r1-r2;
			if (!denom)
				continue;	// if denom==0 function is linear to within roundoff error.
			numer=r1*(betas[end1]-betas[mid]) - r2*(betas[end2]-betas[mid]);
			betas[spare]=betas[mid]+0.5*numer/denom;
			if ((betas[spare]>betas[end1])^(betas[spare]<betas[end2])) 
				continue;	// always true except maybe for roundoff error
			// arrange end1 and end2 so spare is between mid and end2
			if ((betas[spare]<betas[mid])^(betas[mid]<betas[end1])) {
				temp=end2; end2=end1; end1=temp;
			}
		}
		else {
			// golden section step
			// arrange end1 and end2 so spare is between mid and end2
			if (fabs(betas[end1]-betas[spare])>fabs(betas[end2]-betas[spare])) {
				temp=end2; end2=end1; end1=temp;
			}
			betas[spare]=betas[mid]+0.3819660*(betas[end2]-betas[mid]);	// golden ratio
		}

		// calc new data point
		coeffInfo[spare].coeffs.UpdateFrom(coeffInfo[mid].coeffs, heading, betas[spare]-betas[mid]);
		coeffInfo[spare].CalcSSE();
		iterations++;

		// update termination condition
		if (coeffInfo[spare].sse > coeffInfo[mid].sse-tolerance)
			midUnchanged++;
		else
			midUnchanged=0;

		// test to see which data point the new one replaces
		if (coeffInfo[spare].sse > coeffInfo[mid].sse) {
			temp=end2; end2=spare; spare=temp;
		}
		else {
			temp=end1; end1=mid; mid=spare; spare=temp;
		}
	}

	beta=betas[mid];
	if (!beta)	// sometimes happens, especially when beta started out too big
		beta=betas[spare]?-fabs(betas[spare]):-1e-6;
	if (mid)
		coeffInfo[0]=coeffInfo[mid];
	
}

FILE* OutputFilePointer(const char* coefficientOutputFile) {
	FILE* ofp;

	if (coefficientOutputFile) {
		ofp=fopen(coefficientOutputFile, "wb");
		if (!ofp) {
			fprintf(stderr, "Error: Can't open coefficient output file\n");
			ofp=0;
		}
	}
	else
		ofp=0;

	return ofp;
}

// calculate coefficients for one window
void CalcWindowCoefficients(FILE* fpOut, int nMaxIterations) {
	double beta, ss;
	CCoeffs gradient, heading, gradientOld;
	double gg, ggOld;
	CCoeffInfo coeffInfo[4];
	int iterations, printIterations, restartAt;

	// find sum of squares for error purposes
	coeffInfo[0].Clear();
	ss=coeffInfo[0].CalcSSE();

	iterations=0;
	printIterations=1;
	restartAt=8;

	//  nonlinear regression
	// check first guess
	coeffInfo[0].CalcSSE();

	if(fPreconditioned)
		beta=(double)1e-2;
	else
		beta=(double)4e-6;

	while (1) {
		if (fPolakRibere)	// save old gradient information, used by polak-ribere
			gradientOld=gradient;

		if(fPreconditioned)
			gradient.Mult(coeffInfo[0].sse1, coeffInfo[0].sse2);
		else
			gradient=coeffInfo[0].sse1;

		if(fConjugateGradient) {
			if (iterations==0 || iterations>restartAt) {	
				heading = gradient;
				gg=gradient.Norm();
				if (iterations>restartAt)
					restartAt<<=1;
			}
			else {
				ggOld=gg;
				if (fPolakRibere) {
					gradientOld.Update(gradient,-1);	// calculate old gradient-new gradient
					gg=-gradient.Dot(gradientOld);
				}
				else {
					gg=gradient.Norm();					// Fletcher-Reeves
				}

				heading.UpdateFrom(gradient, heading, -gg/ggOld);
			}
			// are we done? unlikely to be exactly 0...
			if (gg==0)
				break;
		}
		else	// steepest descent
			heading=gradient;

		if (iterations>=nMaxIterations)
			break;

		linmin(coeffInfo,gradient, heading, beta, iterations, printIterations, nMaxIterations, ss, fConjugateGradient);
		if (beta<0)	// heading is uphill -- restart
			heading.Clear();
		fprintf(stderr,".");
	}
	fprintf(stderr,"\n");
	printf("%3d iterations: %#7.4lf%%, %lf err\n",iterations,coeffInfo[0].sse*100/ss, coeffInfo[0].sse);
	// print coefficients
	coeffInfo[0].Print(fpOut);
}

// calculate coefficients based on reading from a file
void CalcPatternCoefficients(int nMaxIterations) {
	int iWindow, iSubset, nSubsets, fEvenOdd;
	FILE* fpOut;
	char fnOut[100];

	// calculate coefficients for each window
	for (iWindow=iWindowStart; iWindow<=iWindowEnd; iWindow++) {

		// get filename and file pointer
		sprintf(fnOut,"%s%c.cof",fnBase,'a'+iWindow);
		fpOut=fopen(fnOut,"wb");

		// check if fp is valid. If so, do regression
		if (!fpOut)
			fprintf(stderr,"Error opening output file %s\n",fnOut);
		else {
			// write version and fParam info
			int iVersion=1;
			int fParams=0xE;
			fwrite(&iVersion,sizeof(iVersion),1,fpOut);
			fwrite(&fParams,sizeof(fParams),1,fpOut);
			printf("fParams: %X\n", fParams);

			// if parity coeffs, get separate coeffs for each parity.
			nSubsets=2;
			for (iSubset=0; iSubset<nSubsets; iSubset++) {

				// calculate value of even/odd parity flags
				fEvenOdd=1<<iSubset;

				fprintf(stderr, "Beginning calculation of window #%d, subset %d [%d,%d):\n",
					iWindow,iSubset,windows[iWindow].begin,windows[iWindow].end);
				printf("Beginning calculation of window #%d, subset %d [%d,%d):\n",
					iWindow,iSubset,windows[iWindow].begin,windows[iWindow].end);
				GetPositions(windows[iWindow], fEvenOdd);
				CalcWindowCoefficients(fpOut, nMaxIterations);
			}
			fclose(fpOut);
		}
	}
}

int main(int argc, char**argv) {
	time_t end_time;

	////////////////////////////////////////
	// Table Initialization
	////////////////////////////////////////

	_CrtSetDbgFlag(_CRTDBG_CHECK_ALWAYS_DF | _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG));

#ifdef _DEBUG
	setbuf(stdout, 0);
#else
	if (!printHumanReadable)
		setbuf(stdout,0);
#endif

	if (argc>1) {
		iWindowStart=atoi(argv[1]);
		cerr << "starting with window " << iWindowStart << "\n";
	}
	else
		iWindowEnd=0;
	if (argc>2) {
		iWindowEnd=atoi(argv[2]);
		cerr << "ending with window " << iWindowEnd << "\n";
	}
	else
		iWindowEnd=nWindows;

	cout << "   coeffs: " << setw(3) << (CCoeffs::MaxSize()>>20) << "MB\n";
	cout << "      ids: " << setw(3) << (sizeof(ids)>>20) << "MB\n";
	cout << "  results: " << setw(3) << (sizeof(results)>>20) << "MB\n";
	CCompression::Init();
	InitFastFlip();
	InitFastFlipPatterns();
	InitConfigToPotMob();
	extern void InitNewFF();
	InitNewFF();
	//CPositionG::InitTables();
	cfWeights=new CCoeffs;

	CalcPatternCoefficients(maxEvals);

	time(&end_time);
	printf("\n\nRun completed at GMT %s\n",asctime(gmtime(&end_time)));

	if (_isatty(_fileno(stdout)))
		scanf("\n%*c");

	delete cfWeights;
	CleanConfigToPotMob();
	CBook::Clean();
	CleanFastFlipPatterns();
	return 0;
}
