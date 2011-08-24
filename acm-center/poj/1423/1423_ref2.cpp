#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.1415926
int main() {
	long num;
	int i,ans;
	cin>>i;
	while (i--) {
		cin>>num;
		if (num==1)
			cout<<"1"<<endl;
		else {
			ans=ceil((num*log(num*1.0)-num+log(2*num*pi)/2)/log(10.0));
			cout<<ans<<endl;
		}
	}
	return 0;
}
// 斯特灵公式 lnN!=NlnN－N+0.5ln(2N*pi)
// 还有，一个数M的位数是等于log10(M)取整后加1的
// 因为lnN! /ln10 = log10(N!)
// 那么len = ceil((N*log(N)-N+log(2*N*PI)/2)/log(10))