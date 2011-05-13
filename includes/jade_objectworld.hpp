#ifndef JADE_OBJECTWORLD_HPP
#define JADE_OBJECTWORLD_HPP

#include "jade_global.hpp"
#include "jade_utils.hpp"
#include "jade_algorithm.hpp"

//root base class of object world
class object {
public:
	virtual void show()=0;
};

typedef object*  ref_t;
//#define ref_t object*

vector< ref_t > refs;

void show_ref(ref_t p) {
	p->show();
	cout<<endl;
}

void show_all_refs() {
	cout<<"all refs:\n{"<<endl;
	for_each(refs.begin(), refs.end(), show_ref);
	cout<<"}"<<endl;
}

void del_last_ref() {
	delete refs.back();
	refs.pop_back();
}

void clear_all_refs() {
	int len=refs.size();
	for (int i=0; i<len; ++i) del_last_ref();
}

//reference of type T , or we call box-up or proxy
//note: (NOT C++ refernce T&, but a class within a pointer to T& t)
template< class T >
class ref : public object {
public:
	ref(T& t) {
		p=&t;
		refs.push_back(this);// record it
	}
	inline void show() {
		cout<<p<<" -> "<<*p;
	}
	inline T& refernce() {
		//return *(static_cast<T>(p));
		return *p;
	}
	inline T* pointer() {
		//return static_cast<T>(p);
		return p;
	}
private:
	T* p;
};

/*
//lst : python like list class
class lst {
	lst& operator [](const char * s) {
		s=0;
		return *this;
	}
};
*/

//we can not use box to warp a built-in value, for example box(1)
//because 1 is not a varible and has no accessable memory address
//if we construct a new one, it's hard for us to manage the memory
//so this function forbid to use box(1)
template< class T >
inline ref<T>* box(const T& t) {
	assert ( false );
}

template< class T >
inline ref<T>* box(T& t) {
	return new ref<T>(t);
}

template< class T >
inline T& unbox(ref_t r) {
	return ((ref<T>*)r)->refernce();
}

template< class T >
inline T& unbox(ref<T>* r) {
	return r->refernce();
}

void test_object_world() {

	int a=1;
	vector< ref_t > v;
	v.push_back(box(a));
	vec_int vi=range("1:10").to_vec();
	for (uint i=0; i<vi.size(); i++) {
		v.push_back(box(vi[i]));
	}

	dump(v);

	cout<<endl;

	ref_t r=box(a);
	ref<int>* s=box(a);
	cout<<typeid(r).name()<<endl;
	cout<<typeid(box(a)).name()<<endl;

	cout<<endl;
	cout<<endl;
	cout<<a<<endl;
	unbox<int>(r)=2;
	cout<<a<<endl;
	cout<<box(a)<<endl;
	cout<<unbox(box(a))<<endl;
	a=3;
	cout<<unbox<int>(r)<<endl;// important
	cout<<unbox((ref<int>*)r)<<endl;
	cout<<unbox(box(a))<<endl;
	cout<<unbox(s)<<endl;

	show_all_refs();
	clear_all_refs();
	show_all_refs();


}

//class dot {
//private:
//    int x, y;
//public:
//    dot( int x=0, int y=0 ) : x(x), y(y) {}
//    ~dot() {}
//    dot( const dot& d ) : x(d.x), y(d.y) {}
//    dot& operator = (const dot& d) {
//        if (this!=&d) {
//            x=d.x;
//            y=d.y;
//        }
//        return *this;
//    }
//    dot bigger() {
//        return dot(x+1, y+1);
//    }
//    dot operator () (int type) {
//        dot r;
//        if (type<10) r.x=r.y=10;
//        return r;
//    }
//
//    void show() {
//        std::cout<<"( "<<x<<" , "<<y<<" )\n";
//    }
//};

#endif // JADE_OBJECTWORLD_HPP
