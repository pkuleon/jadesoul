#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin>>a>>b;
	while((c = a%b) != 0){
		a=b;
		b=c;
	};
	cout<<b;
	return 0;
}