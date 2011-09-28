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
	if (str1.length() < str2.length())                   //��֤str1Ϊĸ�����ϳ����ĸ���)
	{
		string strTemp = str1;
		str1 = str2;
		str2 = strTemp;
	}
	
	int * sign = new int[str1.length()];          //sign��洢����ĸ����str1��ÿ��Ԫ��ǰ�������Ӵ�ƥ��Ĺ����Ӵ���
	//����sign[12]==5;��˵����str1[12]��ǰ5��Ԫ��(����[12])������str2��ĳһ��ƥ��
	int length = 0;
	int end = 0;
	for (int i = 0; i < str2.length(); i++)
	{
		for (int j = str1.length() - 1; j >= 0; j-- )
		{
			
			if (str2[i] == str1[j])
			{
				if (i == 0 || j == 0)                          //i==0����ĸ����jԪ�ر�Ȼֻ��ƥ��һ����j==0ͬ��
					sign[j] = 1;          
				else                                           //���ڸô�jƥ�䣬�����Ӵ�����+1
					sign[j] = sign[j - 1] + 1;
			}
			else                                               //��ƥ�䣬���λ�õ�sign����
				sign[j] = 0;
			if (sign[j] > length)                             //����洢
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

