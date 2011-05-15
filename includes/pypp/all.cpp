# 1 "pypp.hpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "pypp.hpp"
# 34 "pypp.hpp"
class memmgr;
class var;

template<class T>
class heapobj {
public:
 heapobj() { malloc(); }
 ~heapobj() { free(); }
 T* get() {
  assert(p!=0);

  inc();
  return p;
 }
 void release() {
  if (p==0) return;
  dec();
 }
 T& ref() {
  assert(p!=0);
  return *p;
 }
 T* ptr() {
  assert(p!=0);
  return p;
 }
 bool empty() const {
  return p==0;
 }
 const uint cnt() const {
  return refcnt;
 }



private:
 inline void malloc() { p=new T; refcnt=0; }
 inline void free() { if (p!=0) { delete p; p=0; refcnt=0; } }

 inline void inc() { ++refcnt; }
 inline void dec() { if (refcnt>0) --refcnt; if (refcnt==0) free(); }
private:
 T* p;
 uint refcnt;

};


namespace py {
 typedef std::string str;
 typedef std::vector<var> list;
 typedef std::list<var> tuple;
 typedef std::set<var> set;
 typedef std::map<var, var> dict;
}

class memmgr {
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




  while(NOT strlnk.empty()) { delete strlnk.front(); strlnk.pop_front(); }
  while(NOT listlnk.empty()) { delete listlnk.front(); listlnk.pop_front(); }
  while(NOT tpllnk.empty()) { delete tpllnk.front(); tpllnk.pop_front(); }
  while(NOT setlnk.empty()) { delete setlnk.front(); setlnk.pop_front(); }
  while(NOT dictlnk.empty()) { delete dictlnk.front(); dictlnk.pop_front(); }


  show_state("after delete");
 }

 template<class T>
 struct is_target_deleted {
  bool operator()(T* p) { ; return p->empty(); }
 };

 void auto_clean() {


  strlnk.remove_if(is_target_deleted<heapstr>());
  listlnk.remove_if(is_target_deleted<heaplist>());
  tpllnk.remove_if(is_target_deleted<heaptuple>());
  setlnk.remove_if(is_target_deleted<heapset>());
  dictlnk.remove_if(is_target_deleted<heapdict>());

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


 heapstr& newstr() { heapstr* p=new heapstr; strlnk.push_front(p); return *p; }
 heaplist& newlist() { heaplist* p=new heaplist; listlnk.push_front(p); return *p; }
 heaptuple& newtuple() { heaptuple* p=new heaptuple; tpllnk.push_front(p); return *p; }
 heapset& newset() { heapset* p=new heapset; setlnk.push_front(p); return *p; }
 heapdict& newdict() { heapdict* p=new heapdict; dictlnk.push_front(p); return *p; }


} mmgr;


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
 union {
  union {
   str* pstr;
   list* plist;
   tuple* ptuple;
   set* pset;
   dict* pdict;
  } stack;

  union {

   struct {
    heapstr* pheap;
    str* pstr;
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
  } heap;

  union {
   sint1 si1; char c;
   uint1 ui1; uchar uc;
   sint2 si2; short s;
   uint2 ui2; ushort us;
   sint4 si4; int i;
   uint4 ui4; uint ui;
   sint8 si8; slong l;
   uint8 ui8; ulong ul;
   real4 r4; float f;
   real8 r8; double d;
  } builtin;

  struct {
   uint low4, high4;
  } dwords;
  struct {
   ulong all;
  } dwords64;
  struct {
   slong all;
  } dwords64signed;
 } data;
 union {
  struct {

   bool stack:1;
   bool heap:1;
   bool builtin:1;
   uchar undef1:5;


   bool str:1;
   bool list:1;
   bool tuple:1;
   bool set:1;
   bool dict:1;
   uchar undef2:3;


   bool sint1:1;
   bool uint1:1;
   bool sint2:1;
   bool uint2:1;
   bool sint4:1;
   bool uint4:1;
   bool sint8:1;
   bool uint8:1;


   bool real4:1;
   bool real8:1;
   uchar undef4:6;
  } bits;
  struct {
   uint types:8, objs:8, ints:8, floats:8;
  } bytes;
  struct {
   uint low:16, high:16;
  } words;
  struct {
   uint all:32;
  } dwords;
 } attr;
# 331 "pypp.hpp"
private:

 inline void init_as_undefined() {
  reset_attr();
  reset_data();
 }

 inline void reset_attr() {
  attr.dwords.all=0;
 }

 inline void reset_data() {

  data.dwords64.all=0;
 }







 inline void set_type_stack() { attr.bytes.types=0; attr.bits.stack=1; }
 inline void set_type_heap() { attr.bytes.types=0; attr.bits.heap=1; }
 inline void set_type_builtin() { attr.bytes.types=0; attr.bits.builtin=1; }
# 364 "pypp.hpp"
 inline void set_obj_str() { attr.bytes.objs=0; attr.bits.str=1; }
 inline void set_obj_list() { attr.bytes.objs=0; attr.bits.list=1; }
 inline void set_obj_tuple() { attr.bytes.objs=0; attr.bits.tuple=1; }
 inline void set_obj_set() { attr.bytes.objs=0; attr.bits.set=1; }
 inline void set_obj_dict() { attr.bytes.objs=0; attr.bits.dict=1; }
# 377 "pypp.hpp"
 inline void set_builtin_sint1() { attr.words.high=0; attr.bits.sint1=1; }
 inline void set_builtin_uint1() { attr.words.high=0; attr.bits.uint1=1; }
 inline void set_builtin_sint2() { attr.words.high=0; attr.bits.sint2=1; }
 inline void set_builtin_uint2() { attr.words.high=0; attr.bits.uint2=1; }
 inline void set_builtin_sint4() { attr.words.high=0; attr.bits.sint4=1; }
 inline void set_builtin_uint4() { attr.words.high=0; attr.bits.uint4=1; }
 inline void set_builtin_sint8() { attr.words.high=0; attr.bits.sint8=1; }
 inline void set_builtin_uint8() { attr.words.high=0; attr.bits.uint8=1; }
 inline void set_builtin_real4() { attr.words.high=0; attr.bits.real4=1; }
 inline void set_builtin_real8() { attr.words.high=0; attr.bits.real8=1; }


 void init_as_str(const char* r=0) {
  assert(is_undefined());

  set_type_heap();
  set_obj_str();
  heapstr*& h= data.heap.str.pheap; str*& p=data.heap.str.pstr; str& s=*p;;
  h=&mmgr.newstr();
 

  p=h->get();
  if (r!=0) p->assign(r);
 };

 inline void construct_from_const_cstr(const char* r) {
  init_as_str(r);
 }

 void init_as_list(var* begin=0, var* end=0) {
  assert(is_undefined());
  set_type_heap();
  set_obj_list();
  heaplist*& h= data.heap.list.pheap; list*& p= data.heap.list.plist; list& l=*p;;
  h=&mmgr.newlist();
 

  p=h->get();

  if (begin!=0 AND begin<end) {
   p->assign(begin, end);
  }
 };

 void init_as_tuple(var* begin=0, var* end=0) {
  assert(is_undefined());
  set_type_heap();
  set_obj_tuple();
  heaptuple*& h= data.heap.tuple.pheap; tuple*& p= data.heap.tuple.ptuple; tuple& t=*p;;
  h=&mmgr.newtuple();
 

  p=h->get();

  if (begin!=0 AND begin<end) {
   p->assign(begin, end);
  }
 };

 void init_as_set(var* begin=0, var* end=0) {
  assert(is_undefined());
  set_type_heap();
  set_obj_set();
  heapset*& h= data.heap.set.pheap; set*& p= data.heap.set.pset; set& st=*p;;
  h=&mmgr.newset();
 

  p=h->get();

  if (begin!=0 AND begin<end) {
   p->insert(begin, end);
  }
 };

 void init_as_dict(var* begin=0, var* end=0) {
  assert(is_undefined());
  set_type_heap();
  set_obj_dict();
  heapdict*& h= data.heap.dict.pheap; dict*& p= data.heap.dict.pdict; dict& d=*p;;
  h=&mmgr.newdict();
 

  p=h->get();

  if (end>=begin AND (end-begin)%2==0) {
   for (var* it=begin; it<end; ++it, ++it) {
    (*p)[*it]=*(it+1);
   }
  } else {cout<<"trace:\n\t"<<"in init_as_dict: you should give me even numbers of vars"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<465<<endl;assert(false);};};
 };

 var& smart_clone_from_another_var(var& r) {
  var& me=*this;
  if (this==&r) { ; return me; }
 


  if (is_heap()) {
   if (is_str()) data.heap.str.pheap->release();
   else if (is_list()) data.heap.list.pheap->release();
   else if (is_tuple()) data.heap.tuple.pheap->release();
   else if (is_set()) data.heap.set.pheap->release();
   else if (is_dict()) data.heap.dict.pheap->release();
   else {cout<<"trace:\n\t"<<"in smart_clone_from_another_var: me is in heap but not a object"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<480<<endl;assert(false);};};
  }


  data.dwords64.all=r.data.dwords64.all;
  attr.dwords.all=r.attr.dwords.all;



  if (is_heap()) {
   if (is_str()) {
   

    data.heap.str.pheap->get();
   } else if (is_list()) {
   

    data.heap.list.pheap->get();
   } else if (is_tuple()) {
   

    data.heap.tuple.pheap->get();
   } else if (is_set()) {
   

    data.heap.set.pheap->get();
   } else if (is_dict()) {
   

    data.heap.dict.pheap->get();
   } else {cout<<"trace:\n\t"<<"in smart_clone_from_another_var: after copy : me is in heap but not a object"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<510<<endl;assert(false);};};
  }

 
  return me;
 }

public:

 void mmclean(){
  mmgr.auto_clean();
 }



 inline bool is_stack() const { return attr.bits.stack; }
 inline bool is_heap() const { return attr.bits.heap; }
 inline bool is_builtin() const { return attr.bits.builtin; }

 inline bool is_str() const { return attr.bits.str; }
 inline bool is_list() const { return attr.bits.list; }
 inline bool is_tuple() const { return attr.bits.tuple; }
 inline bool is_set() const { return attr.bits.set; }
 inline bool is_dict() const { return attr.bits.dict; }

 inline bool is_sint1() const { return attr.bits.sint1; } inline bool is_schar() const { return attr.bits.sint1; }
 inline bool is_uint1() const { return attr.bits.uint1; } inline bool is_uchar() const { return attr.bits.uint1; }
 inline bool is_sint2() const { return attr.bits.sint2; } inline bool is_sshort() const { return attr.bits.sint2; }
 inline bool is_uint2() const { return attr.bits.uint2; } inline bool is_ushort() const { return attr.bits.uint2; }
 inline bool is_sint4() const { return attr.bits.sint4; } inline bool is_sint() const { return attr.bits.sint4; }
 inline bool is_uint4() const { return attr.bits.uint4; } inline bool is_uint() const { return attr.bits.uint4; }
 inline bool is_sint8() const { return attr.bits.sint8; } inline bool is_slong() const { return attr.bits.sint8; }
 inline bool is_uint8() const { return attr.bits.uint8; } inline bool is_ulong() const { return attr.bits.uint8; }
 inline bool is_real4() const { return attr.bits.real4; } inline bool is_float() const { return attr.bits.real4; }
 inline bool is_real8() const { return attr.bits.real8; } inline bool is_double() const { return attr.bits.real8; }



 inline bool is_undefined() const { return attr.dwords.all==0; }
 inline bool is_char() const { return is_schar() OR is_uchar(); }
 inline bool is_short() const { return is_sshort() OR is_ushort(); }
 inline bool is_int() const { return is_sint() OR is_uint(); }
 inline bool is_long() const { return is_slong() OR is_ulong(); }

 inline bool is_sequence() const { return is_str() OR is_list(); }
 inline bool is_container() const { return is_str() OR is_list() OR is_set() OR is_dict(); }
 inline bool is_immutable() const { return is_str() OR is_tuple(); }
 inline bool is_obj() const {

  return attr.bytes.objs!=0;
 }
 inline bool is_num() const { return NOT is_obj(); }
 inline bool is_snum() const { return is_schar() OR is_sshort() OR is_sint() OR is_slong(); }
 inline bool is_unum() const { return is_uchar() OR is_ushort() OR is_uint() OR is_ulong(); }
 inline bool is_integer() const { return attr.bytes.ints!=0 AND attr.bytes.floats==0; }
 inline bool is_decimal() const { return attr.bytes.ints==0 AND attr.bytes.floats!=0; }


 var() {
  init_as_undefined();
 }


 var(var& r) {
  ;
  init_as_undefined();
  smart_clone_from_another_var(r);
 }

 var(const var& r) {
  ;
  init_as_undefined();
  smart_clone_from_another_var(const_cast<var&>(r));
 }




 ~var() {

  if (is_heap()) {
   if (is_str()) {
    heapstr*& h= data.heap.str.pheap; str*& p=data.heap.str.pstr; str& s=*p;;
   

    h->release();
   } else if (is_list()) {
    heaplist*& h= data.heap.list.pheap; list*& p= data.heap.list.plist; list& l=*p;;
   

    h->release();
   } else if (is_tuple()) {
    heaptuple*& h= data.heap.tuple.pheap; tuple*& p= data.heap.tuple.ptuple; tuple& t=*p;;
   

    h->release();
   } else if (is_set()) {
    heapset*& h= data.heap.set.pheap; set*& p= data.heap.set.pset; set& st=*p;;
   

    h->release();
   } else if (is_dict()) {
    heapdict*& h= data.heap.dict.pheap; dict*& p= data.heap.dict.pdict; dict& d=*p;;
   

    h->release();
   } else {
    ;
    dump();
    assert(false);
   }
  }
 }
# 646 "pypp.hpp"
 var(sint1& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_sint1(); data.builtin.si1=r; } var(const sint1& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_sint1(); data.builtin.si1=r; } inline sint1& schar() { return data.builtin.si1; } inline const sint1& schar() const { return data.builtin.si1; }
 var(uint1& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_uint1(); data.builtin.ui1=r; } var(const uint1& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_uint1(); data.builtin.ui1=r; } inline uint1& uchar() { return data.builtin.ui1; } inline const uint1& uchar() const { return data.builtin.ui1; }
 var(sint2& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_sint2(); data.builtin.si2=r; } var(const sint2& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_sint2(); data.builtin.si2=r; } inline sint2& sshort() { return data.builtin.si2; } inline const sint2& sshort() const { return data.builtin.si2; }
 var(uint2& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_uint2(); data.builtin.ui2=r; } var(const uint2& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_uint2(); data.builtin.ui2=r; } inline uint2& ushort() { return data.builtin.ui2; } inline const uint2& ushort() const { return data.builtin.ui2; }
 var(sint4& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_sint4(); data.builtin.si4=r; } var(const sint4& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_sint4(); data.builtin.si4=r; } inline sint4& sint() { return data.builtin.si4; } inline const sint4& sint() const { return data.builtin.si4; }
 var(uint4& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_uint4(); data.builtin.ui4=r; } var(const uint4& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_uint4(); data.builtin.ui4=r; } inline uint4& uint() { return data.builtin.ui4; } inline const uint4& uint() const { return data.builtin.ui4; }
 var(sint8& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_sint8(); data.builtin.si8=r; } var(const sint8& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_sint8(); data.builtin.si8=r; } inline sint8& slong() { return data.builtin.si8; } inline const sint8& slong() const { return data.builtin.si8; }
 var(uint8& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_uint8(); data.builtin.ui8=r; } var(const uint8& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_uint8(); data.builtin.ui8=r; } inline uint8& ulong() { return data.builtin.ui8; } inline const uint8& ulong() const { return data.builtin.ui8; }
 var(real4& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_real4(); data.builtin.r4=r; } var(const real4& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_real4(); data.builtin.r4=r; } inline real4& flt() { return data.builtin.r4; } inline const real4& flt() const { return data.builtin.r4; }
 var(real8& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_real8(); data.builtin.r8=r; } var(const real8& r) { ; init_as_undefined(); set_type_builtin(); set_builtin_real8(); data.builtin.r8=r; } inline real8& dbl() { return data.builtin.r8; } inline const real8& dbl() const { return data.builtin.r8; }
# 676 "pypp.hpp"
 var(string& r) {
  ;
  init_as_undefined();
  set_type_stack();
  set_obj_str();
  data.stack.pstr=&r;
 }


 var(const string& r) {
  ;
  init_as_undefined();
  construct_from_const_cstr(r.c_str());
 }
 var(char* r) {
 
  init_as_undefined();
  construct_from_const_cstr(r);
 }
 var(const char* r) {
 
  init_as_undefined();
  construct_from_const_cstr(r);
 }
 var(const char* begin, const char* end) {
  ;
  init_as_undefined();
  str s(begin, end);
  init_as_str(s.c_str());
 }


 var(list& r) {
  ;
  init_as_undefined();
  set_type_stack();
  set_obj_list();
  data.stack.plist=&r;
 }


 var(var* begin, var* end) {
  ;
  init_as_undefined();
  init_as_list(begin, end);
 }


 var(tuple& r) {
  ;
  init_as_undefined();
  set_type_stack();
  set_obj_tuple();
  data.stack.ptuple=&r;
 }


 var(var a, var b) {
  ;
  init_as_undefined();
  var tmp[]={a, b};
  init_as_tuple(tmp, tmp+2);
 }
 var(var a, var b, var c) {
  ;
  init_as_undefined();
  var tmp[]={a, b, c};
  init_as_tuple(tmp, tmp+3);
 }
 var(var a, var b, var c, var d) {
  ;
  init_as_undefined();
  var tmp[]={a, b, c, d};
  init_as_tuple(tmp, tmp+4);
 }
 var(var a, var b, var c, var d, var e) {
  ;
  init_as_undefined();
  var tmp[]={a, b, c, d, e};
  init_as_tuple(tmp, tmp+5);
 }
 var(var a, var b, var c, var d, var e, var f) {
  ;
  init_as_undefined();
  var tmp[]={a, b, c, d, e, f};
  init_as_tuple(tmp, tmp+6);
 }
 var(var a, var b, var c, var d, var e, var f, var g) {
  ;
  init_as_undefined();
  var tmp[]={a, b, c, d, e, f, g};
  init_as_tuple(tmp, tmp+7);
 }
 var(var a, var b, var c, var d, var e, var f, var g, var h) {
  ;
  init_as_undefined();
  var tmp[]={a, b, c, d, e, f, g, h};
  init_as_tuple(tmp, tmp+8);
 }


 var(set& r) {
  ;
  init_as_undefined();
  set_type_stack();
  set_obj_set();
  data.stack.pset=&r;
 }


 var(var* begin, var* end, int) {
  ;
  init_as_undefined();
  init_as_set(begin, end);
 }


 var(dict& r) {
  ;
  init_as_undefined();
  set_type_stack();
  set_obj_dict();
  data.stack.pdict=&r;
 }


 var(var* begin, var* end, float) {
  ;
  init_as_undefined();
  init_as_dict(begin, end);
 }


 string tostr() {
  if (is_str()) {
   if (is_stack()) return *data.stack.pstr;
   if (is_heap()) return *data.heap.str.pstr;
  }
  return "<in tostr: not a string>";
 }

 string& refstr() {
  if (is_str()) {
   if (is_stack()) return *data.stack.pstr;
   if (is_heap()) return *data.heap.str.pstr;
  } else {cout<<"trace:\n\t"<<"refstr: not a string : cannot get ref"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<821<<endl;assert(false);};};
  return *data.stack.pstr;
 }

 const char* cstr() const {
  if (is_str()) {
   if (is_stack()) return (*data.stack.pstr).c_str();
   if (is_heap()) return (*data.heap.str.pstr).c_str();
  }
  return "<in cstr: this var seems not a string>";
 }


 list tolist() const {
  if (is_list()) {
   if (is_stack()) return *data.stack.plist;
   if (is_heap()) return *data.heap.list.plist;
  } else {cout<<"trace:\n\t"<<"tolist: not a list : cannot get a copy"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<838<<endl;assert(false);};};
  return list();
 }

 list& reflist() {
  if (is_list()) {
   if (is_stack()) return *data.stack.plist;
   if (is_heap()) return *data.heap.list.plist;
  } else {cout<<"trace:\n\t"<<"reflist: not a list : cannot get ref"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<846<<endl;assert(false);};};
  return *data.stack.plist;
 }


 tuple totuple() const {
  if (is_tuple()) {
   if (is_stack()) return *data.stack.ptuple;
   if (is_heap()) return *data.heap.tuple.ptuple;
  } else {cout<<"trace:\n\t"<<"totuple: not a tuple : cannot get copy"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<855<<endl;assert(false);};};
  return tuple();
 }

 tuple& reftuple() {
  if (is_tuple()) {
   if (is_stack()) return *data.stack.ptuple;
   if (is_heap()) return *data.heap.tuple.ptuple;
  } else {cout<<"trace:\n\t"<<"reftuple: not a tuple : cannot get ref"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<863<<endl;assert(false);};};
  return *data.stack.ptuple;
 }


 set toset() const {
  if (is_set()) {
   if (is_stack()) return *data.stack.pset;
   if (is_heap()) return *data.heap.set.pset;
  } else {cout<<"trace:\n\t"<<"toset: not a set : cannot get copy"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<872<<endl;assert(false);};};
  return set();
 }

 set& refset() {
  if (is_set()) {
   if (is_stack()) return *data.stack.pset;
   if (is_heap()) return *data.heap.set.pset;
  } else {cout<<"trace:\n\t"<<"refset: not a set : cannot get ref"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<880<<endl;assert(false);};};
  return *data.stack.pset;
 }


 dict todict() const {
  if (is_dict()) {
   if (is_stack()) return *data.stack.pdict;
   if (is_heap()) return *data.heap.dict.pdict;
  } else {cout<<"trace:\n\t"<<"todict: not a dict : cannot get copy"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<889<<endl;assert(false);};};
  return dict();
 }

 dict& refdict() {
  if (is_dict()) {
   if (is_stack()) return *data.stack.pdict;
   if (is_heap()) return *data.heap.dict.pdict;
  } else {cout<<"trace:\n\t"<<"refdict: not a dict : cannot get ref"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<897<<endl;assert(false);};};
  return *data.stack.pdict;
 }


 var& aslist() {

  var& me=*this;
  if (is_list()) return me;
  else {

   return me;
  }
 }
 var& asstr() {
  var& me=*this;
  if (is_str()) return me;
  else {

   return me;
  }
 }
 var& astuple() {
  var& me=*this;
  if (is_tuple()) return me;
  else {

   return me;
  }
 }
 var& asset() {
  var& me=*this;
  if (is_set()) return me;
  else {

   return me;
  }
 }
 var& asdict() {
  var& me=*this;
  if (is_dict()) return me;
  else {

   return me;
  }
 }



 var& operator =(var& r) {


  ;
  return smart_clone_from_another_var(r);
 }
# 964 "pypp.hpp"
 var& operator =(char* r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const char* r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(string& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const string& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(sint1& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const sint1& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(uint1& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const uint1& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(sint2& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const sint2& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(uint2& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const uint2& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(sint4& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const sint4& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(uint4& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const uint4& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(sint8& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const sint8& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(uint8& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const uint8& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(real4& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const real4& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
 var& operator =(real8& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); } var& operator =(const real8& r) { ; var tmp(r); return smart_clone_from_another_var(tmp); }
# 1002 "pypp.hpp"
 bool operator < (const var& r) const { const var& a=*this, &b=r; if (a.is_builtin() AND b.is_builtin()) { if (a.is_snum() AND b.is_snum()) return a.data.dwords64signed.all < b.data.dwords64signed.all; else if (a.is_unum() AND b.is_unum()) return a.data.dwords64.all < b.data.dwords64.all; else if (a.is_snum() AND b.is_unum()) return a.data.dwords64signed.all < b.data.dwords64.all; else if (a.is_unum() AND b.is_snum()) return a.data.dwords64.all < b.data.dwords64signed.all; else if (a.is_float() AND b.is_float()) return a.data.builtin.f < b.data.builtin.f; else if (a.is_double() AND b.is_double()) return a.data.builtin.d < b.data.builtin.d; else if (a.is_float() AND b.is_double()) return a.data.builtin.f < b.data.builtin.d; else if (a.is_double() AND b.is_float()) return a.data.builtin.d < b.data.builtin.f; else return &a < &b; } else if (a.is_str() AND b.is_str()) { if (a.is_heap() AND b.is_heap()) return (*a.data.heap.str.pstr) < (*b.data.heap.str.pstr); else if (a.is_stack() AND b.is_stack()) return (*a.data.stack.pstr) < (*b.data.stack.pstr); else if (a.is_heap() AND b.is_stack()) return (*a.data.heap.str.pstr) < (*b.data.stack.pstr); else if (a.is_stack() AND b.is_heap()) return (*a.data.stack.pstr) < (*b.data.heap.str.pstr); else {cout<<"trace:\n\t"<<"in operator <: impossible here"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1002<<endl;assert(false);};};return false; } else return &a < &b; }
 bool operator > (const var& r) const { const var& a=*this, &b=r; if (a.is_builtin() AND b.is_builtin()) { if (a.is_snum() AND b.is_snum()) return a.data.dwords64signed.all > b.data.dwords64signed.all; else if (a.is_unum() AND b.is_unum()) return a.data.dwords64.all > b.data.dwords64.all; else if (a.is_snum() AND b.is_unum()) return a.data.dwords64signed.all > b.data.dwords64.all; else if (a.is_unum() AND b.is_snum()) return a.data.dwords64.all > b.data.dwords64signed.all; else if (a.is_float() AND b.is_float()) return a.data.builtin.f > b.data.builtin.f; else if (a.is_double() AND b.is_double()) return a.data.builtin.d > b.data.builtin.d; else if (a.is_float() AND b.is_double()) return a.data.builtin.f > b.data.builtin.d; else if (a.is_double() AND b.is_float()) return a.data.builtin.d > b.data.builtin.f; else return &a > &b; } else if (a.is_str() AND b.is_str()) { if (a.is_heap() AND b.is_heap()) return (*a.data.heap.str.pstr) > (*b.data.heap.str.pstr); else if (a.is_stack() AND b.is_stack()) return (*a.data.stack.pstr) > (*b.data.stack.pstr); else if (a.is_heap() AND b.is_stack()) return (*a.data.heap.str.pstr) > (*b.data.stack.pstr); else if (a.is_stack() AND b.is_heap()) return (*a.data.stack.pstr) > (*b.data.heap.str.pstr); else {cout<<"trace:\n\t"<<"in operator >: impossible here"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1003<<endl;assert(false);};};return false; } else return &a > &b; }
 bool operator == (const var& r) const { const var& a=*this, &b=r; if (a.is_builtin() AND b.is_builtin()) { if (a.is_snum() AND b.is_snum()) return a.data.dwords64signed.all == b.data.dwords64signed.all; else if (a.is_unum() AND b.is_unum()) return a.data.dwords64.all == b.data.dwords64.all; else if (a.is_snum() AND b.is_unum()) return a.data.dwords64signed.all == b.data.dwords64.all; else if (a.is_unum() AND b.is_snum()) return a.data.dwords64.all == b.data.dwords64signed.all; else if (a.is_float() AND b.is_float()) return a.data.builtin.f == b.data.builtin.f; else if (a.is_double() AND b.is_double()) return a.data.builtin.d == b.data.builtin.d; else if (a.is_float() AND b.is_double()) return a.data.builtin.f == b.data.builtin.d; else if (a.is_double() AND b.is_float()) return a.data.builtin.d == b.data.builtin.f; else return &a == &b; } else if (a.is_str() AND b.is_str()) { if (a.is_heap() AND b.is_heap()) return (*a.data.heap.str.pstr) == (*b.data.heap.str.pstr); else if (a.is_stack() AND b.is_stack()) return (*a.data.stack.pstr) == (*b.data.stack.pstr); else if (a.is_heap() AND b.is_stack()) return (*a.data.heap.str.pstr) == (*b.data.stack.pstr); else if (a.is_stack() AND b.is_heap()) return (*a.data.stack.pstr) == (*b.data.heap.str.pstr); else {cout<<"trace:\n\t"<<"in operator ==: impossible here"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1004<<endl;assert(false);};};return false; } else return &a == &b; }
 bool operator != (const var& r) const { const var& a=*this, &b=r; if (a.is_builtin() AND b.is_builtin()) { if (a.is_snum() AND b.is_snum()) return a.data.dwords64signed.all != b.data.dwords64signed.all; else if (a.is_unum() AND b.is_unum()) return a.data.dwords64.all != b.data.dwords64.all; else if (a.is_snum() AND b.is_unum()) return a.data.dwords64signed.all != b.data.dwords64.all; else if (a.is_unum() AND b.is_snum()) return a.data.dwords64.all != b.data.dwords64signed.all; else if (a.is_float() AND b.is_float()) return a.data.builtin.f != b.data.builtin.f; else if (a.is_double() AND b.is_double()) return a.data.builtin.d != b.data.builtin.d; else if (a.is_float() AND b.is_double()) return a.data.builtin.f != b.data.builtin.d; else if (a.is_double() AND b.is_float()) return a.data.builtin.d != b.data.builtin.f; else return &a != &b; } else if (a.is_str() AND b.is_str()) { if (a.is_heap() AND b.is_heap()) return (*a.data.heap.str.pstr) != (*b.data.heap.str.pstr); else if (a.is_stack() AND b.is_stack()) return (*a.data.stack.pstr) != (*b.data.stack.pstr); else if (a.is_heap() AND b.is_stack()) return (*a.data.heap.str.pstr) != (*b.data.stack.pstr); else if (a.is_stack() AND b.is_heap()) return (*a.data.stack.pstr) != (*b.data.heap.str.pstr); else {cout<<"trace:\n\t"<<"in operator !=: impossible here"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1005<<endl;assert(false);};};return false; } else return &a != &b; }
 bool operator <= (const var& r) const { const var& a=*this, &b=r; if (a.is_builtin() AND b.is_builtin()) { if (a.is_snum() AND b.is_snum()) return a.data.dwords64signed.all <= b.data.dwords64signed.all; else if (a.is_unum() AND b.is_unum()) return a.data.dwords64.all <= b.data.dwords64.all; else if (a.is_snum() AND b.is_unum()) return a.data.dwords64signed.all <= b.data.dwords64.all; else if (a.is_unum() AND b.is_snum()) return a.data.dwords64.all <= b.data.dwords64signed.all; else if (a.is_float() AND b.is_float()) return a.data.builtin.f <= b.data.builtin.f; else if (a.is_double() AND b.is_double()) return a.data.builtin.d <= b.data.builtin.d; else if (a.is_float() AND b.is_double()) return a.data.builtin.f <= b.data.builtin.d; else if (a.is_double() AND b.is_float()) return a.data.builtin.d <= b.data.builtin.f; else return &a <= &b; } else if (a.is_str() AND b.is_str()) { if (a.is_heap() AND b.is_heap()) return (*a.data.heap.str.pstr) <= (*b.data.heap.str.pstr); else if (a.is_stack() AND b.is_stack()) return (*a.data.stack.pstr) <= (*b.data.stack.pstr); else if (a.is_heap() AND b.is_stack()) return (*a.data.heap.str.pstr) <= (*b.data.stack.pstr); else if (a.is_stack() AND b.is_heap()) return (*a.data.stack.pstr) <= (*b.data.heap.str.pstr); else {cout<<"trace:\n\t"<<"in operator <=: impossible here"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1006<<endl;assert(false);};};return false; } else return &a <= &b; }
 bool operator >= (const var& r) const { const var& a=*this, &b=r; if (a.is_builtin() AND b.is_builtin()) { if (a.is_snum() AND b.is_snum()) return a.data.dwords64signed.all >= b.data.dwords64signed.all; else if (a.is_unum() AND b.is_unum()) return a.data.dwords64.all >= b.data.dwords64.all; else if (a.is_snum() AND b.is_unum()) return a.data.dwords64signed.all >= b.data.dwords64.all; else if (a.is_unum() AND b.is_snum()) return a.data.dwords64.all >= b.data.dwords64signed.all; else if (a.is_float() AND b.is_float()) return a.data.builtin.f >= b.data.builtin.f; else if (a.is_double() AND b.is_double()) return a.data.builtin.d >= b.data.builtin.d; else if (a.is_float() AND b.is_double()) return a.data.builtin.f >= b.data.builtin.d; else if (a.is_double() AND b.is_float()) return a.data.builtin.d >= b.data.builtin.f; else return &a >= &b; } else if (a.is_str() AND b.is_str()) { if (a.is_heap() AND b.is_heap()) return (*a.data.heap.str.pstr) >= (*b.data.heap.str.pstr); else if (a.is_stack() AND b.is_stack()) return (*a.data.stack.pstr) >= (*b.data.stack.pstr); else if (a.is_heap() AND b.is_stack()) return (*a.data.heap.str.pstr) >= (*b.data.stack.pstr); else if (a.is_stack() AND b.is_heap()) return (*a.data.stack.pstr) >= (*b.data.heap.str.pstr); else {cout<<"trace:\n\t"<<"in operator >=: impossible here"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1007<<endl;assert(false);};};return false; } else return &a >= &b; }



 friend istream& operator>>(istream& in, var& v) {
  if (v.is_undefined()) {
   return in;
  } else if (v.is_str()) {
   if (v.is_heap()) in>>(*v.data.heap.str.pstr);
   else if (v.is_stack()) in>>(*v.data.stack.pstr);
   else {cout<<"trace:\n\t"<<"in operator>>: is str but not heap and stack"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1017<<endl;assert(false);};};
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
   return in;
  } else if (v.is_tuple()) {
   return in;
  } else if (v.is_set()) {
   return in;
  } else if (v.is_dict()) {
   return in;
  } else {cout<<"trace:\n\t"<<"in operator>>: impossible run here"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1037<<endl;assert(false);};};
  return in;
 }

 friend ostream& operator<<(ostream& out, const var& v) {
  if (v.is_undefined()) {
   out<<"<undefined var>";
  } else if (v.is_str()) {
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
   if (v.is_stack()) {
    list*& p= data.stack.plist; list& l=*p;;
    print(l);
   } else {
    heaplist*& h= data.heap.list.pheap; list*& p= data.heap.list.plist; list& l=*p;;
   }
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
# 1105 "pypp.hpp"
 list split() {
  assert(is_sequence());


 }


 var& join() {
  assert(is_sequence());
 }
# 1124 "pypp.hpp"
 var replace() {
  assert(is_str());

 }

 size_t len() {
  assert(is_sequence());
  if (is_str()) return refstr().size();
  else if (is_list()) return reflist().size();
  else {cout<<"trace:\n\t"<<"in len: not a sequence"<<endl;{cout<<"die @ "<<"pypp.hpp"<<" line:"<<1133<<endl;assert(false);};};
  return 0;
 }




 var& keys() {
  assert(is_dict());
  var& me =*this;
  return me;
 }

 var& values() {
  var& me =*this;
  return me;
 }

 bool haskey(var key) {
  return false;
 }
 var append(var node) {


  return var();
 }

 var& extend(var rlist) {


  return *this;
 }
 var tosorted() {
  return var();
 }
 void each() {}
 void foreach() {}


 void slice() {}
 void add() {}
 void dot() {}

 var begin() { return var(); }
 var next() { return var(); }
 bool end() {}
};



var str(const char* p=0) { return var(p); }
var str(const char* begin, const char* end) { return var(begin, end); }
var list(var* begin=0, var* end=0) { return var(begin, end); }
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
