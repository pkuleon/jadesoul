#include <jade.hpp>

// class str : public string {
// public:
	// str(): string() {
		// cout<<"init a str"<<endl;
	// }
	
	// friend ostream& operator <<(ostream& out, str& s) {
		// string& bs=s;
		// return string::operator <<(out, bs);
		// return out<<string::c_str();
	// }
// };

typedef vector<char> str;
int main() {
	char a[]="123432435";
	str s(a, a+5);
	// s="123";
	cout<<s;
	return 0;
}