#include <jade.hpp>

// template<class Container>
// inline size_t len(const Container& c) {
	// return c.size();
// }

// size_t len(const char * p) {
	// return strlen(p);
// }

// size_t len(char * p) {
	// return strlen(p);
// }



// template<class ContainerA, class ContainerB=ContainerA, class TypeA=typename ContainerA::value_type, class TypeB=typename ContainerB::value_type, class IteratorA=ContainerA::const_iterator, class IteratorB=ContainerB::const_iterator>
// class zip {
// public:
	// vector< pair<TypeA, TypeB> > v;
	// zip(const ContainerA& a, const ContainerB& b) {
		// assert(len(a)==len(b));
		// IteratorA ia=a.begin(), ea=a.end();
		// IteratorB ib=b.begin();
		// for (; ia!=ea; ++ia, ++ib) v.push_back(make_pair<TypeA, TypeB>(*ia, *ib));
	// }
// };

typedef vector<int> line;
int main() {
	line a(3, 0), b(3, 1);
	zip<line> z(a, b);
	return 0;
}