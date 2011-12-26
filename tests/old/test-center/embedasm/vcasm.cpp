/**
 * File: vcasm.cpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2011-06-02 23:02:43.407000
 * Written In: Peking University, beijing, China
 */


#include<stdio.h>
int cal(int a,int b)
{
	__asm
	{
		mov eax,a;
		mov ebx,b;
		add eax,ebx;
	}
}

inline int f() {
	_asm {
		mov eax, 0;
		cpuid;
	}
}

int main()
{
	// int a,b;
	// scanf("%d%d",&a,&b);
	// printf("%d\n",cal(a,b));
	printf("%u", f());
}