//写于2010年3月13日 尚有一些问题
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string deal(const string& sub) {
	string result;
	int size=sub.size();
	if (size==0)
		return result;
	char ch=sub[0];
	if (size==1) {
		if (ch=='(' || ch ==')')
			result = "()";
		else 
			result = "[]";
		return result;
	}
	
	if (ch==')' || ch==']') {
		result = (ch==')')?"()":"[]";
		string tmp(sub.begin()+1, sub.end());
		return result+deal(tmp);
	}
	int i;
	char close;
	if (ch=='(')
		close=')';
	else
		close=']';
	for ( i=1; i<size && ( sub[i]!=ch && sub[i]!=close ); ++i );
	if (i<size) {
		if (sub[i]==ch) {
			string tmp(sub.begin()+1, sub.end());
			return result+ch+close+deal(tmp);
		} else {
			string tmp1(sub.begin()+1, sub.begin()+i);
			string tmp2(sub.begin()+i+1, sub.end());
			return result+ch+deal(tmp1)+close+deal(tmp2);
		}
	} else {
		string tmp(sub.begin()+1, sub.end());
		return result+ch+close+deal(tmp);
	}
	return "error";
}

int main() {
	string s;
	while(cin>>s)
		cout<<deal(s)<<endl;
}




