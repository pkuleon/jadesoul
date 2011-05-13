#include <jade.hpp>
#include <set>

class memmgr;
class var;

template<class T>
class heapobj {//a class to represent a dynamic allocated one object in heap (note: only one obj)
public:
	heapobj() { malloc(); }
	~heapobj() { free(); }
	T* get() {//get a ref to the obj
		if (p==0) return 0;
		inc();
	}
	void del() {//release a ref to the obj
		if (p==0) return;
		dec();
	}
private:
	inline void malloc() { p=new T; refcnt=0; }
	inline void free() { if (p!=0) delete p; p=0; refcnt=0; }
	inline inc() { ++refcnt; }
	inline dec() { --refcnt; if (refcnt==0) free(); }
private://data
	T* p;//ptr to the obj in heap
	int refcnt;//the refernce count to this object
};

heapobj<string> heapstr;


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
	
	typedef std::list<str*> strlink;
	typedef std::list<list*> listlink;
	typedef std::list<tuple*> tuplelink;
	typedef std::list<set*> setlink;
	typedef std::list<dict*> dictlink;
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
		
		#define macro_delete_link(lnk) while(NOT lnk.empty()) { delete lnk.front(); lnk.pop_front(); }
		macro_delete_link(strlnk)
		macro_delete_link(listlnk)
		macro_delete_link(tpllnk)
		macro_delete_link(setlnk)
		macro_delete_link(dictlnk)
		#undef macro_delete_link
		
		show_state("after delete");
	}
	void show_state(char * msg) {
		cout<<"[ mmgr: "<<msg<<" ] "
			<<" str: "<<strlnk.size()
			<<" list: "<<listlnk.size()
			<<" tuple: "<<tpllnk.size()
			<<" set: "<<setlnk.size()
			<<" dict: "<<dictlnk.size()
			<<endl;
	}
	
	#define macro_new_operator(type, func, lnk) type& func() { type* p=new type; lnk.push_front(p); return *p; }
	macro_new_operator(str, newstr, strlnk)
	macro_new_operator(list, newlist, listlnk)
	macro_new_operator(tuple, newtuple, tpllnk)
	macro_new_operator(set, newset, setlnk)
	macro_new_operator(dict, newdict, dictlnk)
	#undef macro_new_operator
	
} mmgr;	//构造一个函数内部局部临时对象管理器，程序结束时会自动析构

class var {
public:
	typedef py::str str;
	typedef py::list list;
	typedef py::tuple tuple;
	typedef py::set set;
	typedef py::dict dict;
	var();
	~var();
};

var::var() {
	// cout<<sizeof(mmgr)<<"\t"<<mmgr.a<<endl;
	memmgr::list& a=mmgr.newlist();
	memmgr::list& b=mmgr.newlist();
	memmgr::dict& c=mmgr.newdict();
}

var::~var() {
	// cout<<sizeof(mmgr)<<"\t"<<mmgr.a<<endl;
}

var list() {
	py::list& a=mmgr.newlist();
	return var();
}

var str() {
	py::str& a=mmgr.newstr();
	return var();
}

int main() {
	cout<<sizeof(var)<<endl;
	return 0;
}