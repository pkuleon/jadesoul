/*
并查集顾名思义就是联合集合查询，但是这样去理解太抽象了，就从POJ1182此题来分析吧。
并查集的特点是，通过操作将有关联的集合合并，其中集合有这样的特点：
任何2个集合都没有重复元素，我们称之为完全不相交。（这个很重要）
还有一个特点借用一句话来表明集合的关系：
x和y是亲戚，y和z是亲戚，那么x和z也是亲戚。如果x,y是亲戚，那么x的亲戚都是y的亲戚，y的亲戚也都是x的亲戚。
这就是集合中的元素关系，放入此题看看是不是很适合形容此题各种小动物的关系。

对于集合里的任意两个元素a,b而言，它们之间必定存在着某种联系，
因为并查集中的元素均是有联系的，否则也不会被合并到当前集合中。那么我们
就把这2个元素之间的关系量转化为一个偏移量，以食物链的关系而言，不妨假设
a->b 偏移量0时 a和b同类
a->b 偏移量1时 a吃b
a->b 偏移量2时 a被b吃，也就是b吃a
有了这些基础，我们就可以在并查集中完成任意两个元素之间的关系转换了。
不妨继续假设，a的当前集合根节点aa，b的当前集合根节点bb，a->b的偏移值为d-1（题中给出的询问已知条件）
(1)如果aa和bb不相同，那么我们把bb合并到aa上，并且更新delta[bb]值（delta[i]表示i的当前集合根节点到i的偏移量）
    此时 aa->bb = aa->a + a->b + b->bb，可能这一步就是所谓向量思维模式吧
    上式进一步转化为：aa->bb = (delta[a]+d-1+3-delta[b])%3 = delta[bb]，（模3是保证偏移量取值始终在[0,2]间）
(2)如果aa和bb相同，那么我们就验证a->b之间的偏移量是否与题中给出的d-1一致
    此时 a->b = a->aa + aa->b = a->aa + bb->b，
    上式进一步转化为：a->b = (3-delta[a]+delta[b])%3，
    若一致则为真，否则为假。
*/
#include<iostream>
using namespace std;
int N,K,D,X,Y;
int father[50001];//father[i]表示i的父节点
int offset_v[50001];//offset_V[i]表示i与源节点的偏移量
int false_word=0;//假数
void init()//初始化
{
	for (int i=0; i<=N; i++)
	{
		father[i]=i;
		offset_v[i]=0;
	}
}
int find_zx(int a)
{
	/*
	找源节点，同时在每次找的时候进行了一个操作
	每次找的时候都将点的父节点设置为源节点。
	同时更新offset_V[i]
	*/
	if (father[a]==a)
	{
		return a;
	}
	int t=father[a];
	father[a]=find_zx(father[a]);
	offset_v[a]=(offset_v[a]+offset_v[t])%3;
	return father[a];
}
void union_jh(int a,int b,int d)
{
	int zxa=find_zx(a);
	int zxb=find_zx(b);
	father[zxa]=zxb;
	offset_v[zxa]=(offset_v[b]+d-offset_v[a]+3)%3;
	return ;
}
int main()
{
	/*freopen("C:\\Documents and Settings\\Administrator\\桌面\\in.txt","r",stdin);
	freopen("C:\\Documents and Settings\\Administrator\\桌面\\out.txt","w",stdout);   */
	scanf("%d %d",&N,&K);
	init();
	for (int i=0; i<K; i++)
	{
		scanf("%d %d %d",&D,&X,&Y);
		if (X>N||Y>N||(D==2&&X==Y))
		{
			false_word++;
			continue;
		}
		if (find_zx(X)==find_zx(Y))
		{
			if ((offset_v[X]-offset_v[Y]+3)%3!=D-1)
			{
				false_word++;
			}
		}
		else
		{
			union_jh(X,Y,D-1);
		}
	}
	printf("%d\n",false_word);
	/*
	  注：用C++的cin cout 是会超时的 因为输入的语句很多，可能几千条
	  其实也比较郁闷。cin TLE  scanf 200ms
	  所以以后写都用scanf不用cin,汗！
	*/
	return 0;
