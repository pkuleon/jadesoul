/**
 * File: 1922.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-12 13:06:49.200000
 * Written In: Peking University, beijing, China
 */

#include <iostream>
#include <cmath>
// #include <cassert>
using namespace std;

#define ARRIVE_TIME(v, t) (4.5 * 3600.0 / v + t)
#define MAX_FLOAT 3.4e+38F

int main () {
	int N;
	cin>>N;
	while(N!=0) {
		//init
		int *V=new int[N];
		int *T=new int[N];
		float *A=new float[N];
		int nowF;
		for (int i=0; i<N; ++i) {
			cin>>V[i]>>T[i];
			A[i]=ARRIVE_TIME(V[i], T[i]);
			// cout<<A[i]<<"\t"<<ceil(A[i])<<endl;
		}
		
		//now let's play
		//1.choose the earliest one and follow
		bool anyPositive=false;
		for (int i=0; i<N; ++i) {
			if (T[i]>0) {
				nowF=i;
				anyPositive=true;
				break;
			}
		}
		// assert(anyPositive);
		for (int i=0; i<N; ++i) {
			if (i!=nowF && T[i]>=0 && T[i]<T[nowF]) nowF=i;
		}
		// cout<<"choose first to follow: "<<nowF<<" t="<<T[nowF]<<endl;
		
		bool meetAny;
		do {
			//2.follow the one who catch up from back
			float meetT=0, minMeetT=MAX_FLOAT;
			int minMeetF;
			meetAny=false;
			int j=nowF;
			for (int i=0; i<N; ++i) {
				if (i!=j && V[i]>V[j]) {
					meetT=(V[i]*T[i]-V[j]*T[j]) *1.0 / (V[i]-V[j]);
					// cout<<i<<" meet "<<j<<" at "<< meetT<<endl;
					if (meetT>=0 && meetT<A[i] && meetT<=A[j]) {
						if (meetT<minMeetT) {
							minMeetT=meetT;
							minMeetF=i;
							meetAny=true;
							// cout<<"choose as min"<<endl;
						}
					}
				}
			}
			if (meetAny) {
				nowF=minMeetF;
				// cout<<"meet\t"<<minMeetF<<endl;
			}
		} while(meetAny);
		cout<<ceil(A[nowF])<<endl;
		
		//clear
		delete [] V;
		delete [] T;
		delete [] A;
		cin>>N;
	};
}

