#define debug
#include <jade.hpp>
#include <typeinfo>

#define showt(tmp) cout<<typeid(tmp).name()<<endl
#define showp(p) cout<<p<<endl
#define msg(s) cout<<#s<<endl


// #define dbg(msg) cout<<"creating a new var: "<<#msg<<" : "<<r<<" : "<<this<<endl
#define dbg(msg)

// #define codemask(...) __VA_ARGS__
#define codemask(...)

// typedef vector<var> list;

namespace pypp {



namespace vt {	//to store the types of a var
	int base=0;
	int undef=base+0;		//sorry, we don't know
	int number=base+1;	//int or short or float
	int string=base+2;		//stl string or c-string
	int charactor=base+3;	//char type
	int object=base+4;		//for object
	int end=base+5;
	int size=end-base;	//no use
	namespace num {	//all number types
		int base=vt::end;
		int sint1=base+0;
		int uint1=base+1;
		int sint2=base+2;
		int uint2=base+3;
		int sint4=base+4;
		int uint4=base+5;
		int sint8=base+6;
		int uint8=base+7;
		int real4=base+8;
		int real8=base+9;
		int end=base+10;
		int size=end-base;
	}
	namespace str {
		int base=vt::num::end;
		int cstr=base+0;
		int string=base+1;
		int end=base+2;
		int size=end-base;
	}
	namespace obj {
		int base=vt::str::end;
		int list=base+0;
		int tuple=base+1;
		int dict=base+2;
		int end=base+3;
		int size=end-base;
	}
	int veryend=vt::obj::end;//20
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
		int1 type;	//it is a string or a number or unknown, 
					//if it is a number, then what is the kind, int or float ?
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
	void init(int type=vt::undef) {
		init_type(type);
	}	//init before any types of constructure
	void init_type(int type) {
		if (!( type>=vt::base AND type<vt::veryend )) type=vt::undef;
		a.type=type;
		
		int subtype;
		if (type<vt::end) {
			if (type==vt::undef) {
				subtype=vt::undef;
			} else if (type==vt::number) {
				subtype=vt::num::sint4;
			} else if (type==vt::string) {
				subtype=vt::str::cstr;
			} else if (type==vt::charactor) {
				subtype=vt::undef;
			} else if (type==vt::object) {
				subtype=vt::obj::list;
			}
		} else if (type<vt::num::end) {
			type=vt::number;
			subtype=type;
		} else if (type<vt::str::end) {
			type=vt::string;
			subtype=type;
		} else if (type<vt::obj::end) {
			type=vt::object;
			subtype=type;
		}
		
		codemask(
			cout<<"type="<<type<<" and subtype="<<subtype<<endl;
		)
	}
	
	inline int type(int t=vt::veryend) {if (t!=vt::veryend) init_type(t); return a.type;}	//get and set type
	inline int attr(int which) { return which; }
	
	
	//------------------------	for char
	
	var(sint1& r) {dbg(sint1);init(vt::num::sint1);p=(int*)&r;}
	var(const sint1& r) {dbg(const sint1);init(vt::num::sint1);v.si1=r;p=(int*)&v.si1;}
	var(uint1& r) {dbg(uint1);init(vt::num::uint1);p=(int*)&r;}
	var(const uint1& r) {dbg(const uint1);init(vt::num::uint1);v.ui1=r;p=(int*)&v.ui1;}
	
	char& schar() const {return *(char*)p;}
	uint1& uchar() const {return *(uint1*)p;}
	
	//------------------------	for short
	
	var(sint2& r) {dbg(sint2);init(vt::num::sint2);p=(int*)&r;}
	var(const sint2& r) {dbg(const sint2);init(vt::num::sint2);v.si2=r;p=(int*)&v.si2;}
	var(uint2& r) {dbg(uint2);init(vt::num::uint2);p=(int*)&r;}
	var(const uint2& r) {dbg(const uint2);init(vt::num::uint2);v.ui2=r;p=(int*)&v.ui2;}
	
	short& sshort() const {return *(short*)p;}
	uint2& ushort() const {return *(uint2*)p;}
	
	//------------------------	for int
	
	var(sint4& r) {dbg(sint4);init(vt::num::sint4);p=(int*)&r;}
	var(const sint4& r) {dbg(const sint4);init(vt::num::sint4);v.si4=r;p=(int*)&v.si4;}
	var(uint4& r) {dbg(uint4);init(vt::num::uint4);p=(int*)&r;}
	var(const uint4& r) {dbg(const uint4);init(vt::num::uint4);v.ui4=r;p=(int*)&v.ui4;}
	
	int& sint() const {return *(int*)p;}
	uint4& uint() const {return *(uint4*)p;}
	
	//------------------------	for long long
	
	var(sint8& r) {dbg(sint8);init(vt::num::sint8);p=(int*)&r;}
	var(const sint8& r) {dbg(const sint8);init(vt::num::sint8);v.si8=r;p=(int*)&v.si8;}
	var(uint8& r) {dbg(uint8);init(vt::num::uint8);p=(int*)&r;}
	var(const uint8& r) {dbg(const uint8);init(vt::num::uint8);v.ui8=r;p=(int*)&v.ui8;}
	
	int8& slong() const {return *(int8*)p;}
	uint8& ulong() const {return *(uint8*)p;}
	
	//------------------------	for float
	
	var(float& r) {dbg(float);init(vt::num::real4);p=(int*)&r;}
	var(const float& r) {dbg(const float);init(vt::num::real4);v.f=r;p=(int*)&v.f;}
	
	float& flt() const {return *(float*)p;}
	float& tofloat() const {return *(float*)p;}
	
	//------------------------	for double
	
	var(double& r) {dbg(double);init(vt::num::real8);p=(int*)&r;}
	var(const double& r) {dbg(const double);init(vt::num::real8);v.d=r;p=(int*)&v.d;}
	
	double& dbl() const {return *(double*)p;}
	double& todouble() const {return *(double*)p;}
	
	
	
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
	
	var(string& r) {dbg(string &);init(vt::str::cstr);p=(int*)r.c_str();}
	var(const string& r) {dbg(const string &);init(vt::str::cstr);p=(int*)r.c_str();}
	var(string* r) {dbg(string *);init(vt::str::cstr);p=(int*)r->c_str();}
	var(const string* r) {dbg(const string *);init(vt::str::cstr);p=(int*)r->c_str();}
	var(char* r) {dbg(char *);init(vt::str::cstr);p=(int*)r;}
	var(const char* r) {dbg(const char *);init(vt::str::cstr);p=(int*)r;}//maybe there is some ploblem in this way
	
	char* str() const {return (char*)p;}
	//var(const string& r) {dbg(const sint8);v.s=r;p=(int*)&v.s;}
	
	//------------------------	for list
	// var(list& r) {	//only accept exist obj instead of tmp obj
		// dbg(list&);
		// p=(int*)&r;
	// }
	
	//------------------------	others
	
	friend ostream& operator<<(ostream& out, const var& v) {
		//这样每次对var的运算都要来回判断if很麻烦，效率也低
		//一个想法是创建一个函数表，以type索引，针对每种类型定义一个函数，
		//	funciton=func_table[type]
		//	function(out, v)
		
		
		int type=v.a.type;
		
		if (type<vt::end) {
			if (type==vt::undef) {
				type=vt::undef;
			} else if (type==vt::number) {
				type=vt::num::sint4;
			} else if (type==vt::string) {
				type=vt::str::cstr;
			} else if (type==vt::charactor) {
				type=vt::undef;
			} else if (type==vt::object) {
				type=vt::obj::list;
			}
		}
		
		if (type>=vt::num::base AND type<vt::num::end) {
			if (type==vt::num::sint1) out<<v.schar();
			else if (type==vt::num::uint1) out<<v.uchar();
			else if (type==vt::num::sint2) out<<v.sshort();
			else if (type==vt::num::uint2) out<<v.ushort();
			else if (type==vt::num::sint4) out<<v.sint();
			else if (type==vt::num::uint4) out<<v.uint();
			else if (type==vt::num::sint8) out<<v.slong();
			else if (type==vt::num::uint8) out<<v.ulong();
			else if (type==vt::num::real4) out<<v.flt();
			else if (type==vt::num::real8) out<<v.dbl();
		} else if (type>=vt::str::base AND type<vt::str::end) {
			if (type==vt::str::cstr) out<<v.str();
		} else if (type>=vt::obj::base AND type<vt::obj::end) {
			out<<"[Unknown Object]";
		} else {
			out<<"[I don't know the type]";
		}
		
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
	 
	//boolean tests
	
	#define var_boolean_test(is_what, type_name) 	\
	bool is_what() const {	\
		return a.type==vt::type_name;	\
	}
	
	var_boolean_test(is_char, num::schar);
	var_boolean_test(is_int, num::sint);
	var_boolean_test(is_list, obj::list);
	var_boolean_test(is_cstr, str::cstr);
	var_boolean_test(is_string, str::string);
	
	//methods
	list split() {
		assert(a.type==vt::obj::list OR a.type==vt::obj::str);
		//todo init python like str
		
	}
	list join() {}
	string replace() {}
	size_t len() {
		assert(a.type==vt::obj::list OR a.type==vt::obj::str);
	}
	
	//容器操作 operations for sequence
	is sequence
};




}	//end of namespace pypp

using pypp::var;
typedef var::list lst;

#define Macro__over_load_dump__ValueType2( T )                           \
inline void dump( const T & v, ostream & out=cout ) {                   \
    out<<v<<endl;                                                       \
};                                                                      \
inline void dump( T & v, ostream & out=cout ) {                   \
    out<<v<<endl;                                                       \
};                                                                      \
inline void dump( T * v, ostream & out=cout ) {                         \
    out<<v<<endl;                                                       \
}

Macro__over_load_dump__ValueType2(var);

template <class T>
T& ref2t(var& v) {
	return *(T*)v.p;
}

template <class T>
T& ptr2t(var* v) {
	return *(T*)v->p;
}


int main() {

	int tmp[]={1,2,3};
	vec_int c(tmp, tmp+3);
	print(c);
	
	var a="jadesoul";
	print(a);
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
