#include <jade.hpp>

template<class Container>
size_t len(const Container& c) {
	return c.size();
}

// size_t len(const char * p) {
	// return strlen(p);
// }

// size_t len(char * p) {
	// return strlen(p);
// }

class A {
	int a;
public:
	A() {
		a=99;
		cout<<a<<endl;
		cout<<this<<endl;
		delete this;
		cout<<a<<endl;
	}
	~A() {
		cout<<this<<endl;
	}
};

int main() {
	A a;
	A *b=new A;
	
	return 0;
}