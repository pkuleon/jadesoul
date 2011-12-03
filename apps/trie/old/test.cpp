/**
 * File: test.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-09-24 16:23:00.282000
 * Written In: Peking University, beijing, China
 */


#include <iostream>
#include <vector>
using namespace std;

int main () {
	const int M=10;
	const int N=43687091;
	
	
	
	int **a=new int*[M];
	for (int i=0; i<M; ++i) {
		a[i]=new int[N];
	}
	for (int i=0; i<M; ++i) {
		for (int j=0; j<N; ++j) {
			a[i][j]=1;
		}
	}
	
	
	cout<<a[0][0]<<endl;
	cout<<a[M-1][N-1]<<endl;
	
	cout<<"hello, world"<<endl;
	int b;
	cin>>b;
}

