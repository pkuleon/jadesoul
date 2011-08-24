#include<stdio.h>
int main() {
	while(1) {
		int n, i=0;
		scanf("%d", &n);
		if (n==0) break;
		float m=3e+38F;
		while(i<n) {
			asm("incl %0" :"=a"(i):"0"(i));
			int v;
			scanf("%d", &v);
			float a=16200.0/v;
			scanf("%d", &v);
			if (v<0) continue;
			a+=v;
			if (a<m) m=a;
		}
		printf("%d\n", (int)m+((float)(int)m!=m?1:0));
	}
}
