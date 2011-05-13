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
	int boolean=base+3;	//boolean type
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
	int veryend=vt::obj::end;//21
};


// 旨在构造一种统一类型，可以包装各种基本类型和类类型，通过在构造时记录包装的类型，在共有操作时
// 自动选择相应类型的合理操作，另外，还可以给各种基本类型增加方法，增强其功能，或是对复杂类类型做API代理
// 实现更友好方便的容器、序列操作接口,再次，实现C++本身不提供但应用需要的各种方便的基本序列操作方法
// 如print, split, replace等，也在内部使用迭代器以达到高性能，同时提供各种遍历接口

// var的思想部分类似jquery对DOM的各种类型封装，统一接口
// 统一类型使得基本的容器类型的特性可以得到充分利用

// 对于临时基本类型，var将它的副本保存在自己的对象内存区内，对于非临时的基本类型，则仅保留其指针
// 对于更加复杂的类类型如string和vector，由于其大小未知且可变，不可能都拷贝副本到var内部
// 因此var无法处理复杂类型的临时对象, 必须先定义，再将引用或指针传给var构造函数
// 对于这些非临时复杂类型，var可以根据传入的其引用记录其指针，或直接记录传入的指针，已达到对象封装

// var并不是通过多态来实现类型统一的，使用多态也可以实现类型统一，
// 但在最终操作时还是需要知道类型才能做不同子类的相异方法。且在使用时，每次都得定义基类的指针，
// 指向子类的对象,不是很方便，动态对象还得一个个去负责内存释放，可能需要一种更好的堆自动内存管理方式。
// 或许可以去研究一下placement new重载，和动态内存池管理

// var使用起来就像一种基本数据类型，像int一样，但是又有非常多的成员函数，功能丰富
// 成员函数的名字都尽量简短，像jquery和python那样
// 需要注意的是，var并不是模板类，模板类在静态编译期间对类型要求严格，解引用的时候必须知道类型
// 如果是模板类，就算使用模板类也不能实现一个vector里面装不同的对象类型
// 因此var只能对有限的类型封装，对支持的类都需要手动编写一堆构造函数和相关操作函数
// var的目标是保证性能不会下降很多的情况下极大提升C++的易用性，因此只会对基本内置类型和
// 几个常用的复杂类型封装，它们都是平时使用频率最高的，如果更进一步精简，
// 完全可以把char, short, int, long long都看做number类型，把string, char都看做str类型
// 可以用宏来减少体力劳动，也应当设计机制实现对于新复杂类型的插件式支持

// 对于getter器和setter器，借鉴jqury的val函数的思想,仅用一个函数实现，用传值与不传值(默认参数)加以区分

// 实现了一种局部对象的内存管理机制，即根据一个从一个函数中返回一个临时对象的引用时
	// 如str& str.replace() {} 
	// （返回类型是对象的引用而不是对象的副本可以避免一次临时对象的构造）
// 必须在函数内部构造一个临时str对象，若str s, 在栈中分配一个临时对象,这就导致一个问题
// 临时对象在函数返回后就析构，返回的引用是有问题的，只能在函数中在堆中分配一个对象以解决这个问题
// 但这个对象什么时候被析构其由谁来负责就又成了一个问题

// 设计一个临时对象管理器,内部含有许多stl::list链表, 因为完全不需要随机访问，list能保证插入删除足够快
// 针对每种基本类型，var, list:vector<var>, str:string, tuple:vector<var>, 
// dict:map<var, var>都有一个相应的链表记录所有在var成员函数中临时分配的这种类型的对象
// var有两个静态成员，一个是指向管理器的指针，一个是var类的计数器，当var类第一次被构造时，自动在堆中创建
// 这个全局唯一的临时对象管理器，当var类的最后一个实例被析构时，自动析构临时对象管理器，
// 而临时对象管理器在析构时，会负责析构所有搜集到的指针指向的临时对象
// 只要保证当前作用域中有至少一个var对象，就能保证所有的临时对象不被析构，因此，较好的做法是在main函数中
// 第一行就定义一个var app;或者var root;当main结束时所有的var也该自动析构了
// 注意，var类也可以在堆中创建，这时，var的临时对象管理器中也会记录堆中分配的var的指针
// var的计数器也会加1, 如果这些var等var的计数器到达0才被析构的话，会导致var的计数器总是减不到0，类似死锁
// 解决方法是管理器在记录var的new操作的时候计数，var的内部计数减去管理器的计数到达0时 ，就析构管理器
// 因此必须禁止手动的delete掉任何new出来的var，任何new的var必须让管理器记录，否则就会导致不一致
// 实现的时候，在管理器的成员函数中封装new var操作，并约定禁止手动执行var的delete, 不要在var类之外new var

// 四种基本常用的复杂类型，list, str, tuple, dict, set，在这里，它们不是通过新定义的类来实现的
// 不是严格的数据类型，与其说是数据类型，不如说它们表达的是四种概念
// vt命名空间是用来var所支持的数据类型var types进行的分类
// 每种类型都有对应的基本类型或者复合类型：
// list也是一个var类型，是var对vector<var>的封装
// str则是var对string的封装
// 一个tuple对象也是一个var对象，tuple的行为和list几乎一样，因此只需要定义一个tuple生成函数
// dict是var对stl::map<var, var>的封装，实现任意(var所支持的)类型的键和任意类型的值的键值对
// set就是一个stl::set<var>

// 可能存在的问题有:
		// 一个复杂类的对象被var封装后被析构（可能由于其再堆中被delete,或者是在栈中而作用域结束）
		// 则var封装的指针失效，无法检测，这种情况只能自己做到心中有数，尽量小心
		// 尽量在var封装的复杂对象生命期还有效的作用域内完成对其的操作
		
		// var内部不能封装另外一个var
		// 如果已知var封装的是一个临时变量的指针，可以调用var.del()删掉，会自动检查指针是否再管理器中
		// 如果在也删掉管理器中的指针

		// 完全不支持new []出来的指针的delete []，正好也没有这种需求
// 待处理：
		// 把类的声明和实现分开，想办法用宏解决可能重复的内容
//改进：var的内部数据再继续压缩，当使用了union时，p指针就没有意义了，因为this就是p
//当不适用union时，p指针有用，union不用就浪费了，可以将p指向的类型，以及计数器都放在union中


typedef vector<var>& list;
list a=new_list()


class var {	//4+8+4+4=20 bytes total for each var obj
public:
	typedef vector<var> list;
	//可以将p与union合并，因为当union全部使用的时候，this就是p
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
	static int cnt;//记录本类被构造次数
	
	var() {codemask(cout<<"in default constructor: this="<<this<<" p="<<p<<endl;)init();p=0;}
	~var() {codemask(cout<<"in default destructor: this="<<this<<" p="<<p<<endl;)}
	
	var(const var& r) {
		forbid();//tmp forbid construct from another var
	}
	
	var(var& r) {
		forbid();//tmp forbid construct from another var
	}
	
	//------------------------	utils
	void forbid() {
		assert(false);
	}
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
			} else if (type==vt::boolean) {
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
	
	var(string& r) {dbg(string &);init(vt::str::string);p=(int*)&r;}
	var(const string& r) {dbg(const string &);init(vt::str::string);p=(int*)&r;}
	var(string* r) {dbg(string *);init(vt::str::string);p=(int*)r;}
	var(const string* r) {dbg(const string *);init(vt::str::string);p=(int*)r;}
	var(char* r) {dbg(char *);init(vt::str::cstr);p=(int*)r;}
	var(const char* r) {dbg(const char *);init(vt::str::cstr);p=(int*)r;}//maybe there is some ploblem in this way
	
	string& str() const {return *(string*)p;}
	char* cstr() const {return (char*)p;}
	//var(const string& r) {dbg(const sint8);v.s=r;p=(int*)&v.s;}
	
	//------------------------	for list
	var(list& r) {	//only accept exist obj instead of tmp obj
		dbg(list&);
		p=(int*)&r;
	}
	
	list& lst() const { return *(list*)p; }
	//------------------------	others
	
	friend ostream& operator<<(ostream& out, const var& v) {
		//这样每次对var的运算都要来回判断if很麻烦，效率也低
		//一个想法是创建一个函数表，以type索引，针对每种类型定义一个函数，待实验
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
			} else if (type==vt::boolean) {
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
			if (type==vt::str::cstr) out<<v.cstr();
			else if (type==vt::str::string) out<<v.str();
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
	
	// bad input funciton because don't know the type
	// imagine we need int
	// friend ostream& operator>>(ostream& in, var& v) {
		// int i; in>>i; v.v.si4=i; dbg(input sint4); p=(int*)&v.v.si4; return in;
	// }
	 
	//boolean tests
	
	#define macro_var_boolean_test(is_what, type_name) 	\
	bool is_what() const {	\
		return a.type==vt::type_name;	\
	}
	
	macro_var_boolean_test(is_char, num::schar)
	macro_var_boolean_test(is_int, num::sint)
	macro_var_boolean_test(is_list, obj::list)
	macro_var_boolean_test(is_cstr, str::cstr)
	macro_var_boolean_test(is_string, str::string)
	
	bool is_sequence() const {//is this a sequence container or not
		return is_list() OR is_string();
	}
	
	// asserts
	void assert_sequence() {
		assert(is_sequence());
	}
	
	void assert_string() {
		assert(is_string());
	}
	
	// memory manager
	void del() {	//delete target on heap
		// base on the target type
		if (is_string()) delete (string*)p;
		else delete p;
	}
	
	// methods
	list split() {
		assert_sequence();
		// todo init python like str
		
	}
	
	// list opertions
	var& join() {
		assert_sequence();
	}
	
	template<class T>
	T& tmp_obj_mgr(T* s) {
		s=new T;
		list s;
		s.push_back(var(*s));
		return *s;
	}
	
	
	// string replace() {//return a new string, allocate in heap, managed by this ptr
		// assert_sequence();
		// string * s=new string;
		// tmp_string_link
		
		// tmp_objects_chain.push_back(s);//tmp_objects_chain will be delete finally when var object destruct
	// }
	
	var replace() {
		assert_string();
		
	}
	
	size_t len() {
		assert_sequence();
		if (is_string()) return str().size()
		else if (is_cstr()) return strlen(cstr());
		else if (is_list()) return lst().size();
		assert(false);
		return 0;
	}
	
	//容器操作 operations for sequence
	// is sequence
	
	var& keys() {//return a list contains the keys of a dict
		assert_dict();
		map.
	}
	
	var& values() {//return a list contains the values of a dict
	
	}
	
	bool haskey(var key) {}
	var append(var node) {//append a node to the end of a list
		list& l=lst();
		l.push_back(node);
	}
	
	var extend(var rlist) {//extend a list with another list
		list& l=lst();
		//TODO
	}
	
	void each() {}//for each
	void foreach() {}
	void map(UnaryFunction) {	id, val, }//for list
	
	slice
	add
	dot
	
	var begin() {}
	var next() {}
	bool end() {}
	//最重要的是集合操作，就是list操作
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

// Macro__over_load_dump__ValueType2(var);

template <class T>
T& ref2t(var& v) {
	return *(T*)v.p;
}

template <class T>
T& ptr2t(var* v) {
	return *(T*)v->p;
}


int main() {
	cout<<sizeof(var)<<endl;
	var a;
	// int tmp[]={1,2,3};
	// vec_int c(tmp, tmp+3);
	// print(c);
	
	// var a="jadesoul";
	// print(a);
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
