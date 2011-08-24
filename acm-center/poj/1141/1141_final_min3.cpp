#include<stdio.h>
#define N unsigned char
#define c(x) if(m<M){M=m;Y(i,j)=x;}
#define d t[++l]=
#define X(i,j) x[i][j]
#define Y(i,j) x[j][i]
N x[101][101];
char s[102],t[202];
N n=0,l=0,i,j,r,M,m,k;
void a(N i,N j) {
	if (i==j)if (s[i]==40||s[i]==41) {
			d 40;
			d 41;
		}
		else {
			d 91;
			d 93;
		}
	else {
		N k=Y(i,j);
		if (k==0) {
			d s[i];
			if (i+1<=j-1)a(i+1,j-1);
			d s[j];
		}
		else {
			a(i,k);
			a(k+1,j);
		}
	}
}
char*b() {
	for (i=0; ++i<=n;)X(i,i)=1;
	for (r=2; r<=n; ++r)for (i=1; i<=n-r+1; ++i) {
			j=i+r-1;
			M=255;
			for (k=i; k<j; ++k) {
				m=X(i,k)+X(k+1,j);
				c(k);
			}
			if ((s[i]==40&&s[j]==41)||(s[i]==91&&s[j]==93)) {
				m=((i+1<=j-1)?X(i+1,j-1):0);
				c(0);
			}
			X(i,j)=M;
		}
	a(1,n);
	t[++l]=0;
	return t+1;
}
int main() {
	gets(s+1);
	while (s[n+1])++n;
	puts(b());
}