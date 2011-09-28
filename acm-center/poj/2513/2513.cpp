poj2513 tire树+并查集+欧拉路 木棒涂色一笔画问题
2010年08月20日 星期五 16:38
一道相当经典的题目，tire树+并查集+欧拉路。题意大概是：给定许多跟木棒，木棒两端都涂上颜色，求是否能将木棒首尾相接，连成一条直

线，要求不同木棒相接的一边必须是相同颜色的。可以用图论中欧拉路的知识来解这道题，首先可以把木棒两端看成节点，把木棒看成边，这

样的话，相同的颜色就是同一个节点，问题便转化为了，给定一个图，是否存在“一笔画”经过涂中每一点，以及经过每一边一次。这样就是

求图中是否存在欧拉路了。

由图论知识可以知道，无向图存在欧拉路的充要条件为：①图是连通的；②所有节点的度为偶数，或者只有两个度为奇数的节点。

其中节点的度用颜色出现次数来统计，tire用来记录颜色，而并查集用来合并节点，判断图是否连通

Source Code

Problem: 2513 User:
y09hanyuhui1989
Memory: 75320K Time: 1282MS
Language:
C++ Result:
Accepted

Source Code
#include<iostream>
using namespace std;
#define N 500010
struct Node
{
	int id;
	Node *p[26];
	Node()
	{
		int i;
		id=-1;
		for (i=0; i<26; i++)
			p[i]=NULL;
	}
} root;
int d[N],parent[N],rank[N],cnt;
int GetNum(char *s)
{
	int i;
	Node *r=&root;
	for (i=0; s[i]; i++)
	{
		if (r->p[s[i]-'a']==NULL)
			r->p[s[i]-'a']=new Node();
		r=r->p[s[i]-'a'];
	}
	if (r->id==-1)
		r->id=cnt++;
	return r->id;
}
int FindSet(int i)
{
	if (parent[i]!=i)
		parent[i]=FindSet(parent[i]);
	return parent[i];
}
int UnionSet(int i,int j)
{
	i=FindSet(i);
	j=FindSet(j);
	if (i!=j)
		if (rank[i]>rank[j])
			parent[j]=i;
		else
		{
			parent[i]=j;
			if (rank[i]==rank[j])
				++rank[j];
		}
	return i!=j;
}
int main()
{

	int i,j,k;
	char s1[12],s2[12];
	for (i=0; i<N; i++)
		parent[i]=i;
	cnt=0;
	memset(rank,0,sizeof(rank));
	memset(d,0,sizeof(d));
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		j=GetNum(s1);
		k=GetNum(s2);
		d[j]++;
		d[k]++;
		UnionSet(j,k);
	}
	for (k=i=0; i<cnt; i++)
		if (d[i]%2)
			k++;
	j=FindSet(0);
	for (i=1; i<cnt; i++)
		if (FindSet(i)!=j)
		{
			printf("Impossible\n");
			return 0;
		}
	if (k<3)
		printf("Possible\n");
	else
		printf("Impossible\n");
	return 0;
}

