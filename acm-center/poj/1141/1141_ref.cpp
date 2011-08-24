/*题目大意:给你一贯括号序列(只包含小括号和中括号)，让你找出长度最小的regular brackets sequence包含此子序列.其中的regular brackets sequence定义如下:

1)空序列是一个regular brackets sequence;

2)如果s是一个regular brackets sequence,那么[s] 也是一个regular brackets sequence,(s)也是一个regular brackets sequence.

3)如果A,B都是regular brackets sequence,那么AB也是一个regular brackets sequence.

例如:()、[]、()[] 、([]) 、([])()[()]都是regular brackets sequence。

而[[[、 (((((、 ([)] 则都不是regular brackets sequence。其中以“([)]”为例，包含它最小的regular brackets sequence有两个:()[()]或者是([])[].而你只要输出其中一个就行。

好了，题目题意讲完了，应该理解了吧。下面开始分析：

这个问题一眼就可以看出是DP题，为什么呢？因为很明显这个问题可以根据它定义中的（2）和（3）这两条性质划分出更小的子问题。也就是说，一个序列如果 是AB形式的话，我们可以划分为A，B两个子问题；而如果序列是[A]或者(A)的形式，我们可以把它降为分析A即可。分解的底层就是剩下一对[]或者 ()或者是只剩下一个单字符就停下不再分解。当剩下的是一对匹配的()或者[]时，我们不必添加如何括号，因为这已经匹配，而对于只剩下最后一个单字符， 我们需要对它配一个字符，使它配对，如（就配上），]就配上[，依此类推。

那么这题的状态转移方程就很容易列出来了，用a[i,j]表示从位置i到位置j所需要插入的最小字符数，明显有状态转移方程如下：

a[i,j]=min(a[i,k]+a[k+1,j]) 其中i<=k<j；这个是利用了定义的性质（3），枚举K，尝试所有的可能分解，取最优分解；

特别的，当a[i,j]的首尾为()或者[]时，

a[i,j] = min(a[i+1,j-1],tmp) 其中tmp为上面根据性质3求得的最小值，这条转移是利用了性质2。

初始条件为：

a[i,i]=1,表示任意一个字符都要一个对应的字符来匹配；

a[i+1,i]=0.这个没有什么实际的意义，只是前面的分析说了，当剩下一对()或者[]时，就不再继续往下分解，而我们为了更方便的组织程 序，把当剩下一对()或者[]时还继续分解，那么,举例子来说，本来序列为(),a[0,1]通过转移变成a[1,0]，为了不出错，所以我们把a[i+ 1,i]初始化为0，这样组织程序起来也就比较容易了。

到这里，转移方程就结束了，如果这题只让你求最少需要插入的字符数，那么这题就结束了，而这题让你求的是包含子序列的最小regular brackets sequence，所以我们还需要对前面的求解过程进行标记，把每次求得最小值所取的位置都记录下来，然后用递归回溯的方法去求得最小的regular brackets sequence。

如：我们用tag[i,j]表示i到j位置中记录下来该到哪里划分，假设初始化为-1，

如果a[i,j]选择最优的时候，选择的是a[i,k]+a[k+1,j],那么记录下k的位置；

如果a[i,j]选择的是a[i+1,j-1]的话，那么保持初始值即可。

这样再根据a[0,strlen(str)-1]逐步回溯。这个回溯就不讲了，DP才是这个帖子要讲的，回溯以后再说吧。

下面看下我实现的代码吧：）
*/

#include <stdio.h>
#include <string.h>
int a[102][102],tag[102][102];
char str[128];
void search(int st,int end)
{
	if (st>end) return;
	else if (st==end) {
		if (str[st]=='('||str[st]==')')
			printf("()");
		else printf("[]");
	} else {
		if (tag[st][end]==-1) {
			if (str[st]=='(') {
				printf("(");
				search(st+1,end-1);
				printf(")");
			} else {
				printf("[");
				search(st+1,end-1);
				printf("]");
			}
		} else {
			search(st,tag[st][end]);
			search(tag[st][end]+1,end);
		}
	}
}

int main()
{
	int len,i,st,j,k,s,tmp;
	while (scanf("%s",str)!=EOF)
	{
		len=strlen(str);
		for (i=0; i<len; a[i+1][i]=0,a[i][i]=1,i++);
		for (st=1; st<len; st++)
			for (i=0; i+st<len; i++)
			{
				j=i+st;
				tmp=0x7fffffff;
				if (str[i]=='('&&str[j]==')'||str[i]=='['&&str[j]==']')
					tmp=a[i+1][j-1];
				tag[i][j]=-1;
				for (k=i; k<j; k++)
				{
					s=a[i][k]+a[k+1][j];
					if (s<tmp)
						tmp=s,tag[i][j]=k;
				}
				a[i][j]=tmp;
			}
		search(0,len-1);
		printf("\n");
	}
	return 0;
}