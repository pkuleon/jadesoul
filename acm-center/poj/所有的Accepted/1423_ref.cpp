#include <stdio.h>
#include <math.h>

int main ()
{
	int m;
	const double pi=3.1415926535;
	const double e=2.718281828459 ;
	scanf("%d",&m);
	while (m--) {
		int n,result;
		scanf("%d",&n);
		result=(int)(log10(sqrt(2 * pi * n)) + n * log10((double)n / e))+1;
		printf("%d\n",result);
	}
	return 0;
}