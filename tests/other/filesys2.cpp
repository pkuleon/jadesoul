/**
 * File: filesys2.cpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2012-01-08 15:26:25.642000
 * Written In: Peking University, beijing, China
 */
#include <afx.h>
#include <jadesoul.hpp>
#include <iostream>

using namespace std;

uint cnt=0;
 
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
			++cnt;
			CString str = finder.GetFilePath();
			cout << cnt<<"\t"<< (LPCTSTR) str << endl;
			Recurse(str);
		}
	}
	finder.Close();
}

void main()
{
	Recurse(_T("D:"));
}

