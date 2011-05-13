#define debug
#define googletest
#include <jade.hpp>
#include <typeinfo>
#include <bitset>
#include <set>

#define showt(tmp) cout<<typeid(tmp).name()<<endl
#define showp(p) cout<<p<<endl
#define msg(s) cout<<#s<<endl

#define dbg(msg) cout<<"creating a new var: "<<#msg<<" : "<<r<<" : "<<this<<endl
// #define dbg(msg)

#define codemask(...) __VA_ARGS__
// #define codemask(...)

// typedef vector<var> list;

class memmgr;
class var;

template<class T>//implemention of reference count to a heap object
class heapobj {//a class to represent a dynamic allocated one object in heap (note: only one obj)
public:
	heapobj() { malloc(); }
	~heapobj() { free(); }
	T* get() {//get a ptr to the obj, used when a new var wants share the ptr to the heap obj
		assert(p!=0);
		// if (p==0) return 0;
		inc();
		return p;
	}
	void release() {//release the ptr to the obj, used when a exist var do not use target any more
		if (p==0) return;
		dec();
	}
	T& ref() {//get the refernce, be careful, do not delete p outside
		assert(p!=0);
		return *p;
	}
	T* ptr() {//get the pointer, be careful, do not delete p outside
		assert(p!=0);
		return p;
	}
	bool empty() const {//test if target has been deleted, 
		return p==0;//used by memory manager to clean links
	}
	const uint cnt() const {
		return refcnt;
	}
	/* void suiside() {
		delete this;
	} */
private:
	inline void malloc() { p=new T; refcnt=0; }
	inline void free() { if (p!=0) { codemask(cout<<"free heapobj target with p="
					<<p<<" refcnt="<<refcnt<<endl;) delete p; p=0; refcnt=0; } }
	inline void inc() { ++refcnt; }
	inline void dec() { if (refcnt>0) --refcnt; if (refcnt==0) free(); }
private://data
	T* p;//ptr to the obj in heap
	uint refcnt;//the refernce count to this object, 
			//equals to how many times calling get() without a del()
};


namespace py {
	typedef string str;
	typedef vector<var> list;
	typedef std::list<var> tuple;
	typedef std::set<var> set;
	typedef std::map<var, var> dict;
}

class memmgr {	//smart heap memory manager
public:
	typedef py::str str;
	typedef py::list list;
	typedef py::tuple tuple;
	typedef py::set set;
	typedef py::dict dict;
	
	typedef heapobj<py::str> heapstr;
	typedef heapobj<py::list> heaplist;
	typedef heapobj<py::tuple> heaptuple;
	typedef heapobj<py::set> heapset;
	typedef heapobj<py::dict> heapdict;
	
	typedef std::list<heapstr*> strlink;
	typedef std::list<heaplist*> listlink;
	typedef std::list<heaptuple*> tuplelink;
	typedef std::list<heapset*> setlink;
	typedef std::list<heapdict*> dictlink;
private:
	strlink strlnk;
	listlink listlnk;
	tuplelink tpllnk;
	setlink setlnk;
	dictlink dictlnk;
public:
	int a;
	memmgr() {
		show_state("when init");
	}
	~memmgr() {
		show_state("before delete");
		
		#define macro_delete_link(lnk) while(NOT lnk.empty()) { \
			codemask(cout<<"delete a heapobj in "<<#lnk<<endl;)	\
			delete lnk.front(); lnk.pop_front(); }
		macro_delete_link(strlnk)
		macro_delete_link(listlnk)
		macro_delete_link(tpllnk)
		macro_delete_link(setlnk)
		macro_delete_link(dictlnk)
		#undef macro_delete_link
		
		show_state("after delete");
	}

	void auto_clean() {//automatically clean the heapobj whose target has already been deleted
		#define clean_empty_heapobj_in_link(strlnk, heapstr) strlnk.remove_if(is_target_deleted<heapstr>());
		clean_empty_heapobj_in_link(strlnk, heapstr)
		clean_empty_heapobj_in_link(listlnk, heaplist)
		clean_empty_heapobj_in_link(tpllnk, heaptuple)
		clean_empty_heapobj_in_link(setlnk, heapset)
		clean_empty_heapobj_in_link(dictlnk, heapdict)
		#undef clean_empty_heapobj_in_link
	}
	
	void show_state(const char * msg) {
		cout<<"[ mmgr: "<<msg<<" ] "
			<<" str: "<<strlnk.size()
			<<" list: "<<listlnk.size()
			<<" tuple: "<<tpllnk.size()
			<<" set: "<<setlnk.size()
			<<" dict: "<<dictlnk.size()
			<<endl;
	}
	
	#define macro_new_operator(type, func, lnk) type& func() { type* p=new type; lnk.push_front(p); return *p; }
	macro_new_operator(heapstr, newstr, strlnk)
	macro_new_operator(heaplist, newlist, listlnk)
	macro_new_operator(heaptuple, newtuple, tpllnk)
	macro_new_operator(heapset, newset, setlnk)
	macro_new_operator(heapdict, newdict, dictlnk)
	#undef macro_new_operator
	
	template<class T>
	struct is_target_deleted {//unary predicate to tell if the target of a heapobj is deleted
		bool operator()(T* p) { msg("find one empty heapobj"); return p->empty(); }
	};
} mmgr;	//design this tmp object memmory manager, when program finish, it will clean all


class var {//tmp do not work with const obj, 8 bytes
public:
	typedef py::str str;
	typedef py::list list;
	typedef py::tuple tuple;
	typedef py::set set;
	typedef py::dict dict;
	
	typedef heapobj<py::str> heapstr;
	typedef heapobj<py::list> heaplist;
	typedef heapobj<py::tuple> heaptuple;
	typedef heapobj<py::set> heapset;
	typedef heapobj<py::dict> heapdict;
private:
	union {//data of all kinds of var, only one kind at a time
		union {//for non-const ref=obj& or ptr=&obj in stack, save its pointer
			str* pstr;
			list* plist;
			tuple* ptuple;
			set* pset;
			dict* pdict;
		} stack;//4 bytes
		
		union {//for non-const obj ref or ptr, often created in var member functions, 
				//save its heapobj pointer
			struct {//for str
				heapstr* pheap;//points to the heapobj who points to the real obj on heap
				str* pstr;//the same as pheap->ptr(), but this will be faster 
			} str;
			struct {
				heaplist* pheap;
				list* plist;
			} list;
			struct {
				heaptuple* pheap;
				tuple* ptuple;
			} tuple;
			struct {
				heapset* pheap;
				set* pset;
			} set;
			struct {
				heapdict* pheap;
				dict* pdict;
			} dict;
		} heap;//8 bytes
		
		union {//for const built-in type, save its data, 8 bytes
			sint1 si1;		char c;		//char
			uint1 ui1;		uchar uc;
			sint2 si2;		short s;		//short
			uint2 ui2;		ushort us;
			sint4 si4;		int i;			//int
			uint4 ui4;		uint ui;
			sint8 si8;		slong l;	//long long
			uint8 ui8;		ulong ul;
			real4 r4;		float f;		//float
			real8 r8;		double d;	//double
		} builtin;//8 bytes
		
		struct {//fot fast assignment
			uint low4, high4;
		} dwords;
		struct {//fot fast assignment
			ulong all;
		} dwords64;
	} data;//8 bytes
	union {
		struct {
			//first byte, main obj type
			bool stack:1;//is it a obj in stack
			bool heap:1;//is it a obj in heap
			bool builtin:1;//is it a built-in type
			uchar undef1:5;//tmp no use
			
			//second byte, kinds of obj, no matter in stack or heap
			bool str:1;
			bool list:1;
			bool tuple:1;
			bool set:1;
			bool dict:1;
			uchar undef2:3;//tmp no use
			
			//third byte, kinds of integer built-in types
			bool sint1:1;
			bool uint1:1;
			bool sint2:1;
			bool uint2:1;
			bool sint4:1;
			bool uint4:1;
			bool sint8:1;
			bool uint8:1;
			
			//last byte, kinds of float built-in types
			bool real4:1;
			bool real8:1;
			uchar undef4:6;//tmp no use
		} bits;//hold attributives, 32 attrs in 4 bytes
		struct {
			uint types:8, objs:8, ints:8, floats:8;
		} bytes;
		struct {
			uint low:16, high:16;
		} words;
		struct {
			uint all:32;
		} dwords;
	} attr;//4 bytes

private://funcs
	inline void init() {
		reset_attr();
		reset_data();
	}
	
	inline void reset_attr() {
		attr.dwords.all=0;
	}
	
	inline void reset_data() {
		data.dwords.low4=data.dwords.high4=0;
	}
	
	//boolean tests : test bits
	#define macro_var_boolean_test(func, bit) inline bool func() const { return attr.bits.bit; }
	macro_var_boolean_test(is_stack, stack)
	macro_var_boolean_test(is_heap, heap)
	macro_var_boolean_test(is_builtin, builtin)
	
	macro_var_boolean_test(is_str, str)
	macro_var_boolean_test(is_list, list)
	macro_var_boolean_test(is_tuple, tuple)
	macro_var_boolean_test(is_set, set)
	macro_var_boolean_test(is_dict, dict)
	
	macro_var_boolean_test(is_sint1, sint1)	macro_var_boolean_test(is_schar, sint1)
	macro_var_boolean_test(is_uint1, uint1)	macro_var_boolean_test(is_uchar, uint1)
	macro_var_boolean_test(is_sint2, sint2)	macro_var_boolean_test(is_sshort, sint2)
	macro_var_boolean_test(is_uint2, uint2)	macro_var_boolean_test(is_ushort, uint2)
	macro_var_boolean_test(is_sint4, sint4)	macro_var_boolean_test(is_sint, sint4)
	macro_var_boolean_test(is_uint4, uint4)	macro_var_boolean_test(is_uint, uint4)
	macro_var_boolean_test(is_sint8, sint8)	macro_var_boolean_test(is_slong, sint8)
	macro_var_boolean_test(is_uint8, uint8)	macro_var_boolean_test(is_ulong, uint8)
	macro_var_boolean_test(is_real4, real4)	macro_var_boolean_test(is_float, real4)
	macro_var_boolean_test(is_real8, real8)	macro_var_boolean_test(is_double, real8)
	#undef macro_var_boolean_test
	
	//more boolen tests
	inline bool is_char() const { return is_schar() OR is_uchar(); }
	inline bool is_short() const { return is_sshort() OR is_ushort(); }
	inline bool is_int() const { return is_sint() OR is_uint(); }
	inline bool is_long() const { return is_slong() OR is_ulong(); }
	
	inline bool is_sequence() const { return is_str() OR is_list(); }
	inline bool is_container() const { return is_str() OR is_list() OR is_set() OR is_dict(); }
	inline bool is_immutable() const { return is_str() OR is_tuple(); }
	inline bool is_obj() const { 
		// return is_str() OR is_list() OR is_tuple() OR is_set() OR is_dict();
		return attr.bytes.objs!=0;//this is much more faster
	}
	inline bool is_num() const { return NOT is_obj(); }
	inline bool is_integer() const { return attr.bytes.ints!=0 AND attr.bytes.floats==0; }
	inline bool is_decimal() const { return attr.bytes.ints==0 AND attr.bytes.floats!=0; }
	inline bool is_real() const { return is_decimal(); }
	
	//set main types
	#define macro_set_type(func, type)\
	inline void func() {				\
		attr.bytes.types=0;			\
		attr.bits.type=1;			\
	}
	macro_set_type(set_type_stack, stack)
	macro_set_type(set_type_heap, heap)
	macro_set_type(set_type_builtin, builtin)
	#undef macro_set_type
	
	//set obj types
	#define macro_set_obj(func, obj)	\
	inline void func() {				\
		attr.bytes.objs=0;			\
		attr.bits.obj=1;				\
	}
	macro_set_obj(set_obj_str, str)
	macro_set_obj(set_obj_list, list)
	macro_set_obj(set_obj_tuple, tuple)
	macro_set_obj(set_obj_set, set)
	macro_set_obj(set_obj_dict, dict)
	#undef macro_set_obj
	
	//set built-in types
	#define macro_set_builtin(func, builtin)	\
	inline void func() {					\
		attr.words.high=0;	\
		attr.bits.builtin=1;				\
	}
	macro_set_builtin(set_builtin_sint1, sint1)
	macro_set_builtin(set_builtin_uint1, uint1)
	macro_set_builtin(set_builtin_sint2, sint2)
	macro_set_builtin(set_builtin_uint2, uint2)
	macro_set_builtin(set_builtin_sint4, sint4)
	macro_set_builtin(set_builtin_uint4, uint4)
	macro_set_builtin(set_builtin_sint8, sint8)
	macro_set_builtin(set_builtin_uint8, uint8)
	macro_set_builtin(set_builtin_real4, real4)
	macro_set_builtin(set_builtin_real8, real8)
	#undef macro_set_builtin
	
	
	
public://funcs
	var();
	~var();
	
	#define macro_construct_from_builtin_type(sint1, set_builtin_sint1, si1, schar)\
	var(sint1& r) {\
		dbg(sint1);\
		init();\
		set_type_builtin();\
		set_builtin_sint1();\
		data.builtin.si1=r;\
	}\
	var(const sint1& r) {\
		dbg(const sint1);\
		init();\
		set_type_builtin();\
		set_builtin_sint1();\
		data.builtin.si1=r;\
	}\
	sint1 schar() const {\
		return data.builtin.si1;\
	}
	macro_construct_from_builtin_type(sint1, set_builtin_sint1, si1, schar)
	macro_construct_from_builtin_type(uint1, set_builtin_uint1, ui1, uchar)
	macro_construct_from_builtin_type(sint2, set_builtin_sint2, si2, sshort)
	macro_construct_from_builtin_type(uint2, set_builtin_uint2, ui2, ushort)
	macro_construct_from_builtin_type(sint4, set_builtin_sint4, si4, sint)
	macro_construct_from_builtin_type(uint4, set_builtin_uint4, ui4, uint)
	macro_construct_from_builtin_type(sint8, set_builtin_sint8, si8, slong)
	macro_construct_from_builtin_type(uint8, set_builtin_uint8, ui8, ulong)
	macro_construct_from_builtin_type(real4, set_builtin_real4, r4, flt)
	macro_construct_from_builtin_type(real8, set_builtin_real8, r8, dbl)
	#undef macro_construct_from_builtin_type
	
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
	
	var(string& r) {//assume that string is in stack, do never use var(*(new string()))
		dbg(string &);//or var s=string()
		
		set_type_stack();
		set_obj_str();
		data.stack.pstr=&r;
	}
	var(const string& r) {//for const, copy construct it in heap
		dbg(const string &);
		construct_from_const_cstr(r.c_str());
	}
	
private:
	void construct_from_const_cstr(const char* r) {//for a c-style string, convert it to a heapstring
		set_type_heap();
		set_obj_str();
		data.heap.str.pheap=&mmgr.newstr();//new a heapstr, automatically record it in link list
		codemask(cout<<"in construct_from_const_cstr increase the heapstr refcnt: "
					<<data.heap.str.pheap->cnt()+1<<"="<<data.heap.str.pheap->cnt()<<"+1"<<endl;)
		data.heap.str.pstr=data.heap.str.pheap->get();//cache the target ptr, inc the refcnt to 1
		data.heap.str.pstr->assign(r);//assign r to the string
	}
	
public:
	var(char* r) {//special, from a c-style string
		dbg(char *);
		construct_from_const_cstr(r);
	}
	var(const char* r) {//special, from a const c-style string
		dbg(const char *);
		construct_from_const_cstr(r);
	}
	
	string tostr() {//do not return ref or ptr for safe
		if (is_str()) {
			if (is_stack()) return *data.stack.pstr;
			if (is_heap()) return *data.heap.str.pstr;
		}
		//TODO: convert non-string to a string
		return "TODO: convert non-string to a string";
	}
	const char* cstr() const {//design this func just for fast speed, only for str on heap or stack
		if (is_str()) {
			if (is_stack()) return (*data.stack.pstr).c_str();
			if (is_heap()) return (*data.heap.str.pstr).c_str();
		}
		return "ERROR: this var seems not a string";
	}
	
	//in member funcions of var, there is no need new var manually, because if forget
	//to delete it, the obj in heap if it points to , will remain not been deleted
	//creating a var obj in stack is better, have fun using copy constructors :)
	//just treat var as an built-in type like int
	

	//------------------------	for list
	// var(list& r) {	//only accept exist obj instead of tmp obj
		// dbg(list&);
		// p=(int*)&r;
	// }
	
	// list& lst() const { return *(list*)p; }
	//------------------------	others
	
	
	friend ostream& operator<<(ostream& out, const var& v) {
		if (v.is_str()) {
			out<<v.cstr();
		} else if (v.is_num()) {
			if (v.is_schar()) out<<v.schar();
			else if (v.is_uchar()) out<<v.uchar();
			else if (v.is_sshort()) out<<v.sshort();
			else if (v.is_ushort()) out<<v.ushort();
			else if (v.is_sint()) out<<v.sint();
			else if (v.is_uint()) out<<v.uint();
			else if (v.is_slong()) out<<v.slong();
			else if (v.is_ulong()) out<<v.ulong();
			else if (v.is_float()) out<<v.flt();
			else if (v.is_double()) out<<v.dbl();
		} else if (v.is_list()) {
			out<<"TODO";
		} else if (v.is_tuple()) {
			out<<"TODO";
		} else if (v.is_set()) {
			out<<"TODO";
		} else if (v.is_dict()) {
			out<<"TODO";
		} else {
			out<<"[Unknown Type]";
		}
		return out;
	}
	
	var& dump(ostream& out=cout) {
		var& v=*this;
		out<<"<Var this="<<this<<" data: "
			<<hex<<data.dwords.low4<<" "<<hex<<data.dwords.high4<<" attr: "
			<<bitset<8>(attr.bytes.types)<<" "<<bitset<8>(attr.bytes.objs)<<" "
			<<bitset<8>(attr.bytes.ints)<<" "<<bitset<8>(attr.bytes.floats)
			<<">"<<endl;
			
		return v;
	}
	
	// bad input funciton because don't know the type
	// imagine we need int
	// friend ostream& operator>>(ostream& in, var& v) {
		// int i; in>>i; v.v.si4=i; dbg(input sint4); p=(int*)&v.v.si4; return in;
	// }
	
	/*
	// memory manager
	void del() {	//delete target on heap
		// base on the target type
		if (is_str()) delete (string*)p;
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
	
	//ÈÝÆ÷²Ù×÷ operations for sequence
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
	// void map(UnaryFunction) {	id, val, }//for list
	
	void slice() {}
	void add() {}
	void dot() {}
	
	var begin() { return var(); }
	var next() { return var(); }
	bool end() {}
	*/
	
	
	
	var& smart_clone_from_another_var(var& r) {
		var& me=*this;
		if (this==&r) { msg(why you give me the same address?); return me; }
		msg(before smart_clone_from_another_var);dump();
		
		//first check my heap
		if (is_heap()) {
			if (is_str()) data.heap.str.pheap->release();
			else if (is_list()) data.heap.list.pheap->release();
			else if (is_tuple()) data.heap.tuple.pheap->release();
			else if (is_set()) data.heap.set.pheap->release();
			else if (is_dict()) data.heap.dict.pheap->release();
			else assert(false);
		}
		
		//then copy data from you
		data.dwords64.all=r.data.dwords64.all;
		attr.dwords.all=r.attr.dwords.all;
		// memcpy(this, &r, sizeof(var));
		
		//finally check your heap
		if (is_heap()) {
			if (is_str()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heapstr refcnt: "
				<<data.heap.str.pheap->cnt()+1<<"="<<data.heap.str.pheap->cnt()<<"+1"<<endl;)
				data.heap.str.pheap->get();
			}
			else if (is_list()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heaplist refcnt to: "
				<<data.heap.list.pheap->cnt()+1<<"="<<data.heap.list.pheap->cnt()<<"+1"<<endl;)
				data.heap.list.pheap->get();
			}
			else if (is_tuple()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heaptuple refcnt to: "
				<<data.heap.tuple.pheap->cnt()+1<<"="<<data.heap.tuple.pheap->cnt()<<"+1"<<endl;)
				data.heap.tuple.pheap->get();
			}
			else if (is_set()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heapset refcnt to: "
				<<data.heap.set.pheap->cnt()+1<<"="<<data.heap.set.pheap->cnt()<<"+1"<<endl;)
				data.heap.set.pheap->get();
			}
			else if (is_dict()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heapdict refcnt to: "
				<<data.heap.dict.pheap->cnt()+1<<"="<<data.heap.dict.pheap->cnt()<<"+1"<<endl;)
				data.heap.dict.pheap->get();
			}
			else assert(false);
		}
		
		msg(after smart_clone_from_another_var);dump();
		return me;
	}
	
	var(var& r) {
		dbg(construct form var& r);
		init();
		smart_clone_from_another_var(r);
	}
	
	var(const var& r) {
		dbg(construct form const var& r);
		init();
		smart_clone_from_another_var(const_cast<var&>(r));//TODO: maybe there is some problem in this way
	}
	
	var& operator =(var& r) {//for copy construction
		//if r points to a heap obj, share it
		//no need  to init here
		msg(entering copy construct form var& r);
		return smart_clone_from_another_var(r);
	}
	
	#define macro_copy_construct_from_other_type(type)\
	var& operator =(type r) {\
		msg(assignment form type r: about to create tmp var);\
		var tmp(r);\
		return smart_clone_from_another_var(tmp);\
	}\
	var& operator =(const type r) {\
		msg(assignment form type r: about to create tmp var);\
		var tmp(r);\
		return smart_clone_from_another_var(tmp);\
	}
	macro_copy_construct_from_other_type(char*)	//for c-string
	macro_copy_construct_from_other_type(string&)	//for string
	macro_copy_construct_from_other_type(sint1&)
	macro_copy_construct_from_other_type(uint1&)
	macro_copy_construct_from_other_type(sint2&)
	macro_copy_construct_from_other_type(uint2&)
	macro_copy_construct_from_other_type(sint4&)
	macro_copy_construct_from_other_type(uint4&)
	macro_copy_construct_from_other_type(sint8&)
	macro_copy_construct_from_other_type(uint8&)
	macro_copy_construct_from_other_type(real4&)
	macro_copy_construct_from_other_type(real8&)
	//TODO: for list, tuple , dict
	#undef macro_copy_construct_from_other_type
	
	void mmclean(){//clean tmp mamory links, remove those whose target is empty
		mmgr.auto_clean();
	}
};

var::var() {
	// cout<<sizeof(mmgr)<<"\t"<<mmgr.a<<endl;
	// memmgr::list& a=mmgr.newlist();
	// memmgr::list& b=mmgr.newlist();
	// memmgr::dict& c=mmgr.newdict();
	init();
}

var::~var() {
	//check heap
	if (is_heap()) {
		if (is_str()) {
			codemask(cout<<"in ~var release a heapstr refernce, refcnt: "
				<<data.heap.str.pheap->cnt()<<"-1="<<data.heap.str.pheap->cnt()-1<<endl;)
			data.heap.str.pheap->release();
		}
		else if (is_list()) {
			codemask(cout<<"in ~var release a heaplist refernce, refcnt: "
				<<data.heap.list.pheap->cnt()<<"-1="<<data.heap.list.pheap->cnt()-1<<endl;)
			data.heap.list.pheap->release();
		}
		else if (is_tuple()) {
			codemask(cout<<"in ~var release a heaptuple refernce, refcnt: "
				<<data.heap.tuple.pheap->cnt()<<"-1="<<data.heap.tuple.pheap->cnt()-1<<endl;)
			data.heap.tuple.pheap->release();
		}
		else if (is_set()) {
			codemask(cout<<"in ~var release a heapset refernce, refcnt: "
				<<data.heap.set.pheap->cnt()<<"-1="<<data.heap.set.pheap->cnt()-1<<endl;)
			data.heap.set.pheap->release();
		}
		else if (is_dict()) {
			codemask(cout<<"in ~var release a heapdict refernce, refcnt: "
				<<data.heap.dict.pheap->cnt()<<"-1="<<data.heap.dict.pheap->cnt()-1<<endl;)
			data.heap.dict.pheap->release();
		}
		else assert(false);
	}
}

var list() {
	// py::list& a=mmgr.newlist();
	return var();
}

var str() {
	// py::str& a=mmgr.newstr();
	return var();
}

void test() {
	cout<<"this is the first test case"<<endl;
}

gtest(test1) {
	// for_n(i, 10) {
		// var a=i+40;
		// cout<<a.uchar()<<endl;	
	// }
	// const char *p="abc";
	// var a="ac";
	
	
	// var a=2;
	// a.dump();
	// cout<<sizeof(a)<<" "<<sizeof(var)<<endl;
	// string s="hi";
	// a=4;

	// a.dump();
	// cout<<sizeof(a)<<" "<<sizeof(var)<<endl;
	// cout<<a<<endl;

	var a="hi";
	var b=a;
	cout<<sizeof a<<endl;
}