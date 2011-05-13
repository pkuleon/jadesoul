#define debug
#include <jade.hpp>
#include <typeinfo>

#define showt(tmp) cout<<typeid(tmp).name()<<endl
#define showp(p) cout<<p<<endl
#define msg(s) cout<<#s<<endl


#define dbg(msg) cout<<"creating a new var: "<<#msg<<" : "<<r<<" : "<<this<<endl
// #define dbg(msg)

#define codemask(...) __VA_ARGS__
// #define codemask(...)

// typedef vector<var> list;

namespace pypp {

namespace vt {
	int undef=0;
	int num=1;
	int str=2;
	int chr=3;
	int list=4;
	int size=5;
};

class var {	//4+8+4+4=20 bytes total for each var obj
public:
	typedef vector<var> list;
	int * p;//pointer to any type of non-const object, or hold any other kind of pointer
	union {	//pool to hold one const built-in types
		sint1 si1;		char c;		//char
		uint1 ui1;	uchar uc;
		sint2 si2;		short s;		//short
		uint2 ui2;	ushort us;
		sint4 si4;		int i;			//int
		uint4 ui4;	uint ui;
		sint8 si8;					//long long
		uint8 ui8;
		real4 r4;		float f;		//float
		real8 r8;		double d;	//double
	} v;	//just 8 bytes of val, hold the values
	struct {
		int1 type;	//it is a string or a int or unknown
		int1 small;
		int2 big;
	} a;	//4 bytes of attr, specify the attributives of this var
	// char& c;
	// short& s;
	// int& i;
	// float& f;
	// double& d;
	
	var() {codemask(cout<<"in default constructor: this="<<this<<" p="<<p<<endl;)init();p=0;}
	~var() {codemask(cout<<"in default destructor: this="<<this<<" p="<<p<<endl;)}
	
	//------------------------	utils
	void init() {
		a.type=vt::undef;
		
		codemask(
			cout<<1987<<endl;
		)
	
	}	//init before any types of constructure
	inline int type(int t=vt::size) {if (t!=vt::size) a.type=t; return a.type;}	//get and set type
	inline int attr(int which) { return which; }
	
	
	//------------------------	for char
	
	var(sint1& r) {dbg(sint1);init();p=(int*)&r;}
	var(const sint1& r) {dbg(const sint1);init();v.si1=r;p=(int*)&v.si1;}
	var(uint1& r) {dbg(uint1);init();p=(int*)&r;}
	var(const uint1& r) {dbg(const uint1);init();v.ui1=r;p=(int*)&v.ui1;}
	
	char& schar() {return *(char*)p;}
	uint1& uchar() {return *(uint1*)p;}
	
	//------------------------	for short
	
	var(sint2& r) {dbg(sint2);init();p=(int*)&r;}
	var(const sint2& r) {dbg(const sint2);init();v.si2=r;p=(int*)&v.si2;}
	var(uint2& r) {dbg(uint2);init();p=(int*)&r;}
	var(const uint2& r) {dbg(const uint2);init();v.ui2=r;p=(int*)&v.ui2;}
	
	short& sshort() {return *(short*)p;}
	uint2& ushort() {return *(uint2*)p;}
	
	//------------------------	for int
	
	var(sint4& r) {dbg(sint4);init();p=(int*)&r;}
	var(const sint4& r) {dbg(const sint4);init();v.si4=r;p=(int*)&v.si4;}
	var(uint4& r) {dbg(uint4);init();p=(int*)&r;}
	var(const uint4& r) {dbg(const uint4);init();v.ui4=r;p=(int*)&v.ui4;}
	
	int& sint() {return *(int*)p;}
	uint4& uint() {return *(uint4*)p;}
	
	//------------------------	for long long
	
	var(sint8& r) {dbg(sint8);init();p=(int*)&r;}
	var(const sint8& r) {dbg(const sint8);init();v.si8=r;p=(int*)&v.si8;}
	var(uint8& r) {dbg(uint8);init();p=(int*)&r;}
	var(const uint8& r) {dbg(const uint8);init();v.ui8=r;p=(int*)&v.ui8;}
	
	int8& slong() {return *(int8*)p;}
	uint8& ulong() {return *(uint8*)p;}
	
	//------------------------	for float
	
	var(float& r) {dbg(float);init();p=(int*)&r;}
	var(const float& r) {dbg(const float);init();v.f=r;p=(int*)&v.f;}
	
	float& flt() {return *(float*)p;}
	float& tofloat() {return *(float*)p;}
	
	//------------------------	for double
	
	var(double& r) {dbg(double);init();p=(int*)&r;}
	var(const double& r) {dbg(const double);init();v.d=r;p=(int*)&v.d;}
	
	double& dbl() {return *(double*)p;}
	double& todouble() {return *(double*)p;}
	
	
	
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
	
	var(string& r) {dbg(string &);init();a.type=vt::str;p=(int*)r.c_str();}
	var(const string& r) {dbg(const string &);init();a.type=vt::str;p=(int*)r.c_str();}
	var(string* r) {dbg(string *);init();a.type=vt::str;p=(int*)r->c_str();}
	var(const string* r) {dbg(const string *);init();a.type=vt::str;p=(int*)r->c_str();}
	var(char* r) {dbg(char *);init();a.type=vt::str;p=(int*)r;}
	var(const char* r) {dbg(const char *);init();a.type=vt::str;p=(int*)r;}//maybe there is some ploblem in this way
	char* str() const {return (char*)p;}
	//var(const string& r) {dbg(const sint8);v.s=r;p=(int*)&v.s;}
	
	//------------------------	for list
	// var(list& r) {	//only accept exist obj instead of tmp obj
		// dbg(list&);
		// p=(int*)&r;
	// }
	
	//------------------------	others
	
	friend ostream& operator<<(ostream& out, var& v) {
		if (v.type()==vt::str) out<<v.str();
		return out;
	}
	
	var& dump(ostream& out) {
		// return out<<"<Var this="<<&v<<" p="<<v.p<<" int="<<v.v.si4<<" hex="<<hex<<v.v.si8 
			// codemask(<<" : "<<v.str()) 
			// <<">"<<endl;
		// return out<<"<Var this="<<&v
				// <<" p="<<v.p
				// <<" hex="<<hex<<v.v.ui8
				// <<">"<<endl;
		var& v=*this;
		out<<"<Var this="<<&v
			<<" p="<<v.p
			<<" char="<<v.v.c
			<<" short="<<v.v.s
			<<" int="<<v.v.i
			<<" float="<<v.v.f
			<<" double="<<v.v.d
			<<">"<<endl;
		return v;
	}
	
	//bad input funciton because don't know the type
	//imagine we need int
	// friend ostream& operator>>(ostream& in, var& v) {
		// int i; in>>i; v.v.si4=i; dbg(input sint4); p=(int*)&v.v.si4; return in;
	// }
	
	//methods
	// list split() {}
	// list join() {}
	// string replace() {}
	// size_t len() {}
};

}	//end of namespace pypp

using pypp::var;
typedef var::list lst;

template <class T>
T& ref2t(var& v) {
	return *(T*)v.p;
}

template <class T>
T& ptr2t(var* v) {
	return *(T*)v->p;
}

int main() {
	lst a;
	var b="hi, how are you!";
	cout<<b<<endl;
	return 0;
}

/*

int main() {

	cout<<sizeof(var)<<endl;
	
	var s=129;
	cout<<s;
	const uint j=max_uint2;
	s=j;
	cout<<s;
	for_n(i, 4) cout<<hex<<((uint*)(&s)+i)<<" : "<<hex<<*((uint*)(&s)+i)<<endl;
	
	for_n(i, 16) cout<<(uint)*((char*)(&s)+i)<<endl;
	
	s="jadesoul";
	cout<<s;
	
	vector<var> v(10, "jadesoul");
	v[0]=s;
	v[1]=0.1;
	v[2]=213123123123123;
	v[3]='A';
	cout<<ref2t<int>(v[3]);
	return 0;
}


Running Result:

<Var this=0012FF0C p=0012FF14 int=129 hex=fffffffe00000081>
<Var this=0012FF0C p=0012FEFC int=1 hex=426ff700000001>
<Var this=0012FF0C p=004281FC int=8 hex=40d28800000008>
v = [ <Var this=001F1DC8 p=004281FC int=8 hex=40d28800000008>
 <Var this=001F1DD8 p=00428208 int=415a34 hex=4303c000415a34>
 <Var this=001F1DE8 p=00428208 int=415a34 hex=4303c000415a34>
 <Var this=001F1DF8 p=00428208 int=415a34 hex=4303c000415a34>
 <Var this=001F1E08 p=00428208 int=415a34 hex=4303c000415a34>
 <Var this=001F1E18 p=00428208 int=415a34 hex=4303c000415a34>
 <Var this=001F1E28 p=00428208 int=415a34 hex=4303c000415a34>
 <Var this=001F1E38 p=00428208 int=415a34 hex=4303c000415a34>
 <Var this=001F1E48 p=00428208 int=415a34 hex=4303c000415a34>
 <Var this=001F1E58 p=00428208 int=415a34 hex=4303c000415a34>
 ]
 
*/
//next step to do , implement the immutable object
//to enable the str var

//to implement many methods of class var
//for example:
/*
var l;
l=[1,2,3]
var a=1, b=2;
print(a+b);
var s="hi, girl, i love you";
s.split(" ")
typedef vector<var> list;

*/
