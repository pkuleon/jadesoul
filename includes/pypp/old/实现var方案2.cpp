#include <jade.hpp>
#include <typeinfo>

// enum types {Int, CInt, UInt, CUInt, Char, CChar, Float, CFloat, Double, CDouble}
enum types {Unknow, Int, CInt, Count};


#define showt(tmp) cout<<typeid(tmp).name()<<endl
#define showp(p) cout<<p<<endl
#define msg(s) cout<<#s<<endl
//#define dbg(msg) cout<<"creating a new var: "<<#msg<<" : "<<r<<" : "<<this<<endl
#define dbg(msg)
class var {
public:
	int * p;//pointer to any type of object
	union {
		sint1 si1;
		uint1 ui1;
		sint2 si2;
		uint2 ui2;
		sint4 si4;
		uint4 ui4;
		sint8 si8;
		uint8 ui8;
	} v;
	
	var() {cout<<"in defalt constructor: this="<<this<<" p="<<p<<endl;p=0;}
	// ~var() {cout<<"in defalt destructor: this="<<this<<" p="<<p<<endl;}
	
	//------------------------	for char
	
	var(sint1& r) {dbg(sint1);p=(int*)&r;}
	var(const sint1& r) {dbg(const sint1);v.si1=r;p=(int*)&v.si1;}
	var(uint1& r) {dbg(uint1);p=(int*)&r;}
	var(const uint1& r) {dbg(const uint1);v.ui1=r;p=(int*)&v.ui1;}
	
	char& schar() {return *(char*)p;}
	uint1& uchar() {return *(uint1*)p;}
	
	//------------------------	for short
	
	var(sint2& r) {dbg(sint2);p=(int*)&r;}
	var(const sint2& r) {dbg(const sint2);v.si2=r;p=(int*)&v.si2;}
	var(uint2& r) {dbg(uint2);p=(int*)&r;}
	var(const uint2& r) {dbg(const uint2);v.ui2=r;p=(int*)&v.ui2;}
	
	short& sshort() {return *(short*)p;}
	uint2& ushort() {return *(uint2*)p;}
	
	//------------------------	for int
	
	var(sint4& r) {dbg(sint4);p=(int*)&r;}
	var(const sint4& r) {dbg(const sint4);v.si4=r;p=(int*)&v.si4;}
	var(uint4& r) {dbg(uint4);p=(int*)&r;}
	var(const uint4& r) {dbg(const uint4);v.ui4=r;p=(int*)&v.ui4;}
	
	int& sint() {return *(int*)p;}
	uint4& uint() {return *(uint4*)p;}
	
	//------------------------	for long long
	
	var(sint8& r) {dbg(sint8);p=(int*)&r;}
	var(const sint8& r) {dbg(const sint8);v.si8=r;p=(int*)&v.si8;}
	var(uint8& r) {dbg(uint8);p=(int*)&r;}
	var(const uint8& r) {dbg(const uint8);v.ui8=r;p=(int*)&v.ui8;}
	
	int8& slong() {return *(int8*)p;}
	uint8& ulong() {return *(uint8*)p;}
	
	//------------------------	for strings
	//deal with ref and ptr to an exist string object and ptr to a char (C-style string)
	//usage examples:
	//		string s; 
	//		var v=s;	var v(s);
	//		var w=&s;	var	w(&s);
	//		w=s;		w=
	//		char *p="abc";	char p[10]="abc";
	//		var s=p;	var s(p);
	//		cout<<s.str();
	//important notes:
	//		will not work with temp object : for example var s=string("tmp");
	//		because string("tmp") is destructed when calling var(string &r)
	//		assignment of a tmp obj will not working, var c;	c=string(tmp);
	//		but string s("tmp"); var c; c=s;	works fine
	//		because c=s fist construct a tmp var obj string(s), then copy construct it to c
	
	var(string& r) {dbg(string &);p=(int*)r.c_str();}
	var(const string& r) {dbg(const string &);p=(int*)r.c_str();}
	var(string* r) {dbg(string *);p=(int*)r->c_str();}
	var(const string* r) {dbg(const string *);p=(int*)r->c_str();}
	var(char* r) {dbg(char *);p=(int*)r;}
	var(const char* r) {dbg(const char *);p=(int*)r;}//maybe there is some ploblem in this way
	char* str() {return (char*)p;}
	//var(const string& r) {dbg(const sint8);v.s=r;p=(int*)&v.s;}
	
	
};

int main() {
	// var c=2ll;
	// c=-1;//先构造临时变量var(-1), 再调用拷贝构造函数，再析构临时变量
	// cout<<c.sint()<<endl;
	// cout<<c.uint()<<endl;
	
	var s;
	s=1;
	cout<<s.p<<" : "<<s.v.si4<<" : "<<s.v.si8<<" : "<<s.str()<<endl;
	s="jadesoul";
	cout<<s.p<<" : "<<s.v.si4<<" : "<<s.v.si8<<" : "<<s.str()<<endl;
	
	return 0;
}


// template<class T>
// class varible : public var {
// public:
	// typedef T value_t;

	// varible(const varible& r) {
		// if (this!=&r) p=r.p;
	// }
	
	// varible(T& r) {
		// p=(int *)&r;
	// }
	
	// varible& operator =(varible& r) {
		// if (this!=&r) p=r.p; return *this;
	// }
	
	// T& operator *() { return *((T*)p); }
	// T& operator [](int ind) { return ind; }
	// varible& operator =(T& r) { p=(int *)&r; return *this; }

// };


// template<class T>
// varible<T> to_var(T& t) {
	// varible<T> a=t;
	// return a;
// }

// template<class T>
// varible<T> to_var(const T& t) {
	// T x=t;
	// varible<T> a=x;
	// return a;
// }



