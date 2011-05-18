#ifndef PYPP_HPP_BY_JADESOUL
#define PYPP_HPP_BY_JADESOUL
/**
 * File: pypp.hpp
 * Description: a simple framework to make C++ programming as easy as python
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-12 15:14:02.545000
 * Written In: Peking University, beijing, China
 */

#include <jade.hpp>

#ifdef debug
	#define showt(tmp) cout<<typeid(tmp).name()<<endl
	#define showp(p) cout<<p<<endl
	#define msg(s) cout<<#s<<endl
	#define dbg(msg) cout<<"creating a new var: "<<#msg<<" : "<<r<<" : "<<this<<endl
	#define codemask(...) __VA_ARGS__
#else
	#define showt(tmp)
	#define showp(p)
	#define msg(s)
	#define dbg(msg)
	#define codemask(...)
#endif

#define die {cout<<"die @ "<<__FILE__<<" line:"<<__LINE__<<endl;assert(false);}
#define bye(msg) {cout<<"trace:\n\t"<<#msg<<endl;die;}

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
	inline void free() { if (p!=0) { codemask(cout<<"in heapobj free(): free heapobj target with p="
					<<p<<" refcnt="<<refcnt<<endl;) delete p; p=0; refcnt=0; } }
	inline void inc() { ++refcnt; }
	inline void dec() { if (refcnt>0) --refcnt; if (refcnt==0) free(); }
private://data
	T* p;//ptr to the obj in heap
	uint refcnt;//the refernce count to this object, 
			//equals to how many times calling get() without a del()
};


namespace py {
	typedef std::string str;
	typedef std::vector<var> list;
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
	
	template<class T>
	struct is_target_deleted {//unary predicate to tell if the target of a heapobj is deleted
		bool operator()(T* p) { msg("find one empty heapobj"); return p->empty(); }
	};
	
	void auto_clean() {//the garbage collection
		//automatically clean the heapobj whose target has already been deleted
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
	
} mmgr;	//design this tmp object memmory manager, when program finish, it will clean all


class var {
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
				//save its heapobj pointer, and real obj pointer
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
			uint1 ui1;	uchar uc;
			sint2 si2;		short s;		//short
			uint2 ui2;	ushort us;
			sint4 si4;		int i;			//int
			uint4 ui4;	uint ui;
			sint8 si8;		slong l;		//long long
			uint8 ui8;	ulong ul;
			real4 r4;		float f;		//float
			real8 r8;		double d;	//double
		} builtin;//8 bytes
		
		struct {//fot fast assignment
			uint low4, high4;
		} dwords;
		struct {//fot fast assignment
			ulong all;
		} dwords64;
		struct {//fot fast assignment
			slong all;
		} dwords64signed;
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
	
	//for fast coding
	#define macro_declare_ptr_ref_heap_str(...)\
	heapstr*& h=__VA_ARGS__ data.heap.str.pheap;\
	str*& p=data.heap.str.pstr;\
	str& s=*p;
	
	#define macro_declare_ptr_ref_stack_str(...)\
	str*& p=__VA_ARGS__ data.stack.pstr;\
	str& s=*p;
	
	#define macro_declare_ptr_ref_heap_list(...)\
	heaplist*& h=__VA_ARGS__ data.heap.list.pheap;\
	list*& p=__VA_ARGS__ data.heap.list.plist;\
	list& l=*p;
	
	#define macro_declare_ptr_ref_stack_list(...)\
	list*& p=__VA_ARGS__ data.stack.plist;\
	list& l=*p;
	
	#define macro_declare_ptr_ref_heap_tuple(...)\
	heaptuple*& h=__VA_ARGS__ data.heap.tuple.pheap;\
	tuple*& p=__VA_ARGS__ data.heap.tuple.ptuple;\
	tuple& t=*p;
	
	#define macro_declare_ptr_ref_stack_tuple(...)\
	tuple*& p=__VA_ARGS__ data.stack.ptuple;\
	tuple& t=*p;
	
	#define macro_declare_ptr_ref_heap_set(...)\
	heapset*& h=__VA_ARGS__ data.heap.set.pheap;\
	set*& p=__VA_ARGS__ data.heap.set.pset;\
	set& st=*p;
	
	#define macro_declare_ptr_ref_stack_set(...)\
	set*& p=__VA_ARGS__ data.stack.pset;\
	set& st=*p;
	
	#define macro_declare_ptr_ref_heap_dict(...)\
	heapdict*& h=__VA_ARGS__ data.heap.dict.pheap;\
	dict*& p=__VA_ARGS__ data.heap.dict.pdict;\
	dict& d=*p;
	
	#define macro_declare_ptr_ref_stack_dict(...)\
	dict*& p=__VA_ARGS__ data.stack.pdict;\
	dict& d=*p;
	
	#define macro_declare_me(...) var& me=*this;
	#define macro_new_var_str(s) var s((char*)0);
	#define macro_new_var_list(lst) var lst((var*)0, (var*)0);
	#define macro_new_var_tuple(tpl) var tpl((var*)0, (var*)0, char(0));
	#define macro_new_var_set(st) var st((var*)0, (var*)0, int(0));
	#define macro_new_var_dict(dct) var dct((var*)0, (var*)0, float(0));
private:
	//----------------------------------------- utils
	inline void init_as_undefined() {
		reset_attr();
		reset_data();
	}
	
	inline void reset_attr() {
		attr.dwords.all=0;
	}
	
	inline void reset_data() {
		// data.dwords.low4=data.dwords.high4=0;
		data.dwords64.all=0;
	}
	
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
		attr.bits.obj=1;			\
	}
	macro_set_obj(set_obj_str, str)
	macro_set_obj(set_obj_list, list)
	macro_set_obj(set_obj_tuple, tuple)
	macro_set_obj(set_obj_set, set)
	macro_set_obj(set_obj_dict, dict)
	#undef macro_set_obj
	
	//set built-in types
	#define macro_set_builtin(func, builtin)\
	inline void func() {					\
		attr.words.high=0;				\
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

	void init_as_str(const char* r=0) {//init myself as a new str var
		assert(is_undefined());//this function should only be called by constructors, 
							//each constructor should call init_as_undefined() first
		set_type_heap();
		set_obj_str();
		macro_declare_ptr_ref_heap_str();
		h=&mmgr.newstr();//new a heapstr, automatically record it in link list
		codemask(cout<<"in init_as_str increase the heapstr "<<hex<<h<<" refcnt: "
					<<h->cnt()+1<<"="<<h->cnt()<<"+1"<<endl;)
		p=h->get();//cache the target ptr, inc the refcnt to 1
		if (r!=0) p->assign(r);//assign r to the string
	};
	
	inline void construct_from_const_cstr(const char* r) {//for a c-style string, convert it to a heapstring
		init_as_str(r);
	}
	
	void init_as_list(var* begin=0, var* end=0) {//init myself as a new list var
		assert(is_undefined());
		set_type_heap();
		set_obj_list();
		macro_declare_ptr_ref_heap_list();
		h=&mmgr.newlist();
		codemask(cout<<"in init_as_list increase the heaplist "<<hex<<h<<" refcnt: "
					<<h->cnt()+1<<"="<<h->cnt()<<"+1"<<endl;)
		p=h->get();//cache the target ptr, inc the refcnt to 1
		
		if (begin!=0 AND begin<end) {//init from iterators
			p->assign(begin, end);//assign
		}
	};
	
	void init_as_tuple(var* begin=0, var* end=0) {//init myself as a new tuple var
		assert(is_undefined());
		set_type_heap();
		set_obj_tuple();
		macro_declare_ptr_ref_heap_tuple();
		h=&mmgr.newtuple();
		codemask(cout<<"in init_as_tuple increase the heaptuple "<<hex<<h<<" refcnt: "
					<<h->cnt()+1<<"="<<h->cnt()<<"+1"<<endl;)
		p=h->get();//cache the target ptr, inc the refcnt to 1
		
		if (begin!=0 AND begin<end) {
			p->assign(begin, end);//assign
		}
	};
	
	void init_as_set(var* begin=0, var* end=0) {//init myself as a new set var
		assert(is_undefined());
		set_type_heap();
		set_obj_set();
		macro_declare_ptr_ref_heap_set();
		h=&mmgr.newset();
		codemask(cout<<"in init_as_set increase the heapset "<<hex<<h<<" refcnt: "
					<<h->cnt()+1<<"="<<h->cnt()<<"+1"<<endl;)
		p=h->get();//cache the target ptr, inc the refcnt to 1
		
		if (begin!=0 AND begin<end) {
			p->insert(begin, end);//assign
		}
	};
	
	void init_as_dict(var* begin=0, var* end=0) {//init myself as a new dict var
		assert(is_undefined());
		set_type_heap();
		set_obj_dict();
		macro_declare_ptr_ref_heap_dict();
		h=&mmgr.newdict();
		codemask(cout<<"in init_as_dict increase the heapdict "<<hex<<h<<" refcnt: "
					<<h->cnt()+1<<"="<<h->cnt()<<"+1"<<endl;)
		p=h->get();//cache the target ptr, inc the refcnt to 1
		
		if (end>=begin AND (end-begin)%2==0) {//even key-value pairs
			for (var*  it=begin; it<end; ++it, ++it) {
				(*p)[*it]=*(it+1);//assign
			}
		} else bye(in init_as_dict: you should give me even numbers of vars);
	};
	
	void init_from_vs(vector<str>& vs) {//init from vector<string> parsed by parser
		assert(is_undefined());
		size_t l=vs.size();
		if (l==0) return;//impossible
		smart_clone_from_another_var(parse_vs_slice(vs, 0, l));
	}
	
	var parse_vs_slice(vector<str>& vs, size_t begin, size_t end) {//parse from begin, to end of vs
		size_t l=end-begin, i=begin, e=end, j=e-1, k, m, n;
		assert(l>0);//at least 1
		char t, a, b, x, y;
		if (l==1) {
			t=vs[i][0];
			if (t=='i') {
				return var(atoi(vs[i].c_str()+2));
				// istringstream iss(vs[i].c_str()+2);//to make it bigger
				// sint8 sl;
				// iss>>sl;
				// return var(sl);
			} else if (t=='f') {
				return var(atof(vs[i].c_str()+2));
				// istringstream iss(vs[i].c_str()+2);
				// double db;
				// iss>>db;
				// return var(db);
			} else if (t=='s') {
				return var(vs[i].c_str()+2);
			} else assert(false);
		} else {
			a=vs[i][0];
			b=vs[j][0];
			if (a=='[' && b==']') {
				var lst((var*)0, (var*)0);
				for(k=i+1; k<e; ++k) {
					x=vs[k][0];
					if (x=='i' || x=='f' || x=='s') lst.append(parse_vs_slice(vs, k, k+1));
					else if (x=='[' || x=='(' || x=='<' || x=='{') {
						stack<char> stk;
						stk.push(x);
						m=k;
						while (! stk.empty()) {
							++k;
							if (k==e) assert(false);//if a legal repr, stk should be empty now
							t=stk.top();
							y=vs[k][0];
							if (y=='[' || y=='(' || y=='<' || y=='{') stk.push(y);
							else if (t=='[' && y==']') stk.pop();
							else if (t=='(' && y==')') stk.pop();
							else if (t=='<' && y=='>') stk.pop();
							else if (t=='{' && y=='}') stk.pop();
							else {} //pass
						}
						lst.append(parse_vs_slice(vs, m, k+1));
					} //strange that it do to run here
				}
				return lst;
			} else if (a=='(' && b==')') {
				var vtpl((var*)0, (var*)0, char(0));
				tuple& tpl=*vtpl.data.heap.tuple.ptuple;
				for(k=i+1; k<e; ++k) {
					x=vs[k][0];
					if (x=='i' || x=='f' || x=='s') tpl.push_back(parse_vs_slice(vs, k, k+1));
					else if (x=='[' || x=='(' || x=='<' || x=='{') {
						stack<char> stk;
						stk.push(x);
						m=k;
						while (! stk.empty()) {
							++k;
							if (k==e) assert(false);//if a legal repr, stk should be empty now
							t=stk.top();
							y=vs[k][0];
							if (y=='[' || y=='(' || y=='<' || y=='{') stk.push(y);
							else if (t=='[' && y==']') stk.pop();
							else if (t=='(' && y==')') stk.pop();
							else if (t=='<' && y=='>') stk.pop();
							else if (t=='{' && y=='}') stk.pop();
							else {} //pass
						}
						tpl.push_back(parse_vs_slice(vs, m, k+1));
					} //strange that it do to run here
				}
				return vtpl;
			} else if (a=='<' && b=='>') {
				var vst((var*)0, (var*)0, int(0));
				set& st=*vst.data.heap.set.pset;
				for(k=i+1; k<e; ++k) {
					x=vs[k][0];
					if (x=='i' || x=='f' || x=='s') st.insert(parse_vs_slice(vs, k, k+1));
					else if (x=='[' || x=='(' || x=='<' || x=='{') {
						stack<char> stk;
						stk.push(x);
						m=k;
						while (! stk.empty()) {
							++k;
							if (k==e) assert(false);//if a legal repr, stk should be empty now
							t=stk.top();
							y=vs[k][0];
							if (y=='[' || y=='(' || y=='<' || y=='{') stk.push(y);
							else if (t=='[' && y==']') stk.pop();
							else if (t=='(' && y==')') stk.pop();
							else if (t=='<' && y=='>') stk.pop();
							else if (t=='{' && y=='}') stk.pop();
							else {} //pass
						}
						st.insert(parse_vs_slice(vs, m, k+1));
					} //strange that it do to run here
				}
				return vst;
			} else if (a=='{' && b=='}') {
				var vdct((var*)0, (var*)0, float(0));
				dict& dct=*vdct.data.heap.dict.pdict;
				for(k=i+1; k<e; ++k) {
					x=vs[k][0];
					if (x=='i' || x=='f' || x=='s') {
						var key(parse_vs_slice(vs, k, k+1));
						++k;
						x=vs[k][0];
						assert(k<e);
						if (x=='i' || x=='f' || x=='s') {
							dct.insert(pair<var, var>(key, parse_vs_slice(vs, k, k+1)));
						} else if (x=='[' || x=='(' || x=='<' || x=='{') {
							stack<char> stk;
							stk.push(x);
							m=k;
							while (! stk.empty()) {
								++k;
								if (k==e) assert(false);//if a legal repr, stk should be empty now
								t=stk.top();
								y=vs[k][0];
								if (y=='[' || y=='(' || y=='<' || y=='{') stk.push(y);
								else if (t=='[' && y==']') stk.pop();
								else if (t=='(' && y==')') stk.pop();
								else if (t=='<' && y=='>') stk.pop();
								else if (t=='{' && y=='}') stk.pop();
								else {} //pass
							}
							dct.insert(pair<var, var>(key, parse_vs_slice(vs, m, k+1)));
						} //strange that it do to run here
					}
				}
				return vdct;
			}// else for_in(x, i, j+1, 1) cout<<"debug: vs["<<x<<"]="<<vs[x]<<endl;
		}
		return var();
	}
	
	var& smart_clone_from_another_var(const var& r) {//often used by copy constructions
		macro_declare_me();
		if (this==&r) { msg(why you give me the same address?); return me; }
		codemask(msg(before smart_clone_from_another_var);peek();/* msg(target is);r.peek(); */)
		
		//first check my heap
		if (is_heap()) {
			if (is_str()) data.heap.str.pheap->release();
			else if (is_list()) data.heap.list.pheap->release();
			else if (is_tuple()) data.heap.tuple.pheap->release();
			else if (is_set()) data.heap.set.pheap->release();
			else if (is_dict()) data.heap.dict.pheap->release();
			else bye(in smart_clone_from_another_var: me is in heap but not a object);
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
			} else if (is_list()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heaplist refcnt to: "
				<<data.heap.list.pheap->cnt()+1<<"="<<data.heap.list.pheap->cnt()<<"+1"<<endl;)
				data.heap.list.pheap->get();
			} else if (is_tuple()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heaptuple refcnt to: "
				<<data.heap.tuple.pheap->cnt()+1<<"="<<data.heap.tuple.pheap->cnt()<<"+1"<<endl;)
				data.heap.tuple.pheap->get();
			} else if (is_set()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heapset refcnt to: "
				<<data.heap.set.pheap->cnt()+1<<"="<<data.heap.set.pheap->cnt()<<"+1"<<endl;)
				data.heap.set.pheap->get();
			} else if (is_dict()) {
				codemask(cout<<"in smart_clone_from_another_var increase the heapdict refcnt to: "
				<<data.heap.dict.pheap->cnt()+1<<"="<<data.heap.dict.pheap->cnt()<<"+1"<<endl;)
				data.heap.dict.pheap->get();
			} else  bye(in smart_clone_from_another_var: after copy : me is in heap but not a object);
		}
		
		codemask(msg(after smart_clone_from_another_var);peek();)
		return me;
	}
	
public://funcs
	//in member funcions of var, there is no need new var manually, because if forget
	//to delete it, the obj in heap if it points to , will remain not been deleted
	//creating a var obj in stack is better, have fun using copy constructors :)
	//just treat var as an built-in type like int
	
	//memory utils
	void mmclean(){//clean tmp mamory links, remove those whose target is empty
		mmgr.auto_clean();//call this func for a period of run time will save heap memory
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
	inline bool is_undefined() const { return attr.dwords.all==0; }
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
	inline bool is_snum() const { return is_schar() OR is_sshort() OR is_sint() OR is_slong(); }
	inline bool is_unum() const { return is_uchar() OR is_ushort() OR is_uint() OR is_ulong(); }
	inline bool is_integer() const { return attr.bytes.ints!=0 AND attr.bytes.floats==0; }
	inline bool is_decimal() const { return attr.bytes.ints==0 AND attr.bytes.floats!=0; }
	
	//default construction
	var() {
		init_as_undefined();//must call this in each construct funcs
	}
	
	//construct from another var
	var(var& r) {
		dbg(construct form var& r);
		init_as_undefined();
		smart_clone_from_another_var(r);
	}
	
	var(const var& rr) {
		var& r=const_cast<var&>(rr);
		dbg(construct form const var& r);
		init_as_undefined();
		smart_clone_from_another_var(r);//TODO: maybe there is some problem in this way
	}
	
	
	
	//default destruction
	~var() {
		//check heap
		if (is_heap()) {
			if (is_str()) {
				macro_declare_ptr_ref_heap_str();
				codemask(cout<<"in ~var release a heapstr refernce, "<<hex<<h<<" -> "<<hex<<p<<" refcnt: "
					<<h->cnt()<<"-1="<<h->cnt()-1<<endl;)
				h->release();
			} else if (is_list()) {
				macro_declare_ptr_ref_heap_list();
				codemask(cout<<"in ~var release a heaplist refernce, "<<hex<<h<<" -> "<<hex<<p<<" refcnt: "
					<<h->cnt()<<"-1="<<h->cnt()-1<<endl;)
				h->release();
			} else if (is_tuple()) {
				macro_declare_ptr_ref_heap_tuple();
				codemask(cout<<"in ~var release a heaptuple refernce, "<<hex<<h<<" -> "<<hex<<p<<" refcnt: "
					<<h->cnt()<<"-1="<<h->cnt()-1<<endl;)
				h->release();
			} else if (is_set()) {
				macro_declare_ptr_ref_heap_set();
				codemask(cout<<"in ~var release a heapset refernce, "<<hex<<h<<" -> "<<hex<<p<<" refcnt: "
					<<h->cnt()<<"-1="<<h->cnt()-1<<endl;)
				h->release();
			} else if (is_dict()) {
				macro_declare_ptr_ref_heap_dict();
				codemask(cout<<"in ~var release a heapdict refernce, "<<hex<<h<<" -> "<<hex<<p<<" refcnt: "
					<<h->cnt()<<"-1="<<h->cnt()-1<<endl;)
				h->release();
			} else {
				msg(there is some problem in the var: now dump:);
				peek();
				assert(false);
			}
		}
	}
	
	//constructions from built-in type
	#define macro_construct_from_builtin_type(sint1, set_builtin_sint1, si1, schar)\
	var(sint1& r) {\
		dbg(sint1);\
		init_as_undefined();\
		set_type_builtin();\
		set_builtin_sint1();\
		data.builtin.si1=r;\
	}\
	var(const sint1& r) {\
		dbg(const sint1);\
		init_as_undefined();\
		set_type_builtin();\
		set_builtin_sint1();\
		data.builtin.si1=r;\
	}\
	inline sint1& schar() {\
		return data.builtin.si1;\
	}\
	inline const sint1& schar() const {\
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
	
	//now comes constructions for strings from a stack object
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
		init_as_undefined();
		set_type_stack();
		set_obj_str();
		data.stack.pstr=&r;
	}
	
	//now comes constructions for strings , save in a heap object
	var(const string& r) {//for const, copy construct it in heap
		dbg(const string &);
		init_as_undefined();
		construct_from_const_cstr(r.c_str());
	}
	var(char* r) {//special, from a c-style string
		codemask(cout<<"creating a new str var from char*: "<<(r!=0?r:"NULL")<<" : "<<this<<endl;)
		init_as_undefined();
		construct_from_const_cstr(r);
	}
	var(const char* r) {//special, from a const c-style string
		codemask(cout<<"creating a new str var from const char*: "<<(r!=0?r:"NULL")<<" : "<<this<<endl;)
		init_as_undefined();
		construct_from_const_cstr(r);
	}
	var(const char* begin, const char* end) {//for str, iterators
		msg(init str from char* begin and char* end);
		init_as_undefined();
		str s(begin, end);
		init_as_str(s.c_str());
	}
	
	//now comes constructions for list from a stack object
	var(list& r) {
		msg(construct from a list& r);
		init_as_undefined();
		set_type_stack();
		set_obj_list();
		data.stack.plist=&r;
	}
	
	//now comes constructions for list, save in a heap object
	var(var* begin, var* end) {//for list, iterators
		msg(init list from var* begin and var* end);
		init_as_undefined();
		init_as_list(begin, end);
	}
	
	//now comes constructions for tuple from a stack object
	var(tuple& r) {
		msg(construct from a tuple& r);
		init_as_undefined();
		set_type_stack();
		set_obj_tuple();
		data.stack.ptuple=&r;
	}
	
	//now comes constructions for tuple, save in a heap object
	var(var a, var b) {//for tuple, 2 vars
		msg(init tuple with 2 vars);
		init_as_undefined();
		var tmp[]={a, b};
		init_as_tuple(tmp, tmp+2);
	}
	var(var a, var b, var c) {//for tuple, 3 vars
		msg(init tuple with 3 vars);
		init_as_undefined();
		var tmp[]={a, b, c};
		init_as_tuple(tmp, tmp+3);
	}
	var(var a, var b, var c, var d) {//for tuple, 4 vars
		msg(init tuple with 4 vars);
		init_as_undefined();
		var tmp[]={a, b, c, d};
		init_as_tuple(tmp, tmp+4);
	}
	var(var a, var b, var c, var d, var e) {//for tuple, 5 vars
		msg(init tuple with 5 vars);
		init_as_undefined();
		var tmp[]={a, b, c, d, e};
		init_as_tuple(tmp, tmp+5);
	}
	var(var a, var b, var c, var d, var e, var f) {//for tuple, 6 vars
		msg(init tuple with 6 vars);
		init_as_undefined();
		var tmp[]={a, b, c, d, e, f};
		init_as_tuple(tmp, tmp+6);
	}
	var(var a, var b, var c, var d, var e, var f, var g) {//for tuple, 7 vars
		msg(init tuple with 7 vars);
		init_as_undefined();
		var tmp[]={a, b, c, d, e, f, g};
		init_as_tuple(tmp, tmp+7);
	}
	var(var a, var b, var c, var d, var e, var f, var g, var h) {//for tuple, 8 vars
		msg(init tuple with 8 vars);
		init_as_undefined();
		var tmp[]={a, b, c, d, e, f, g, h};
		init_as_tuple(tmp, tmp+8);
	}
	
	var(var* begin, var* end, char flag) {//for tuple from iterators, any char is flag
		msg(init tuple with iterator var* begin and var* end);
		init_as_undefined();
		init_as_tuple(begin, end);
	}
	//now comes constructions for set from a stack object
	var(set& r) {
		msg(construct from a set& r);
		init_as_undefined();
		set_type_stack();
		set_obj_set();
		data.stack.pset=&r;
	}
	
	//now comes constructions for set, save in a heap object
	var(var* begin, var* end, int) {//last int is a type flag to tell this is going to init as a set
		msg(construct a set in heap from var * iterators begin and end);
		init_as_undefined();
		init_as_set(begin, end);
	}
	
	//now comes constructions for dict from a stack object
	var(dict& r) {
		msg(construct from a dict& r);
		init_as_undefined();
		set_type_stack();
		set_obj_dict();
		data.stack.pdict=&r;
	}
	
	//now comes constructions for dict, save in a heap object
	var(var* begin, var* end, float) {//last float is a type flag to tell this is going to init as a dict
		msg(construct a dict in heap from var * iterators begin and end);
		init_as_undefined();
		init_as_dict(begin, end);
	}
	
	//getters for str
	string tostr() {//get a copy
		if (is_str()) {
			if (is_stack()) return *data.stack.pstr;
			if (is_heap()) return *data.heap.str.pstr;
		}//TODO: convert non-string to string
		return "<in tostr: not a string>";
	}
	
	string& refstr() {//get the ref
		if (is_str()) {
			if (is_stack()) return *data.stack.pstr;
			if (is_heap()) return *data.heap.str.pstr;
		} else bye(refstr: not a string : cannot get ref);
		return *data.stack.pstr;//for compile successfully
	}
	
	const char* cstr() const {//design this func just for fast speed, only for str on heap or stack
		if (is_str()) {
			if (is_stack()) return (*data.stack.pstr).c_str();
			if (is_heap()) return (*data.heap.str.pstr).c_str();
		}
		return "<in cstr: this var seems not a string>";
	}
	
	//getters for list
	list tolist() const {//get a copy
		if (is_list()) {
			if (is_stack()) return *data.stack.plist;
			if (is_heap()) return *data.heap.list.plist;
		} else bye(tolist: not a list : cannot get a copy);
		return list();//for compile successfully
	}
	
	list& reflist() {//get the ref
		if (is_list()) {
			if (is_stack()) return *data.stack.plist;
			if (is_heap()) return *data.heap.list.plist;
		} else bye(reflist: not a list : cannot get ref);
		return *data.stack.plist;//for compile successfully
	}
	
	//getters for tuple
	tuple totuple() const {//get a copy
		if (is_tuple()) {
			if (is_stack()) return *data.stack.ptuple;
			if (is_heap()) return *data.heap.tuple.ptuple;
		} else bye(totuple: not a tuple : cannot get copy);
		return tuple();
	}
	
	tuple& reftuple() {//get the ref
		if (is_tuple()) {
			if (is_stack()) return *data.stack.ptuple;
			if (is_heap()) return *data.heap.tuple.ptuple;
		} else bye(reftuple: not a tuple : cannot get ref);
		return *data.stack.ptuple;//for compile successfully
	}
	
	//getters for set
	set toset() const {//get a copy
		if (is_set()) {
			if (is_stack()) return *data.stack.pset;
			if (is_heap()) return *data.heap.set.pset;
		} else bye(toset: not a set : cannot get copy);
		return set();
	}
	
	set& refset() {//get the ref
		if (is_set()) {
			if (is_stack()) return *data.stack.pset;
			if (is_heap()) return *data.heap.set.pset;
		} else bye(refset: not a set : cannot get ref);
		return *data.stack.pset;//for compile successfully
	}
	
	//getters for dict
	dict todict() const {//get a copy
		if (is_dict()) {
			if (is_stack()) return *data.stack.pdict;
			if (is_heap()) return *data.heap.dict.pdict;
		} else bye(todict: not a dict : cannot get copy); 
		return dict();
	}
	
	dict& refdict() {//get the ref
		if (is_dict()) {
			if (is_stack()) return *data.stack.pdict;
			if (is_heap()) return *data.heap.dict.pdict;
		} else bye(refdict: not a dict : cannot get ref);
		return *data.stack.pdict;//for compile successfully
	}
	
	//now is the funcs that let var change its original type to a new one
	var& aslist() {//change itself to a list
		//if it is a list before, nothing to do
		macro_declare_me();
		if (is_list()) return me;
		else {
			//TODO
			return me;
		}
	}
	var& asstr() {//change itself to a str
		macro_declare_me();
		if (is_str()) return me;
		else {
			//TODO
			return me;
		}
	}
	var& astuple() {//change itself to a str
		macro_declare_me();
		if (is_tuple()) return me;
		else {
			//TODO
			return me;
		}
	}
	var& asset() {//change itself to a str
		macro_declare_me();
		if (is_set()) return me;
		else {
			//TODO
			return me;
		}
	}
	var& asdict() {//change itself to a str
		macro_declare_me();
		if (is_dict()) return me;
		else {
			//TODO
			return me;
		}
	}
	
	
	//now comes the copy constructions
	var& operator =(var& r) {//for copy construction
		//if r points to a heap obj, share it
		//no need  to init here
		msg(in var assignment: now begin clone form var& r);
		return smart_clone_from_another_var(r);
	}
	
	var& operator =(const var& r) {//for copy construction
		//if r points to a heap obj, share it
		//no need  to init here
		msg(in var assignment: now begin clone form var& r);
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
	
	
	//operators < > == <= >= !=
	#define macro_operator_compare(op)\
	bool operator  op (const var& r) const {\
		const var& a=*this, &b=r;\
		if (a.is_builtin() AND b.is_builtin()) {\
			if (a.is_snum() AND b.is_snum()) return a.data.dwords64signed.all op b.data.dwords64signed.all;\
			else if (a.is_unum() AND b.is_unum()) return a.data.dwords64.all op b.data.dwords64.all;\
			else if (a.is_snum() AND b.is_unum()) return a.data.dwords64signed.all op b.data.dwords64.all;\
			else if (a.is_unum() AND b.is_snum()) return a.data.dwords64.all op b.data.dwords64signed.all;\
			else if (a.is_float() AND b.is_float()) return a.data.builtin.f op b.data.builtin.f;\
			else if (a.is_double() AND b.is_double()) return a.data.builtin.d op b.data.builtin.d;\
			else if (a.is_float() AND b.is_double()) return a.data.builtin.f op b.data.builtin.d;\
			else if (a.is_double() AND b.is_float()) return a.data.builtin.d op b.data.builtin.f;\
			else return &a  op  &b;\
		} else if (a.is_str() AND b.is_str()) {\
			if (a.is_heap() AND b.is_heap()) return (*a.data.heap.str.pstr)  op  (*b.data.heap.str.pstr);\
			else if (a.is_stack() AND b.is_stack()) return (*a.data.stack.pstr)  op  (*b.data.stack.pstr);\
			else if (a.is_heap() AND b.is_stack()) return (*a.data.heap.str.pstr)  op  (*b.data.stack.pstr);\
			else if (a.is_stack() AND b.is_heap()) return (*a.data.stack.pstr)  op  (*b.data.heap.str.pstr);\
			else bye(in operator op: impossible here);return false;\
		} else return &a  op  &b;\
	}
	macro_operator_compare(<)
	macro_operator_compare(>)
	macro_operator_compare(==)
	macro_operator_compare(!=)
	macro_operator_compare(<=)
	macro_operator_compare(>=)
	#undef macro_operator_compare
	
	//input and output operators
	friend istream& operator>>(istream& in, var& v) {
		if (v.is_undefined()) {
			return in;//don't know what to input
		} else if (v.is_str()) {
			if (v.is_heap()) in>>(*v.data.heap.str.pstr);
			else if (v.is_stack()) in>>(*v.data.stack.pstr);
			else bye(in operator>>: is str but not heap and stack);
		} else if (v.is_num()) {
			if (v.is_schar()) in>>v.schar();
			else if (v.is_uchar()) in>>v.uchar();
			else if (v.is_sshort()) in>>v.sshort();
			else if (v.is_ushort()) in>>v.ushort();
			else if (v.is_sint()) in>>v.sint();
			else if (v.is_uint()) in>>v.uint();
			else if (v.is_slong()) in>>v.slong();
			else if (v.is_ulong()) in>>v.ulong();
			else if (v.is_float()) in>>v.flt();
			else if (v.is_double()) in>>v.dbl();
		} else if (v.is_list()) {
			return in;//"TODO";
		} else if (v.is_tuple()) {
			return in;//"TODO";
		} else if (v.is_set()) {
			return in;//"TODO";
		} else if (v.is_dict()) {
			return in;//"TODO";
		} else bye(in operator>>: impossible run here);
		return in;
	}
	
	string repr(bool quote=false) {//convert var to a string representation
		ostringstream oss;
		const char *qt=(quote?"'":"");//if quote is true, quote for strings
		if (is_undefined()) {
			oss<<qt<<"undefined"<<qt;
		} else if (is_str()) {
			oss<<qt<<cstr()<<qt;
		} else if (is_num()) {//the compare sequence is based on the using frequency of num type
			if (is_sint()) oss<<sint();
			else if (is_schar()) oss<<qt<<schar()<<qt;//TODO
			else if (is_float()) oss<<flt();
			else if (is_double()) oss<<dbl();
			else if (is_slong()) oss<<slong();
			else if (is_sshort()) oss<<sshort();
			else if (is_uint()) oss<<uint();
			else if (is_uchar()) oss<<qt<<uchar()<<qt;//TODO
			else if (is_ulong()) oss<<ulong();
			else if (is_ushort()) oss<<ushort();
		} else if (is_list()) {
			if (is_stack()) {
				macro_declare_ptr_ref_stack_list();
				oss<<'[';
				size_t length=l.size();
				for_tn(size_t, i, length) {
					oss<<l[i].repr(true);
					if (i!=length-1) oss<<", ";
				}
				oss<<']';
			} else {
				macro_declare_ptr_ref_heap_list();
				oss<<'[';
				size_t length=l.size();
				for_tn(size_t, i, length) {
					oss<<l[i].repr(true);
					if (i!=length-1) oss<<", ";
				}
				oss<<']';
			}
		} else if (is_tuple()) {
			if (is_stack()) {
				macro_declare_ptr_ref_stack_tuple();
				oss<<'(';
				size_t length=t.size(), i=0;
				for_iter(it, tuple, t) {
					oss<<const_cast<var&>(*it).repr(true);
					if (i++!=length-1) oss<<", ";
				}
				oss<<')';
			} else {
				macro_declare_ptr_ref_heap_tuple();
				oss<<'(';
				size_t length=t.size(), i=0;
				for_iter(it, tuple, t) {
					oss<<const_cast<var&>(*it).repr(true);
					if (i++!=length-1) oss<<", ";
				}
				oss<<')';
			}
		} else if (is_set()) {
			if (is_stack()) {
				macro_declare_ptr_ref_stack_set();
				oss<<'<';
				size_t length=st.size(), i=0;
				for_iter(it, set, st) {
					oss<<const_cast<var&>(*it).repr(true);
					if (i++!=length-1) oss<<", ";
				}
				oss<<'>';
			} else {
				macro_declare_ptr_ref_heap_set();
				oss<<'<';
				size_t length=st.size(), i=0;
				for_iter(it, set, st) {
					oss<<const_cast<var&>(*it).repr(true);
					if (i++!=length-1) oss<<", ";
				}
				oss<<'>';
			}
		} else if (is_dict()) {
			if (is_stack()) {
				macro_declare_ptr_ref_stack_dict();
				oss<<'{';
				size_t length=d.size(), i=0;
				for_iter(it, dict, d) {
					oss<<const_cast<var&>(it->first).repr(true)<<':'<<(*it).second.repr(true);
					if (i++!=length-1) oss<<", ";
				}
				oss<<'}';
			} else {
				macro_declare_ptr_ref_heap_dict();
				oss<<'{';
				size_t length=d.size(), i=0;
				for_iter(it, dict, d) {
					oss<<const_cast<var&>(it->first).repr(true)<<':'<<(*it).second.repr(true);
					if (i++!=length-1) oss<<", ";
				}
				oss<<'}';
			}
		} else {
			oss<<"unknown";//impossible running here
		}
		return oss.str();
	}
	
	friend ostream& operator<<(ostream& out, var& v) {
		return out<<v.repr();
	}
	
	//debug utils
	var& peek(ostream& out=cout) {//to see what is in memory
		var& v=*this;
		out<<"[var @ "<<this<<" data: "
			<<hex<<data.dwords.low4<<" "<<hex<<data.dwords.high4<<" attr: "
			<<bitset<8>(attr.bytes.types)<<" "<<bitset<8>(attr.bytes.objs)<<" "
			<<bitset<8>(attr.bytes.ints)<<" "<<bitset<8>(attr.bytes.floats)
			<<"]"<<endl;
		return v;
	}
	
	var& print(ostream& out=cout, bool newline=true) {//simply print its repr
		var& v=*this;
		out<<v.repr();
		if (newline) out<<endl;
		return v;
	}
	
	var& dump(ostream& out=cout, bool newline=false) {//formatted print its json
		var& v=*this;
		out<<tojson();
		if (newline) out<<endl;
		return v;
	}
	
	string tojson() {//convert to formatted json
		return parser(repr()).dumps();
	}
	
	// methods for sequences
	var split(const var& by) {
		assert(is_sequence());//use the split tamplate function
		// macro_declare_me();
		// macro_declare_ptr_ref_heap_list();
		var lst((var*)0, (var*)0);
		
		return lst;
	}
	
	var& join(var& by) {//a join(b) or b.join(a)
		//string.join(list)
		//or list.join(string)
		assert(is_sequence());
		macro_declare_me();
		return me;
	}
	
	// list opertions
	
	var& append(const var& elem) {//append a elem to the end of a list
		assert(is_list());
		macro_declare_me();
		macro_declare_ptr_ref_heap_list();
		l.push_back(elem);
		return me;
	}
	
	var& extend(var& rlist) {//extend a list with another list
		assert(is_list());
		macro_declare_me();
		macro_declare_ptr_ref_heap_list();
		l.insert(l.end(), rlist.reflist().begin(), rlist.reflist().end());
		return me;
	}
	
	var& push(const var& elem) {//push a elem to the front of a list
		assert(is_list());
		macro_declare_me();
		macro_declare_ptr_ref_heap_list();
		l.insert(l.begin(), elem);
		return me;
	}
	
	var& pop(var* hold=0) {//pop a elem from the front of a list
		assert(is_list());
		macro_declare_me();
		macro_declare_ptr_ref_heap_list();
		if (l.size()>0) {
			if (hold) *hold=l.front();
			l.erase(l.begin());
		}
		return me;
	}
	
	var& sort() {
		assert(is_list());
		macro_declare_me();
		macro_declare_ptr_ref_heap_list();
		std::sort(l.begin(), l.end()/* , std::less<var>() */);
		return me;
	}
	
	var& rsort() {
		assert(is_list());
		macro_declare_me();
		macro_declare_ptr_ref_heap_list();
		std::sort(l.begin(), l.end(), std::greater<var>());
		return me;
	}
	
	var& clone(var& from) {//let's clone from another var
		macro_declare_me();//will cause deep copy
		return me;
	}
	
	var tosorted() {
		assert(is_list());
		macro_declare_me();
		macro_declare_ptr_ref_heap_list();
		macro_new_var_list(lst);
		return lst.clone(me).sort();
	}
	
	// string replace() {//return a new string, allocate in heap, managed by this ptr
		// assert(is_sequence());
		// string * s=new string;
		// tmp_string_link
		
		// tmp_objects_chain.push_back(s);//tmp_objects_chain will be delete finally when var object destruct
	// }
	
	var replace() {
		assert(is_str());
		
	}
	
	size_t len() {
		assert(is_sequence());
		if (is_str()) return refstr().size();
		else if (is_list()) return reflist().size();
		else bye(in len: not a sequence);
		return 0;
	}
	
	//operations for sequence
	// is sequence
	
	var& keys() {//return a list contains the keys of a dict
		assert(is_dict());
		var& me =*this;
		return me;
	}
	
	var& values() {//return a list contains the values of a dict
		var& me =*this;
		return me;
	}
	
	bool haskey(var key) {
		return false;
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
	
	
	class parser {//used for eval a var from a string
		const char* p;
	public:
		friend class var;
		parser(const string& s): p(s.c_str()) {}
		parser(const char* s): p(s) {}
		
		string tabs(int depth) {
			string tmp;
			for_n(i, depth-1) tmp+="\t";
			return tmp;
		}
		
		char parse(vector<string>* result=0, bool show=true, ostream* pout=0, string* errmsg=0) {//check the type
			size_t i=0, l=strlen(p);
			while (i<l && isspace(p[i]) || iscntrl(p[i])) ++i;
			if (!strchr("{[<(-+e.0123456789'", p[i])) return 'N';//normal string
			char t;
			bool succ=anasys(p, t, result, show, pout, errmsg);
			if (!succ) {
				if (t=='n' || t=='s' && result && result->size()==1) {//
				} else {
					result->clear();//only get some part of the full results, clear it
					return '?';//failed
				}
			}
			return t;
		}
		
		bool test(string* errmsg=0) {//test if string s is a legal repr
			char t;
			return anasys(p, t, 0, false, 0, errmsg);
		}
		
		string dumps() {
			ostringstream oss;
			char t;
			anasys(p, t, 0, true, &oss, 0);
			return oss.str();
		}
		
		char expect(char c, const char*p) {
			size_t l=strlen(p);
			for_tn(size_t, i, l) {
				char m=p[i];
				if (m=='n') {
					if (isdigit(c) || c=='-' || c=='.' || c=='+' || c=='e') return m;
				} else if (m=='s') {//str
					if (c=='"' || c=='\'') return m;
				} else if (m==c) {
					return m;
				}
			}
			return -1;
		}

		string& char2str(string& s, const char& c) {
			s.clear();
			s.push_back(c);
			return s;
		}
		
		inline string& clear(string& s) {
			s.clear();
			return s;
		}
		
		friend ostream& operator <<(ostream& out, parser& r) {
			return out<<r.p<<endl;
		}
		
		bool anasys(const char* p, char& type, vector<string>* vs=0, bool show=true, ostream* pout=0, string* errmsg=0) {
			size_t length=strlen(p), i=0, j=0;
			stack<char> stk;
			stk.push('\0');
			string tmp;
			const char *nextexp=0;//next expectations
			type='?';//record the obj type
			char c=p[i], t, m, pos='B';//current char and stack top and match
			//---------- pos can be ------------
			//B	-	at the begin of a obj
			//E	-	at the end of a element
			//K	-	at the begin of a key, only for dict
			//M	-	at the end of a key, only for dict
			//V	-	at the begin of a value, only for dict
			bitset<1000> dictflag;//maxmun layers
			for_n(i, 1000) dictflag[i]=false;
			while(! stk.empty()) {
				t=stk.top();
				if (i==length && t=='\0') { stk.pop(); break; }
				if (i>length) { msg(i got out of range);break; }
				c=p[i];
				if (isspace(c) || iscntrl(c)) {
					if (t!='s' && t!='n') ++i;
					continue;
				} else if (t=='\0') {
					if (pos=='B') nextexp="{[(<ns";
					if (pos=='E') nextexp="\0";
					m=expect(c, nextexp);
					if (m==-1) break;
					else {
						if (pos=='B') type=m;//record the very first char as obj type
						pos='B';
						if (m!='n' && m!='s' && show && pout) (*pout)<<tabs(stk.size())<<c<<endl;
						stk.push(m);
						if (m!='n' && m!='s' && vs) vs->push_back(char2str(tmp, m));
						if (m!='n') ++i;
					}
				} else if (t=='s') {
					j=i;
					m=p[i-1];
					while(j<length && p[j]!=m) ++j;
					if (j==length) { msg(bad str); break; }
					if (pos!='V' && show && pout) (*pout)<<tabs(stk.size()-1);
					tmp=string(p+i, p+j);
					if (show && pout) (*pout)<<(string("'")+tmp+"'");
					if (vs) {
						ostringstream oss;
						oss<<'s'/* <<' '<<tmp.size() */<<' '<<tmp;
						vs->push_back(oss.str());
					}
					stk.pop();
					i=j+1;
					if (stk.top()=='{') {
						if (dictflag[stk.size()]==false) pos='M';
						else pos='E';
					} else pos='E';
				} else if (t=='n') {
					j=i;
					while(j<length && strchr("-.+0123456789e", p[j])) ++j;
					tmp=string(p+i, p+j);
					const char* s=tmp.c_str();
					if (strchr(s, '.')) {
						if (pos!='V' && show && pout) (*pout)<<tabs(stk.size()-1);
						if (show && pout) (*pout)<<atof(s);
						if (vs) {
							ostringstream oss;
							oss<<'f'<<' '<<tmp;
							vs->push_back(oss.str());
						}
					} else {
						if (pos!='V' && show && pout) (*pout)<<tabs(stk.size()-1);
						if (show && pout) (*pout)<<atoi(s);
						if (vs) {
							ostringstream oss;
							oss<<'i'<<' '<<tmp;
							vs->push_back(oss.str());
						}
					}
					stk.pop();
					i=j;
					if (stk.top()=='{') {
						if (dictflag[stk.size()]==false) pos='M';
						else pos='E';
					} else pos='E';
				} else if (t=='[') {
					if (pos=='B') nextexp="{[(<ns]";
					if (pos=='E') nextexp=",]";
					m=expect(c, nextexp);
					if (m==-1) break;
					else if (m==']') {
						stk.pop();
						if (show && pout) (*pout)<<endl<<tabs(stk.size())<<c;
						if (vs) vs->push_back(char2str(tmp, m));
						pos='E';
						++i;
					} else if (m==',') {
						pos='B';
						if (show && pout) (*pout)<<c<<endl;
						++i;
					} else if (m=='{') {
						if (vs) vs->push_back(char2str(tmp, m));
						if (pos!='V') if (show && pout) (*pout)<<tabs(stk.size());
						if (show && pout) (*pout)<<c<<endl;
						pos='K';
						stk.push(m);
						++i;
					} else {
						if (m!='n' && m!='s') {
							if (show && pout) (*pout)<<tabs(stk.size())<<c<<endl;
							pos='B';
							if (vs) vs->push_back(char2str(tmp, m));
						}
						stk.push(m);
						if (m!='n') ++i;
					}
				} else if (t=='(') {
					if (pos=='B') nextexp="{[(<ns)";
					if (pos=='E') nextexp=",)";
					m=expect(c, nextexp);
					if (m==-1) break;
					else if (m==')') {
						stk.pop();
						if (show && pout) (*pout)<<endl<<tabs(stk.size())<<c;
						if (vs) vs->push_back(char2str(tmp, m));
						pos='E';
						++i;
					} else if (m==',') {
						pos='B';
						if (show && pout) (*pout)<<c<<endl;
						++i;
					} else if (m=='{') {
						if (vs) vs->push_back(char2str(tmp, m));
						if (pos!='V') if (show && pout) (*pout)<<tabs(stk.size());
						if (show && pout) (*pout)<<c<<endl;
						pos='K';
						stk.push(m);
						++i;
					} else {
						if (m!='n' && m!='s') {
							if (show && pout) (*pout)<<tabs(stk.size())<<c<<endl;
							pos='B';
							if (vs) vs->push_back(char2str(tmp, m));							
						}
						stk.push(m);
						if (m!='n') ++i;
					}
				} else if (t=='<') {
					if (pos=='B') nextexp="{[(<ns>";
					if (pos=='E') nextexp=",>";
					m=expect(c, nextexp);
					if (m==-1) break;
					else if (m=='>') {
						stk.pop();
						if (show && pout) (*pout)<<endl<<tabs(stk.size())<<c;
						if (vs) vs->push_back(char2str(tmp, m));
						pos='E';
						++i;
					} else if (m==',') {
						pos='B';
						if (show && pout) (*pout)<<c<<endl;
						++i;
					} else if (m=='{') {
						if (vs) vs->push_back(char2str(tmp, m));
						if (pos!='V') if (show && pout) (*pout)<<tabs(stk.size());
						if (show && pout) (*pout)<<c<<endl;
						pos='K';
						stk.push(m);
						++i;
					} else {
						if (m!='n' && m!='s') {
							if (show && pout) (*pout)<<tabs(stk.size())<<c<<endl;
							pos='B';
							if (vs) vs->push_back(char2str(tmp, m));
						}
						stk.push(m);
						if (m!='n') ++i;
					}
				} else if (t=='{') {
					if (pos=='K') nextexp="ns}";//assume the key should obly be numbers and strings
					if (pos=='M') nextexp=":";
					if (pos=='V') nextexp="{[(<ns";//value can be any thing
					if (pos=='E') nextexp=",}";
					m=expect(c, nextexp);
					if (m==-1) break;
					else if (m=='}') {
						dictflag[stk.size()]=false;
						stk.pop();
						if (show && pout) (*pout)<<endl<<tabs(stk.size())<<c;
						if (vs) vs->push_back(char2str(tmp, m));
						pos='E';
						++i;
					} else if (m==',') {
						dictflag[stk.size()]=false;
						pos='K';
						if (show && pout) (*pout)<<c<<endl;
						++i;
					} else if (m=='{') {
						if (vs) vs->push_back(char2str(tmp, m));
						if (pos!='V') if (show && pout) (*pout)<<tabs(stk.size());
						if (show && pout) (*pout)<<c<<endl;
						pos='K';
						stk.push(m);
						++i;
					} else if (m==':') {
						dictflag[stk.size()]=true;
						pos='V';
						if (show && pout) (*pout)<<c;
						++i;
					} else {
						if (m!='n' && m!='s') {
							if (!dictflag[stk.size()]) if (show && pout) (*pout)<<tabs(stk.size());
							if (show && pout) (*pout)<<c<<endl;
							pos='B';
							if (vs) vs->push_back(char2str(tmp, m));
						}
						stk.push(m);
						if (m!='n') ++i;
					}
				}
			}
			if (m==-1 && errmsg) {
				ostringstream oss;
				oss<<"expect '"<<(nextexp[0]?nextexp:"\\0")<<"' for 0x"<<hex<<int(t)<<":'"<<t<<'\'';
				(*errmsg)=oss.str();
			}
			if (show && pout) (*pout)<<endl;
			return stk.empty();
		}
	};
	
	var(parser r) {
		init_as_undefined();
		dbg(constrct var from parser);
		vector<string> vs;
		string errmsg;
		// char t=r.parse(&vs, true, &cout, &errmsg);
		char t=r.parse(&vs, false, &cout, &errmsg);
		// cout<<"type="<<t<<endl;
		// cout<<"errmsg="<<errmsg<<endl;
		// cout<<"vs size="<<vs.size()<<endl;
		// for_iter(it, vector<string>, vs) {
			// cout<<"vs: "<<*it<<endl;
		// }
		if (t=='N') {
			init_as_str(r.p);
		} else if (t=='?') {
			init_as_str(r.p);
		} else if (strchr("{[(<ns", t)) {
			init_from_vs(vs);
		} else assert(false);
	}
	
	
	
	
private:
	
};

class shit {};//a helper class, its type is usefull, beside that it is useless

//useful init functions, often used to get a empty var
var str(const char* p=0) { return var(p); }
var str(const char* begin, const char* end) { return var(begin, end); }
var list(var* begin=0, var* end=0) { return var(begin, end); }
var list(var a, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, var s, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, var s, var t, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, var s, var t, var u, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, var s, var t, var u, var v, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, var s, var t, var u, var v, var w, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, var s, var t, var u, var v, var w, var x, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, var s, var t, var u, var v, var w, var x, var y, shit end=shit()) { return var(&a, (var*)&end); }
var list(var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p, var q, var r, var s, var t, var u, var v, var w, var x, var y, var z, shit end=shit()) { return var(&a, (var*)&end); }

var tuple(var a, var b) { return var(a, b); }
var tuple(var a, var b, var c) { return var(a, b, c); }
var tuple(var a, var b, var c, var d) { return var(a, b, c, d); }
var tuple(var a, var b, var c, var d, var e) { return var(a, b, c, d, e); }
var tuple(var a, var b, var c, var d, var e, var f) { return var(a, b, c, d, e, f); }
var tuple(var a, var b, var c, var d, var e, var f, var g) { return var(a, b, c, d, e, f, g); }
var tuple(var a, var b, var c, var d, var e, var f, var g, var h) { return var(a, b, c, d, e, f, g, h); }
var set(var* begin=0, var* end=0, int flag=0) { return var(begin, end, flag); }
var dict(var* begin=0, var* end=0, float flag=.0) { return var(begin, end, flag); }

var sorted(var& v) { 
	return v.tosorted();
}

size_t len(var& v) { 
	return v.len(); 
}

string repr(var& v) {
	return string();
}

var eval(const string& s) {
	return var(var::parser(s));
}

var eval(const char* s) {
	return var(var::parser(s));
}


#define VAR(...) eval(#__VA_ARGS__)
#define V VAR

#define STR(...) var(#__VA_ARGS__)
#define S STR

#define STRING(...) string(#__VA_ARGS__)

#define LIST(...) eval(string("[")+#__VA_ARGS__+"]")
#define L LIST

#define TUPLE(...) eval(string("(")+#__VA_ARGS__+")")
#define T TUPLE

#define SET(...) eval(string("<")+#__VA_ARGS__+">")
#define ST SET

#define DICT(...) eval(string("{")+#__VA_ARGS__+"}")
#define D DICT

//usage: var a=V([1,2,3])
// var(parser(#expr))
// var("asdasdl")
#define R(expr) range(#expr)


#undef macro_declare_ptr_ref_heap_str
#undef macro_declare_ptr_ref_stack_str
#undef macro_declare_ptr_ref_heap_list
#undef macro_declare_ptr_ref_stack_list
#undef macro_declare_ptr_ref_heap_tuple
#undef macro_declare_ptr_ref_stack_tuple
#undef macro_declare_ptr_ref_heap_set
#undef macro_declare_ptr_ref_stack_set
#undef macro_declare_ptr_ref_heap_dict
#undef macro_declare_ptr_ref_stack_dict
#undef macro_declare_me
#endif /* PYPP_HPP_BY_JADESOUL */
