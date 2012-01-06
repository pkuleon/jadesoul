#ifndef TUPLE_HPP_1325477907_43
#define TUPLE_HPP_1325477907_43
/**
 * File: tuple.hpp
 * Description: this file is automatically generated by tuple-generator.py
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-02 12:18:27.450000
 * Written In: Peking University, beijing, China
 * Genetated Date: 2012-01-06 20:39:31.927000
 */

#include "includes.hpp"

//template code of tuple
/*
template<class T1=str, class T2=T1, ...>
class  tuple : public object {
public:
	T1& v1;
	T2& v2;
	...
	tuple(T1& t1, T2& t2, ...):v1(t1), v2(t2), ... {}
	
	tuple(tuple& t):v1(t.v1), v2(t.v2), ... {}
	
	template<class R1, class R2...>
	tuple& operator=(const tuple<R1, R2...>& t) {
		v1=t.v1;
		v2=t.v2;
		...
		return *this;
	}
	
	//TODO
	template<class R1, class R2...>
	tuple& assign(R1& r1, R2& r2, ...) {
		v1=r1;
		v2=r2;
	}
	
	friend ostream& operator <<(ostream& o, const tuple& t) {
		return o<<"("
			<<t.v1
			<<t.v2
			...
			<<", "<<")"<<endl;
	}
	
	friend istream& operator >>(istream& i, tuple& t) {
		return i
			>>t.v1
			>>t.v2
			...;
	}
	
	uint size() const {
		return 2;
	}
};

template<class T1, class T2...>
inline tuple<T1, T2...> tuple_(T1& t1, T2& t2...) {
	return tuple<T1, T2...>(t1, t2...);
}

*/


template<class T1=str>
class  tuple1 : public object {
public:
	T1& v1;
	
	tuple1(T1& t1):v1(t1) {}
	
	tuple1(tuple1& t):v1(t.v1) {}
	
	template<class R1>
	tuple1& operator=(const tuple1<R1>& t) {
		v1=t.v1;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple1& t) {
		return o<<"("<<t.v1<<")";
	}
	
	friend istream& operator >>(istream& i, tuple1& t) {
		return i>>t.v1;
	}
	
	uint size() const {
		return 1;
	}
};

template<class T1>
inline tuple1<T1> tuple(T1& t1) {
	return tuple1<T1>(t1);
}




template<class T1=str, class T2=T1>
class  tuple2 : public object {
public:
	T1& v1;
	T2& v2;
	
	tuple2(T1& t1, T2& t2):v1(t1), v2(t2) {}
	
	tuple2(tuple2& t):v1(t.v1), v2(t.v2) {}
	
	template<class R1, class R2>
	tuple2& operator=(const tuple2<R1, R2>& t) {
		v1=t.v1;
		v2=t.v2;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple2& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<")";
	}
	
	friend istream& operator >>(istream& i, tuple2& t) {
		return i>>t.v1>>t.v2;
	}
	
	uint size() const {
		return 2;
	}
};

template<class T1, class T2>
inline tuple2<T1, T2> tuple(T1& t1, T2& t2) {
	return tuple2<T1, T2>(t1, t2);
}




template<class T1=str, class T2=T1, class T3=T1>
class  tuple3 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	
	tuple3(T1& t1, T2& t2, T3& t3):v1(t1), v2(t2), v3(t3) {}
	
	tuple3(tuple3& t):v1(t.v1), v2(t.v2), v3(t.v3) {}
	
	template<class R1, class R2, class R3>
	tuple3& operator=(const tuple3<R1, R2, R3>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple3& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<")";
	}
	
	friend istream& operator >>(istream& i, tuple3& t) {
		return i>>t.v1>>t.v2>>t.v3;
	}
	
	uint size() const {
		return 3;
	}
};

template<class T1, class T2, class T3>
inline tuple3<T1, T2, T3> tuple(T1& t1, T2& t2, T3& t3) {
	return tuple3<T1, T2, T3>(t1, t2, t3);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1>
class  tuple4 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	
	tuple4(T1& t1, T2& t2, T3& t3, T4& t4):v1(t1), v2(t2), v3(t3), v4(t4) {}
	
	tuple4(tuple4& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4) {}
	
	template<class R1, class R2, class R3, class R4>
	tuple4& operator=(const tuple4<R1, R2, R3, R4>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple4& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<")";
	}
	
	friend istream& operator >>(istream& i, tuple4& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4;
	}
	
	uint size() const {
		return 4;
	}
};

template<class T1, class T2, class T3, class T4>
inline tuple4<T1, T2, T3, T4> tuple(T1& t1, T2& t2, T3& t3, T4& t4) {
	return tuple4<T1, T2, T3, T4>(t1, t2, t3, t4);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1>
class  tuple5 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	
	tuple5(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5) {}
	
	tuple5(tuple5& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5) {}
	
	template<class R1, class R2, class R3, class R4, class R5>
	tuple5& operator=(const tuple5<R1, R2, R3, R4, R5>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple5& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<")";
	}
	
	friend istream& operator >>(istream& i, tuple5& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5;
	}
	
	uint size() const {
		return 5;
	}
};

template<class T1, class T2, class T3, class T4, class T5>
inline tuple5<T1, T2, T3, T4, T5> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5) {
	return tuple5<T1, T2, T3, T4, T5>(t1, t2, t3, t4, t5);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1>
class  tuple6 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	
	tuple6(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6) {}
	
	tuple6(tuple6& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6>
	tuple6& operator=(const tuple6<R1, R2, R3, R4, R5, R6>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple6& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<")";
	}
	
	friend istream& operator >>(istream& i, tuple6& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6;
	}
	
	uint size() const {
		return 6;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6>
inline tuple6<T1, T2, T3, T4, T5, T6> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6) {
	return tuple6<T1, T2, T3, T4, T5, T6>(t1, t2, t3, t4, t5, t6);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1>
class  tuple7 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	
	tuple7(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7) {}
	
	tuple7(tuple7& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7>
	tuple7& operator=(const tuple7<R1, R2, R3, R4, R5, R6, R7>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple7& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<")";
	}
	
	friend istream& operator >>(istream& i, tuple7& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7;
	}
	
	uint size() const {
		return 7;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7>
inline tuple7<T1, T2, T3, T4, T5, T6, T7> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7) {
	return tuple7<T1, T2, T3, T4, T5, T6, T7>(t1, t2, t3, t4, t5, t6, t7);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1>
class  tuple8 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	
	tuple8(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8) {}
	
	tuple8(tuple8& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8>
	tuple8& operator=(const tuple8<R1, R2, R3, R4, R5, R6, R7, R8>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple8& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<")";
	}
	
	friend istream& operator >>(istream& i, tuple8& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8;
	}
	
	uint size() const {
		return 8;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8>
inline tuple8<T1, T2, T3, T4, T5, T6, T7, T8> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8) {
	return tuple8<T1, T2, T3, T4, T5, T6, T7, T8>(t1, t2, t3, t4, t5, t6, t7, t8);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1>
class  tuple9 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	
	tuple9(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9) {}
	
	tuple9(tuple9& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9>
	tuple9& operator=(const tuple9<R1, R2, R3, R4, R5, R6, R7, R8, R9>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple9& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<")";
	}
	
	friend istream& operator >>(istream& i, tuple9& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9;
	}
	
	uint size() const {
		return 9;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9>
inline tuple9<T1, T2, T3, T4, T5, T6, T7, T8, T9> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9) {
	return tuple9<T1, T2, T3, T4, T5, T6, T7, T8, T9>(t1, t2, t3, t4, t5, t6, t7, t8, t9);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1>
class  tuple10 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	
	tuple10(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10) {}
	
	tuple10(tuple10& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10>
	tuple10& operator=(const tuple10<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple10& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<")";
	}
	
	friend istream& operator >>(istream& i, tuple10& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10;
	}
	
	uint size() const {
		return 10;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10>
inline tuple10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10) {
	return tuple10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1>
class  tuple11 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	
	tuple11(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11) {}
	
	tuple11(tuple11& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11>
	tuple11& operator=(const tuple11<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple11& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<")";
	}
	
	friend istream& operator >>(istream& i, tuple11& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11;
	}
	
	uint size() const {
		return 11;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11>
inline tuple11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11) {
	return tuple11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1>
class  tuple12 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	
	tuple12(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12) {}
	
	tuple12(tuple12& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12>
	tuple12& operator=(const tuple12<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple12& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<")";
	}
	
	friend istream& operator >>(istream& i, tuple12& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12;
	}
	
	uint size() const {
		return 12;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12>
inline tuple12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12) {
	return tuple12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1>
class  tuple13 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	T13& v13;
	
	tuple13(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12), v13(t13) {}
	
	tuple13(tuple13& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12), v13(t.v13) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12, class R13>
	tuple13& operator=(const tuple13<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		v13=t.v13;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple13& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<")";
	}
	
	friend istream& operator >>(istream& i, tuple13& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13;
	}
	
	uint size() const {
		return 13;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13>
inline tuple13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13) {
	return tuple13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1>
class  tuple14 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	T13& v13;
	T14& v14;
	
	tuple14(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12), v13(t13), v14(t14) {}
	
	tuple14(tuple14& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12), v13(t.v13), v14(t.v14) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12, class R13, class R14>
	tuple14& operator=(const tuple14<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		v13=t.v13;
		v14=t.v14;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple14& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<")";
	}
	
	friend istream& operator >>(istream& i, tuple14& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14;
	}
	
	uint size() const {
		return 14;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14>
inline tuple14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14) {
	return tuple14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1>
class  tuple15 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	T13& v13;
	T14& v14;
	T15& v15;
	
	tuple15(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12), v13(t13), v14(t14), v15(t15) {}
	
	tuple15(tuple15& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12), v13(t.v13), v14(t.v14), v15(t.v15) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12, class R13, class R14, class R15>
	tuple15& operator=(const tuple15<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		v13=t.v13;
		v14=t.v14;
		v15=t.v15;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple15& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<")";
	}
	
	friend istream& operator >>(istream& i, tuple15& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15;
	}
	
	uint size() const {
		return 15;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15>
inline tuple15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15) {
	return tuple15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1>
class  tuple16 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	T13& v13;
	T14& v14;
	T15& v15;
	T16& v16;
	
	tuple16(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12), v13(t13), v14(t14), v15(t15), v16(t16) {}
	
	tuple16(tuple16& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12), v13(t.v13), v14(t.v14), v15(t.v15), v16(t.v16) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12, class R13, class R14, class R15, class R16>
	tuple16& operator=(const tuple16<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15, R16>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		v13=t.v13;
		v14=t.v14;
		v15=t.v15;
		v16=t.v16;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple16& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<")";
	}
	
	friend istream& operator >>(istream& i, tuple16& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16;
	}
	
	uint size() const {
		return 16;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15, class T16>
inline tuple16<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16) {
	return tuple16<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1>
class  tuple17 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	T13& v13;
	T14& v14;
	T15& v15;
	T16& v16;
	T17& v17;
	
	tuple17(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16, T17& t17):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12), v13(t13), v14(t14), v15(t15), v16(t16), v17(t17) {}
	
	tuple17(tuple17& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12), v13(t.v13), v14(t.v14), v15(t.v15), v16(t.v16), v17(t.v17) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12, class R13, class R14, class R15, class R16, class R17>
	tuple17& operator=(const tuple17<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		v13=t.v13;
		v14=t.v14;
		v15=t.v15;
		v16=t.v16;
		v17=t.v17;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple17& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<")";
	}
	
	friend istream& operator >>(istream& i, tuple17& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17;
	}
	
	uint size() const {
		return 17;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15, class T16, class T17>
inline tuple17<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16, T17& t17) {
	return tuple17<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1>
class  tuple18 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	T13& v13;
	T14& v14;
	T15& v15;
	T16& v16;
	T17& v17;
	T18& v18;
	
	tuple18(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16, T17& t17, T18& t18):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12), v13(t13), v14(t14), v15(t15), v16(t16), v17(t17), v18(t18) {}
	
	tuple18(tuple18& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12), v13(t.v13), v14(t.v14), v15(t.v15), v16(t.v16), v17(t.v17), v18(t.v18) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12, class R13, class R14, class R15, class R16, class R17, class R18>
	tuple18& operator=(const tuple18<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		v13=t.v13;
		v14=t.v14;
		v15=t.v15;
		v16=t.v16;
		v17=t.v17;
		v18=t.v18;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple18& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<")";
	}
	
	friend istream& operator >>(istream& i, tuple18& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18;
	}
	
	uint size() const {
		return 18;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15, class T16, class T17, class T18>
inline tuple18<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16, T17& t17, T18& t18) {
	return tuple18<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1>
class  tuple19 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	T13& v13;
	T14& v14;
	T15& v15;
	T16& v16;
	T17& v17;
	T18& v18;
	T19& v19;
	
	tuple19(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16, T17& t17, T18& t18, T19& t19):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12), v13(t13), v14(t14), v15(t15), v16(t16), v17(t17), v18(t18), v19(t19) {}
	
	tuple19(tuple19& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12), v13(t.v13), v14(t.v14), v15(t.v15), v16(t.v16), v17(t.v17), v18(t.v18), v19(t.v19) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12, class R13, class R14, class R15, class R16, class R17, class R18, class R19>
	tuple19& operator=(const tuple19<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		v13=t.v13;
		v14=t.v14;
		v15=t.v15;
		v16=t.v16;
		v17=t.v17;
		v18=t.v18;
		v19=t.v19;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple19& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<")";
	}
	
	friend istream& operator >>(istream& i, tuple19& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19;
	}
	
	uint size() const {
		return 19;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15, class T16, class T17, class T18, class T19>
inline tuple19<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16, T17& t17, T18& t18, T19& t19) {
	return tuple19<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19);
}




template<class T1=str, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1>
class  tuple20 : public object {
public:
	T1& v1;
	T2& v2;
	T3& v3;
	T4& v4;
	T5& v5;
	T6& v6;
	T7& v7;
	T8& v8;
	T9& v9;
	T10& v10;
	T11& v11;
	T12& v12;
	T13& v13;
	T14& v14;
	T15& v15;
	T16& v16;
	T17& v17;
	T18& v18;
	T19& v19;
	T20& v20;
	
	tuple20(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16, T17& t17, T18& t18, T19& t19, T20& t20):v1(t1), v2(t2), v3(t3), v4(t4), v5(t5), v6(t6), v7(t7), v8(t8), v9(t9), v10(t10), v11(t11), v12(t12), v13(t13), v14(t14), v15(t15), v16(t16), v17(t17), v18(t18), v19(t19), v20(t20) {}
	
	tuple20(tuple20& t):v1(t.v1), v2(t.v2), v3(t.v3), v4(t.v4), v5(t.v5), v6(t.v6), v7(t.v7), v8(t.v8), v9(t.v9), v10(t.v10), v11(t.v11), v12(t.v12), v13(t.v13), v14(t.v14), v15(t.v15), v16(t.v16), v17(t.v17), v18(t.v18), v19(t.v19), v20(t.v20) {}
	
	template<class R1, class R2, class R3, class R4, class R5, class R6, class R7, class R8, class R9, class R10, class R11, class R12, class R13, class R14, class R15, class R16, class R17, class R18, class R19, class R20>
	tuple20& operator=(const tuple20<R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19, R20>& t) {
		v1=t.v1;
		v2=t.v2;
		v3=t.v3;
		v4=t.v4;
		v5=t.v5;
		v6=t.v6;
		v7=t.v7;
		v8=t.v8;
		v9=t.v9;
		v10=t.v10;
		v11=t.v11;
		v12=t.v12;
		v13=t.v13;
		v14=t.v14;
		v15=t.v15;
		v16=t.v16;
		v17=t.v17;
		v18=t.v18;
		v19=t.v19;
		v20=t.v20;
		return *this;
	}
	
	friend ostream& operator <<(ostream& o, const tuple20& t) {
		return o<<"("<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<")";
	}
	
	friend istream& operator >>(istream& i, tuple20& t) {
		return i>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20;
	}
	
	uint size() const {
		return 20;
	}
};

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15, class T16, class T17, class T18, class T19, class T20>
inline tuple20<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20> tuple(T1& t1, T2& t2, T3& t3, T4& t4, T5& t5, T6& t6, T7& t7, T8& t8, T9& t9, T10& t10, T11& t11, T12& t12, T13& t13, T14& t14, T15& t15, T16& t16, T17& t17, T18& t18, T19& t19, T20& t20) {
	return tuple20<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20>(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20);
}



#endif /* TUPLE_HPP_1325477907_43 */
