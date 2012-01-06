#ifndef FILESYS-REF3_HPP_1325867739_02
#define FILESYS-REF3_HPP_1325867739_02
/**
 * File: filesys-ref3.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-07 00:35:39.021000
 * Written In: Peking University, beijing, China
 */

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

#endif /* FILESYS-REF3_HPP_1325867739_02 */
