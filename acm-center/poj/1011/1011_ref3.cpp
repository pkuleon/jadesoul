/**
 * File: 1011_ref3.cpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2011-08-17 13:30:49.739000
 * Written In: Peking University, beijing, China
 */



#include <stdio.h>
#include <algorithm>
void POJ1011();
int inputnum;
bool used[64];
int partlen[64];
int main()
{
	POJ1011();
	return 0;
}
//needstick为还需要拼凑的stick数，pos为目前所在part的偏移,
//leftlen为还剩下的棍子长度，sticklen为当前所需棍子的总长度,
//start为每个棍子的part起点
bool searchStick(int needstick,int pos,int leftlen,int sticklen,int start)
{
//找到一根
	if (leftlen==0)
	{
		//如果是最后所需要的一根，则已找完所有棍子
		if (needstick==1)
			return true;
		start=0;
		while (used[start])
		{
			start++;
		}
		//找下一根
		if (searchStick(needstick-1,start,sticklen,sticklen,start))
			return true;
		return false;
	}
	else
	{
		//如果棍子的part全部用光则表示失败
		if (pos>inputnum-1)
			return false;
		int i;
		//寻找当前part以及其后的所有part来拼凑一根棍子
		for (i=pos; i<inputnum; ++i)
		{
			//判断part是否用过，重要剪枝1
			if (used[i])
				continue;
			//当前part大于剩下所需的长度，重要剪枝2
			if (partlen[i]>leftlen)
				continue;
			//如果前面一个相等长度的棍子没有用上，那么这个也用不上，重要剪枝3
			if (partlen[i]==partlen[i-1]&&!used[i-1])
				continue;
			used[i] = true;

			if (searchStick(needstick,i+1,leftlen-partlen[i],sticklen,start))
				return true;
			used[i] = false;
			//此剪枝导致以前的TLE，加上下面的剪枝就AC了
			if (partlen[i]==leftlen)
				return false;
			if (i==start)
				return false;
		}
		return false;
	}
}
//比较函数最好自己实现
bool cmp(int a,int b)
{
	return a>b;
}
void POJ1011()
{
	int i;
	scanf("%d",&inputnum);
	while (inputnum!=0)
	{
		int maxnum,len,totallen=0,maxpart=0;
		memset(used,0,sizeof(used));
		for (i=0; i<inputnum; i++)
		{
			scanf("%d",partlen+i);
			totallen+=partlen[i];
		}
		//descending sort
		std::sort(partlen,partlen+inputnum,cmp);
		maxnum = 64>totallen/partlen[0]?totallen/partlen[0]:64;
		int num;
		for (num = maxnum; num>0; --num)
		{
			if (totallen%num==0)
			{
				len = totallen/num;
				if (searchStick(num,0,len,len,0))
				{
					printf("%d\n",len);
					break;
				}
			}
		}
		scanf("%d",&inputnum);
	}
}