
题意：火柴两头都有不同的颜色，相同颜色的火柴头能接在一起。判断火柴是否能接成一条线

#include<iostream>

#include<stdio.h>

#include<string.h>

#include<cstring>

usingnamespacestd;

#define MAX 500010

int f[MAX],degree[MAX],nu[MAX];

int num=1;

struct point{

         int id;

         point *next[27];

         point()

         {

                   for(int i=0;i<27;i++)

                            next[i]=NULL;

                   id=0;

         }

};

point *root=new point;

int insert(char*str)     //字典树

{

         int m;

         point *p=root;

         for(int i=0;i<strlen(str);i++)

         {

                   m=str[i]-'a';

                   if(p->next[m]==NULL)

                            p->next[m]=newpoint;

                   p=p->next[m];

         }

         if(p->id==0)

                   p->id=num++;

         return p->id;

}

int find(int x) //查找  更新  父节点

{

         if(x!=f[x])

                   return f[x]=find(f[x]);

         return f[x];

}

void uni(int u,int v)  //合并节点

{

         if(nu[u]>nu[v])

         {

                   f[v]=u;

                   nu[v]+=nu[u];

         }

         else

         {

                   f[u]=v;

                   nu[u]+=nu[v];

         }

}

int main()

{

         int u,v;

         char s1[12],s2[12];

         while(scanf("%s%s",s1,s2)!=EOF)

         {

                   u=insert(s1);

                   v=insert(s2);

                   degree[u]++;

                   degree[v]++;

                   if(f[u]==0)

                   {f[u]=u;nu[u]=1;}

                   if(f[v]==0)

                   {f[v]=v;nu[v]=1;}

                   uni(find(u),find(v));

         }

         int i,s=0;

         for(i=0;i<num;i++)            //欧拉图 

         {

                   if(degree[i]%2!=0)

                            s++;

                   if(s>2)

                   {

                            cout<<"Impossible"<<endl;

                            return 0;

                   }

         }

         for(i=1;i<num;i++)         //并查集 看是否联通

         {

                   if(find(i)!=find(1))

                   {

                            cout<<"Impossible"<<endl;

                            return 0;

                   }

         }

         cout<<"Possible"<<endl;

         return 0;

}