// 静态存储区.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"
 
int _tmain(int argc, _TCHAR* argv[]) {
	char *p="china";
	char t[]="  ";
	strcpy(t,p);
	*(t+1)='a';
	printf("%s", p);
	return 0;
}

