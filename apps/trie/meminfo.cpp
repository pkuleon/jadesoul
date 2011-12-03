/**
 * File: meminfo.cpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2011-10-01 11:05:18.743000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "jade.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#include <iostream>
#include <windows.h>
#include <psapi.h>
#pragma comment(lib,"psapi.lib")

// BOOL GetProcessMemoryInfo(
    // HANDLE Process,
    // PPROCESS_MEMORY_COUNTERS ppsmemCounters,
    // DWORD cb
// );

// typedef struct _PROCESS_MEMORY_COUNTERS {
	// DWORD cb;
	// DWORD PageFaultCount;
	// SIZE_T PeakWorkingSetSize; //��ֵ�ڴ�ʹ��
	// SIZE_T WorkingSetSize; //�ڴ�ʹ��
	// SIZE_T QuotaPeakPagedPoolUsage;
	// SIZE_T QuotaPagedPoolUsage;
	// SIZE_T QuotaPeakNonPagedPoolUsage;
	// SIZE_T QuotaNonPagedPoolUsage;
	// SIZE_T PagefileUsage; //�����ڴ�ʹ��
	// SIZE_T PeakPagefileUsage; //��ֵ�����ڴ�ʹ��
// } PROCESS_MEMORY_COUNTERS, *PPROCESS_MEMORY_COUNTERS;

void showMemoryInfo(void)
{
	HANDLE handle=GetCurrentProcess();
	PROCESS_MEMORY_COUNTERS pmc;
	GetProcessMemoryInfo(handle,&pmc,sizeof(pmc));
	cout<<"Mem Usage:"<<pmc.WorkingSetSize/1000 <<"K/"
		<<pmc.PeakWorkingSetSize/1000<<"K + "<<pmc.PagefileUsage/1000 
		<<"K/"<<pmc.PeakPagefileUsage/1000 <<"K"<<"\t"<<uint(pmc.PagefileUsage) -uint(pmc.WorkingSetSize)<<endl;
}

int main(int argc,char* argv)
{
	showMemoryInfo();
	cout<<"�������пɻ��յ��ڴ�"<<endl;
	EmptyWorkingSet(GetCurrentProcess());
	showMemoryInfo();
	
	
	// cout<<"��ʼ��̬�����ڴ�"<<endl;
	// char* buf[5];
	// for (int i=0; i<sizeof(buf)/sizeof(char*); i++)
	// {
		// buf[i]=new char[102400];
		// showMemoryInfo();
	// }
	// cout<<"��ʼ�ͷ��ڴ�"<<endl;
	// for (int i=0; i<sizeof(buf)/sizeof(char*); i++)
	// {
		// delete buf[i];
		// buf[i]=NULL;
		// showMemoryInfo();
	// }
	
	int * a=new int[1024*1024];
	for_n(i, 1024*1024) a[i]=1;
	showMemoryInfo();
	
	cout<<"�������пɻ��յ��ڴ�"<<endl;
	EmptyWorkingSet(GetCurrentProcess());
	showMemoryInfo();
	return 0;
}