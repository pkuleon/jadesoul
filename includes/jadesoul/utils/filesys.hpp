#ifndef FILESYS_HPP_1325514009_53
#define FILESYS_HPP_1325514009_53
/**
 * File: filesys.hpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2012-01-02 22:20:09.534000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"

// struct Code {
// Code() {
// cout<<file<<endl;
// }
// } code;


/*


c++文件操作，vc文件操作，目录操作

 
一、标准C++文件操作
ifstream 读入流
ofstream 写出流
fstream 读写流
 
使用步骤
1、绑定流
两种方法：
（1）ifstream infile(string filename);
    ifstream infile(string filename, mode);
（2）ifstream infile; infile.open(string filename);
ifstream infile; infile.open(string filename, mode);
2、检查文件是否打开
if(infile){}
3、使用文件流
同样使用>>、<<操作符。
如：infile>>s;  //读入到s中
4、关闭文件流
close()方法。
5、重新绑定文件流
需要先关闭流，再重新绑定。
6、c++目录操作
包含的头文件 #include <direct.h> 
函数 mkdir(name); mkdir(name); 
 
二、VC中文件操作
MFC中文件操作使用的类：
CFileFind 文件查找类
CFile 文件类
1、文件查找
示例代码：
CString   strFileTitle;   
 　　CFileFind   finder;   
 　　BOOL   bWorking   =   finder.FindFile( "C:\\windows\\sysbkup\\*.cab ");   
 　　while(bWorking)   
 　　{   
 　　bWorking=finder.FindNextFile();   
 　　strFileTitle=finder.GetFileTitle();   
 　　}   
2、文件操作
//对文件进行读操作   
     　　char   sRead[2];   
     　　CFile   mFile(_T( "user.txt "),CFile::modeRead);   
     　　if(mFile.GetLength() <2)   
     　　return;   
     　　mFile.Read(sRead,2);   
     　　mFile.Close();   
     　　//对文件进行写操作
         CFile   mFile(_T( "user.txt"), CFile::modeWrite|CFile::modeCreate);   
     　　mFile.Write(sRead,2);   
     　　mFile.Flush();   
     　　mFile.Close();   
3、其他操作
CopyFile()、CreateDirectory()、DeleteFile()、MoveFile()





文件目录操作

１．创建目录（ＡＰＩ）

BOOL CreateDirectory(LPCTSTR pstrDirName);//pstrDirName是全路径

２．删除目录（ＡＰＩ）

BOOL RemoveDirectory( LPCTSTR lpPathName );

３．判断目录是否存在（Shell Function）

#include <shlwapi.h>
#pragma comment(lib, "shlwapi.lib")
if (PathIsDirectory(_T("d:\\temp")))
    AfxMessageBox(_T("存在"));
else
    AfxMessageBox(_T("不存在"));
４．取得当前目录（ＡＰＩ）

DWORD GetCurrentDirectory( DWORD nBufferLength, LPTSTR lpBuffer );

５．取得执行文件所在目录（ＡＰＩ）

DWORD GetModuleFileName( HMODULE hModule, LPTSTR lpFilename, DWORD nSize );

６．取得功能目录（Shell Function）

BOOL SHGetSpecialFolderPath( HWND hwndOwner,  LPTSTR lpszPath, int nFolder, BOOL fCreate);

例：读取我的档案目录

    TCHAR szDirFile[1024];
    memset(szDirFile, 0, sizeof(szDirFile));
    BOOL bRet = SHGetSpecialFolderPath(NULL,szDirFile,CSIDL_PERSONAL,true);
    if (bRet)
    {
        AfxMessageBox(szDirFile);
    }


   1. 一个自认为比较经典的层次文件目录遍历程序

#include <afx.h>
#include <iostream>

using namespace std;

void Recurse(LPCTSTR pstr)
{
   CFileFind finder;

   // build a string with wildcards
   CString strWildcard(pstr);
   strWildcard += _T("//*.*");

   // start working for files
   BOOL bWorking = finder.FindFile(strWildcard);

   while (bWorking)
   {
      bWorking = finder.FindNextFile();

      // skip . and .. files; otherwise, we'd
      // recur infinitely!

      if (finder.IsDots())
         continue;

      // if it's a directory, recursively search it

      if (finder.IsDirectory())
      {
         CString str = finder.GetFilePath();
         cout << (LPCTSTR) str << endl;
         Recurse(str);
      }
   }

   finder.Close();
}

void main()
{
   if (!AfxWinInit(GetModuleHandle(NULL), NULL, GetCommandLine(), 0)
      cout << "panic!" << endl;
   else
      Recurse(_T("C:"));
}

2. 再用CFileFind过程中记住一点:

  在用GetFileName(),GetFilePath()等操作前一定确保有FindNextFile操作。
    没找到，怎么能返回文件信息呢?

3。

C++没有目录操作的支持，需要平台的支持了，比如WINDOWS的MoveFile，FindFirstFile等，建议参看平台的开发文档！
*/


// class file(

#include <windows.h>
#include <stdio.h>
#include <string.h>
#define LEN 1024

// 深度优先递归遍历目录中所有的文件
BOOL  DirectoryList(LPCSTR Path)
{
	WIN32_FIND_DATA FindData;
	HANDLE hError;
	int FileCount = 0;
	char FilePathName[LEN];
// 构造路径
	char FullPathName[LEN];
	strcpy(FilePathName, Path);
	strcat(FilePathName, "\\*.*");
	hError = FindFirstFile(FilePathName, &FindData);
	if (hError == INVALID_HANDLE_VALUE)
	{
		printf("搜索失败!");
		return 0;
	}
	while (::FindNextFile(hError, &FindData))
	{
		// 过虑.和..
		if (strcmp(FindData.cFileName, ".") == 0
		        || strcmp(FindData.cFileName, "..") == 0 )
		{
			continue;
		}

		// 构造完整路径
		wsprintf(FullPathName, "%s\\%s", Path,FindData.cFileName);
		FileCount++;
// 输出本级的文件
		printf("\n%d  %s  ", FileCount, FullPathName);

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
	DirectoryList("D:eclipse-J2EE");
}

/*
//非递归遍历文件夹

#include <windows.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void TraverseFolder(string& path)
{
    stack < string > find_file;
    WIN32_FIND_DATA FindFileData;
    HANDLE hFind;
    
    find_file.push(path);
    while (!find_file.empty())
    {
        string find_path = find_file.top();       
        find_file.pop();
        
        // 访问
        string dir;
        int index_of_slash = find_path.rfind('\\' );
        dir = find_path.substr(index_of_slash + 1 ,find_path.length() - index_of_slash);
        for (int i = 0 ;i < find_file.size();i ++ )cout << "    " ;
        cout << dir << endl;
        
        // 查找子目录/文件
        find_path = find_path + "\\*.*";
        
        hFind = ::FindFirstFile(find_path.c_str(), & FindFileData);
        if (hFind == INVALID_HANDLE_VALUE)
        {
            printf ("Invalid File Handle. GetLastError reports %d\n",GetLastError ());
            continue ;
        }
        do
        {
            // 非目录直接输出,目录的话则压栈
            if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
            {
                if (strcmp(FindFileData.cFileName, "." ) == 0 || strcmp(FindFileData.cFileName, ".." ) == 0 )continue;
                find_path = find_path.assign(find_path, 0 ,find_path.rfind( '\\' ));
                find_path = find_path + "\\" + FindFileData.cFileName;
                find_file.push(find_path);
            }
            else
            {
                for ( int  i = 0 ;i <= find_file.size();i ++ )cout << "    " ;
                cout << FindFileData.cFileName << endl;
            }
        }
        while (FindNextFile(hFind, & FindFileData));   
    }
}

int main()
{
    string path("e:\\work");
    TraverseFolder(path);
    getchar();
    return 0 ;
}
*/
#endif /* FILESYS_HPP_1325514009_53 */
