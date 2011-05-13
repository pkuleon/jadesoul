#include <jade.hpp>

template<class Container>
size_t len(const Container& c) {
	return c.size();
}

size_t len(const char * p) {
	return strlen(p);
}

size_t len(char * p) {
	return strlen(p);
}

#include "tuple_types.hpp" 

typedef tuple5<string, char, int, float> tuple;

int main() {
	tuple a;
	cin>>a;
	cout<<a;
	return 0;
}