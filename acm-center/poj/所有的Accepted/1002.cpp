#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

map<char, char> m;

struct number {
	number(const string& str) {
		num.reserve(8);
		for ( int i=0; i<str.size(); ++i ) {
			char ch=str[i];
			if (ch!='-') {
				if (num.size()==3)
					num.push_back('-');
				if (ch>='0' && ch<='9')
					num.push_back(ch);
				if (ch>='A' && ch<='Z')
					num.push_back(m[ch]);
			}
				
		}
	}
	string num;
};

int times=0;

void f(pair<string, int> p) {
	if (p.second>1) {
		++times;
		cout<<p.first<<' '<<p.second<<endl;
	}
}

int main() {
			
	m['A'] = '2';
	m['B'] = '2';
	m['C'] = '2';

	m['D'] = '3';
	m['E'] = '3';
	m['F'] = '3';

	m['G'] = '4';
	m['H'] = '4';
	m['I'] = '4';

	m['J'] = '5';
	m['K'] = '5';
	m['L'] = '5';

	m['M'] = '6';
	m['N'] = '6';
	m['O'] = '6';

	m['P'] = '7';
	m['R'] = '7';
	m['S'] = '7';

	m['T'] = '8';
	m['U'] = '8';
	m['V'] = '8';

	m['W'] = '9';
	m['X'] = '9';
	m['Y'] = '9';
		
	map<string, int> appers;
	int count;
	string str;
	
	cin>>count;
	while(count>0){
		--count;
		cin>>str;
		number n(str);
		appers[n.num] +=1;
	}
	
	times=0;
	for_each (appers.begin(), appers.end(), f);
	if (times==0)
		cout<<"No duplicates.";
}
