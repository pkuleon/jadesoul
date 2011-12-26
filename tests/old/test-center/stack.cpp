/**
 * File: stack.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-06-02 14:25:16.999000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "jadesoul.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define echo(x) cout<<#x<<"\taddr="<<setw(8)<<hex<<&x<<"\tval="<<setw(11)<<dec<<x<<"\thexval="<<setw(8)<<hex<<x<<endl;
#define uint unsigned int
void f();

void showd(int* d, int n) {
	for (int i=0; i<n; ++i) echo(*(d+i));
}

uint addr_main;

int main () {
	// cout<<main<<endl;
	addr_main=(uint)main;
	int d[]={1,-2,4,3};
	f();
	showd(d, 4);
}

void f() {
	//函数调用堆栈研究
	uint *p=(uint*)&p;//定义指针指向栈中自己的地址
	
	uint& main_stack_bottom=(*(p+1));//main的栈底地址
	uint& f_return_to_main_addr=(*(p+2));//f的返回地址
	#define main_stack_top ((uint)(p+3))//main的栈顶地址
	
	// echo(p);
	// echo(main_stack_bottom);
	// cout<<(main_stack_top)<<endl;
	// echo(f_return_to_main_addr);
	
	uint len=(main_stack_bottom-main_stack_top)/4;//计算数组的长度，栈底高地址，栈顶地地址
	
	// for (int i=0; i<30; ++i) { cout<<"i="<<dec<<i<<"\t"; echo(*(p+i)); }//打印栈中前30个字
	
	#define ptr_int (int*)main_stack_top//数组中第一个元素的指针
	for (int i=0; i<len; ++i) { cout<<"i="<<dec<<i<<"\t"; echo(*(ptr_int+i)); }
	sort(ptr_int, ptr_int+len);
}


