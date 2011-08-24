#include<iostream>
using namespace std;
int main() {
	float m;
	while ( cin>>m && m!=0 ) {
		int n = 2;
		double sum = 0.5;
		while (sum<m)
			sum += 1.0/(++n);
		cout<<n-1<<" card(s)"<<endl;
	}
}