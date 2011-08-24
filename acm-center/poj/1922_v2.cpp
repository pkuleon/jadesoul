#include <stdio.h>
#include <math.h>
#define FLT_MAX 3.402823466e+38F

int main () {
	int N;
	scanf("%d", &N);
	while(N!=0) {
		float m=FLT_MAX;
		for (int i=0; i<N; ++i) {
			int v, t;
			scanf("%d", &v);
			scanf("%d", &t);
			if (t<0) continue;
			float a=16200.0/v+t;
			if (a<m) m=a;
		}
		printf("%d\n", (int)ceil(m));
		scanf("%d", &N);
	};
}

