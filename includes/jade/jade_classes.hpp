/****************************************
*   all the classes
*   including str, list(vec), map, tulple
****************************************/

#ifndef JADE_CLASSES_HPP
#define JADE_CLASSES_HPP

#include "jade_common.hpp"

namespace jadesoul {

typedef std::string stdstr;
typedef std::ostringstream stdoss;

class str : public stdstr {
public:
	str() {}
	str( const stdstr& s ) : stdstr(s) {}
	str( ccptr s ) : stdstr(s) {}
	str( ccptr s, int n ) : stdstr(s, n) {}
	str( stdoss& os ) : stdstr( os.str() ) {}
	str& operator = ( ccptr s ) {
		stdstr::operator = ( s );
		return *this;
	}
	str& trim() {
		{
			str::iterator it = begin();
			str::iterator hi = end();
			for ( ; it != hi && isspace(*it); ++it );
			erase( begin(), it );
		}
		{
			str::reverse_iterator it = rbegin();
			str::reverse_iterator hi = rend();
			for ( ; it != hi && isspace(*it); ++it );
			erase(size() - (it - rbegin()), it - rbegin() );
		}
		return *this;
	}

	str operator ()(int a, int b) {
		return substr(a, b);
	}

	void format(const char* fmt, ... ) {
		stdoss oss;
		va_list ap;
		va_start(ap, fmt);
		vform(oss, fmt, ap);
		va_end(ap);
		erase();
		append(oss.str());
		// oss.rdbuf()->freeze(false);
	}

	void show() {
		std::cout<<c_str();
	}
};


template<class T>
class list : public std::vector<T> {
	typedef std::vector<T> stdvec;
	//typedef std::vector<T>::iterator stdveciter;
public:
	list() : stdvec() {}
	list( const stdvec& v) : stdvec(v) {}
	list( const T* begin, const T* end ) : stdvec(begin, end) {}
	list( int len, const T& val ) : stdvec(len, val) {}
	list( const list& l ) : stdvec(l.begin(), l.end()) {}
	//~list() { std::vector<int, std::allocator<int> >::~vector(); }
	list & operator = ( list r ) {
		if (this==&r) return *this;
		this->clear();
		stdvec tmp(r.begin(), r.end());
		this->operator =(tmp);
		return *this;
	}

	str tostr() {
		stdoss oss;
		oss<<"[ ";
		int i, n=stdvec::size();
		for (; i<n; ++i) {
			oss<<(*this)[i];
			if (i!=n-1) oss<<", ";
		}
		oss<<" ]";
		return oss.str();
	}
	list operator () (int b, int e) {
		list r;
		if (b==e) return r;
		int i, n=stdvec::size();
		if (b<0) b+=n;
		if (e<0) e+=n;
		if (b<=e) {
			for (i=b; i>=0 && i<n && i<e; ++i) r.push_back((*this)[i]);
		} else {
			for (i=e; i>=0 && i<n; ++i) r.push_back((*this)[i]);
			for (i=0; i>=0 && i<n && i<b; ++i) r.push_back((*this)[i]);
		}
		return r;
	}
};

}



/**
  * sequence generators
  */

//fibonacci old version
class fibonacci_old {
public:
	static int get(int n) {
		if (n==1 OR n==2) return 1;
		else return get(n-1)+get(n-2);
	}

	static vec_int& sequence(vec_int& vec, int size) {
		vec.resize(size);
		for (int i=0; i<size; ++i) {
			if (i==0 OR i==1) vec[i]=1;
			else vec[i]=vec[i-1]+vec[i-2];
		}
		return vec;
	}
};

//fibonacci new version

class sequence_generator {
public:
	virtual void recursive_expression(int)=0;

	vec_int& sequence(vec_int& vec, int size) {
		vec.resize(size);
		v=&vec;
		for (int i=1; i<=size; ++i) {
			recursive_expression(i);
		}
		return vec;
	}

	int& f(int n) {
		return (*v)[n-1];
	}

	int get(int n) {
		vec_int vec;
		sequence(vec, n);
		return vec[n-1];
	}

protected:
	vec_int* v;
};

#define Macro__new_sequence_generator__SequenceName( SN )                   \
class SN : public sequence_generator {                                      \
    void recursive_expression(int n);                                       \
};                                                                          \
void SN :: recursive_expression(int n)


#define new_sequence_generator Macro__new_sequence_generator__SequenceName

new_sequence_generator(fibonacci)
{
	if (n==1 OR n==2) f(n)=1;
	else f(n)=f(n-1)+f(n-2);
}

new_sequence_generator(square)
{
	f(n)=n*n;
}

new_sequence_generator(nagtive)
{
	f(n)=-n;
}



/*
using namespace jadesoul;

template <class T>
str dump(const T& obj,const str& msg="", bool show=true) {
        YAML::Emitter out;
        out << YAML::BeginSeq;
        out << YAML::Flow << obj;
        out <<YAML::EndSeq;
        if (show) std::cout<<msg<<"\n"<<out.c_str()<< "\n\n";
        return out.c_str();
}

template<class T>
std::ostream& operator << ( std::ostream& os, list<T>& l ) {
    os<<l.tostr();
    return os;
}

//useful macros
#define print(what) std::cout<<what;
#define input(what) std::cin>>what;

*/

//graph data structure

/* template< class T >
class graph {
public:
	typedef vector<T> list;
	vector<list> vertexs;
};
 */




#endif // JADE_CLASSES_HPP
