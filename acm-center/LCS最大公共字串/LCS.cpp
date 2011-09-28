/**
 * File: LCS.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-28 22:47:00.081000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "jadesoul.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string lcs_search(string& str1, string& str2)
{
	if (str1.length() < str2.length())                   //保证str1为母串（较长的哪个串)
	{
		string strTemp = str1;
		str1 = str2;
		str2 = strTemp;
	}
	
	int * sign = new int[str1.length()];          //sign里存储的是母串（str1）每个元素前向能与子串匹配的公共子串数
	//比如sign[12]==5;则说明从str1[12]往前5个元素(包括[12])，能与str2的某一段匹配
	int length = 0;
	int end = 0;
	for (int i = 0; i < str2.length(); i++)
	{
		for (int j = str1.length() - 1; j >= 0; j-- )
		{
			
			if (str2[i] == str1[j])
			{
				if (i == 0 || j == 0)                          //i==0，则母串的j元素必然只能匹配一个，j==0同理
					sign[j] = 1;          
				else                                           //由于该次j匹配，所以子串可以+1
					sign[j] = sign[j - 1] + 1;
			}
			else                                               //不匹配，则此位置的sign归零
				sign[j] = 0;
			if (sign[j] > length)                             //结果存储
			{
				length = sign[j];
				end = j;
			}
		}
	}
	delete []sign;
	return str1.substr(end - length + 1, length);
}

int main()
{  
	string a="123456789abcdefghijklmn2131.dfdfdf", b="123456sdkk123456789abcddkfdfkd123456789abcde";
	cout<<lcs_search(a,b)<<endl; 
	return 0;
}

