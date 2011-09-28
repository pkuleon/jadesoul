tire学习模板poj2001
2010-05-18 09:46
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 26//每个节点后继结点的个数 
struct Node
{
	int num;//用来标记的阈值
	Node *next[Max];//后继结点
};
Node *root;//建立根节点的引用
char ss[25];
char ss0[1010][25];//存输入的字符串
void trie()//初始化根节点
{
	int i,j;
	root=new Node;//为根节点开辟内存
	root->num=0;//初始化根节点的后继和值域
	for (i=0; i<Max; i++)
	{
		root->next[i]=NULL;
	}
}

void insert(char aa[])//插入操作
{
	Node *p=root,*t;//p指向当前节点，t用来开辟新的内存
	int i,j;
	for (i=0; aa[i]; i++)//将每个字符存起来的过程
	{
		if (p->next[aa[i]-'a']==NULL)//看当前点是否存过，没有的话就需要从新开辟内存
		{
			t=new Node;
			t->num=0;
			for (j=0; j<Max; j++)
			{
				t->next[j]=NULL;
			}
			p->next[aa[i]-'a']=t;//将新节点赋给那个节点
		}
		p=p->next[aa[i]-'a'];//指针后移
		p->num++;//记录加一
	}
}

void search(char aa[])//查询
{
	Node *p=root;
	int tt;
	int i,j;
	tt=0;
	for (i=0; aa[i]; i++)
	{
		p=p->next[aa[i]-'a'];//对应到当前的节点位置
		if ((p->num)>1)//大于一的就加入
		{
			ss[tt]=aa[i];
			//p=p->next[aa[i]-'a'];
			tt++;
		}
		else if (p->num==1)//等于一说明是最后一个字符了
		{
			ss[tt]=aa[i];
			ss[tt+1]='\0';
			return;
		}
	}
	ss[tt]='\0';
	return;


}

int main()
{
	int i,j;
	int n;
	n=0;
	trie();
	while (scanf("%s",ss0[n])!=EOF)//获得字符串
	{
		insert(ss0[n]);
		n++;
	}
	for (i=0; i<n; i++)
	{
		printf("%s",ss0[i]);
		search(ss0[i]);
		printf(" %s\n",ss);
	}
	system("pause");
}