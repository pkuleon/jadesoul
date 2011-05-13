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



// template<class ContainerA, class ContainerB=ContainerA, class TypeA=typename ContainerA::value_type, class TypeB=typename ContainerB::value_type, class IteratorA=ContainerA::iterator, class IteratorB=ContainerB::iterator>
// class zip {
// public:
	// vector< pair<TypeA*, TypeB*> > v;
	// zip(ContainerA& a, ContainerB& b) {
		// assert(len(a)==len(b));
		// IteratorA ia=a.begin(), ea=a.end();
		// IteratorB ib=b.begin();
		// for (; ia!=ea; ++ia, ++ib) v.push_back(make_pair<TypeA*, TypeB*>(&(*ia), &(*ib)));
	// }
// };

// typedef vector<int> line;
// typedef vector<char> link;

class var {
protected:
	int * p;//pointer to any type of object
public:
	var() {
		p=0;
	}
};

template<class T>
class varible : public var {
public:
	typedef T value_t;

	varible(const varible& r) {
		if (this!=&r) p=r.p;
	}
	
	varible(T& r) {
		p=(int *)&r;
	}
	
	varible& operator =(varible& r) {
		if (this!=&r) p=r.p; return *this;
	}
	
	T& operator *() { return *((T*)p); }
	T& operator [](int ind) { return ind; }
	varible& operator =(T& r) { p=(int *)&r; return *this; }

};


template<class T>
varible<T> to_var(T& t) {
	varible<T> a=t;
	return a;
}

template<class T>
varible<T> to_var(const T& t) {
	T x=t;
	varible<T> a=x;
	return a;
}

int main() {
	int n=101;
	varible<int> a=n;
	var& b=to_var(n);
	// *b;
	cout<<a[1];
	return 0;
}

// class lst {
// public:	
// }


// int main() {
	// line a(3, 0);
	// link b(3, 1);
	// zip<line, link> z(a, b);
	// return 0;
// }

