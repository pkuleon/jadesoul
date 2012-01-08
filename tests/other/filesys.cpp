/**
 * File: filesys.cpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2012-01-08 14:54:51.190000
 * Written In: Peking University, beijing, China
 */



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
		for (int i = 0 ; i < find_file.size(); i ++ )cout << "    " ;
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
				for ( int  i = 0 ; i <= find_file.size(); i ++ )cout << "    " ;
				cout << FindFileData.cFileName << endl;
			}
		}
		while (FindNextFile(hFind, & FindFileData));
	}
}

int main()
{
	string path("D:\\kankan");
	TraverseFolder(path);
	getchar();
	return 0 ;
}


