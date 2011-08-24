#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef ONLINE_JUDGE
	FILE *_fin=fopen("data.txt", "r");
	#define scan(...) fscanf(_fin, __VA_ARGS__)
#else
	#define scan(...) scanf(__VA_ARGS__)
#endif

int n;
int stick[100];
int total;
int num;            //一共需要还原出的木棍数num
int ok;
int length;           //当次需要达到的长度

int cmp(const void *a,const void *b) {
	int a1 = *(int *)a;
	int a2 = *(int *)b;
	return a2 - a1;
}
int used[100];

int adds() {
	int j = 0;
	for (int i = 1; i <= n; i++)
		j += stick[i];
	return j;
}

void search(int,int,int);

void s(int x) {         //x 正在还原第x根木棍
	if (x > num) {
		ok = 1;
		printf("%d\n", length);
		return;
	}

	int i;
	for (i = 1; i <= n; i++)
		if (!used[i]) break;  //找到第一根没有使用的木棍

	used[i] = 1;           //改变它的使用状态
	search(x,stick[i],i);         //搜索
	used[i] = 0;                   //还原它的使用状态
}

void search(int num,int now,int next) {   //num正在还原第num根木棍

	if (ok) return;
	if (now == length) {   //一根木棍还原完
		s(num + 1);    //还原下一根
		return;
	}

	if (next + 1 > n) return;   //总共只有n根短棍

	for (int i = next + 1; i <= n; i++)
		if (!used[i])
			if (stick[i] + now <= length) {  //该木棍加上当前长度小于length
				used[i] = 1;
				search(num,now + stick[i],i);   //搜索
				used[i] = 0;
				if (ok) return;
				if (stick[i] == length - now) return;  //有一根木棍长度正好等于当前差值
			}
}

int main () {
	while (scan("%d", &n) == 1) {
		if (!n) break;                            //读数据
		ok = 0;
		int i;
		for (i = 1; i <= n; i++) scan("%d", &stick[i]);
		qsort(stick+1,n,sizeof(int),cmp);              //快速排序，从大到小
		total = adds();                                //计算木棍总长度
		for (i = stick[1]; i <= total; i++)           //从最大的木棍 到 总长度 ，依次枚举
			if (total % i == 0 && !ok) {              //如果该长度可以被总长度整除，且还没有ok
				num = total / i;                       //求出一共需要还原出的木棍数num
				memset(used,0,sizeof(used));          //所有木棍使用状态清零
				length = i;                              //当次需要达到的长度
				s(1);
			}
	}
	return 0;
}