/**
 * File: filesys3.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-08 15:50:02.213000
 * Written In: Peking University, beijing, China
 */


#include <windows.h>
#include <stdio.h>
#include <string.h>
#define LEN 1024
#include <jadesoul.hpp>
// using namespace std;

uint cnt=0;

// ������ȵݹ����Ŀ¼�����е��ļ�
BOOL  DirectoryList(LPCSTR Path)
{
	WIN32_FIND_DATA FindData;
	HANDLE hError;
	int FileCount = 0;
	char FilePathName[LEN];
// ����·��
	char FullPathName[LEN];
	strcpy(FilePathName, Path);
	strcat(FilePathName, "\\*.*");
	hError = FindFirstFile(FilePathName, &FindData);
	if (hError == INVALID_HANDLE_VALUE)
	{
		printf("error!");
		return 0;
	}
	while (::FindNextFile(hError, &FindData))
	{
		// ����.��..
		if (strcmp(FindData.cFileName, ".") == 0
		        || strcmp(FindData.cFileName, "..") == 0 )
		{
			continue;
		}

		// ��������·��
		sprintf(FullPathName, "%s\\%s", Path,FindData.cFileName);
		FileCount++;
// ����������ļ�
		++cnt;
		printf("\n%d\t%s  ", cnt, FullPathName);

		if (FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			printf("<Dir>");
			DirectoryList(FullPathName);
		}
	}
	return 0;
}

void main()
{
	DirectoryList("D:");
}
