#include<iostream>
#include<vector>
#include<string>
using namespace std;

class part {
private:
	string s;
public:
	part(string& part_str):s(part_str){};
	char left() {
		return s.at(0);
	}
	char right() {
		return s.at(s.size()-1);
	}
}


int main() {
	string s;
	while(cin>>s)
		cout<<deal(s)<<endl;
}