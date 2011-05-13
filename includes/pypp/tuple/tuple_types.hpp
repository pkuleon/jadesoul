#ifndef TUPLE_TYPES_HPP_BY_JADESOUL
#define TUPLE_TYPES_HPP_BY_JADESOUL
/**
 * File: tuple_types.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-08 00:34:07.779000
 * Written In: Peking University, beijing, China$
 */

 template<class T1=int>
struct tuple1 {
	T1 v1;
	friend ostream& operator <<(ostream& out, const tuple1& t) {
		return out<<"( "<<t.v1<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple1& t) {
		return in>>t.v1;
	}
};

template<class T1=int, class T2=T1>
struct tuple2 {
	T1 v1;
	T2 v2;
	friend ostream& operator <<(ostream& out, const tuple2& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple2& t) {
		return in>>t.v1>>t.v2;
	}
};

template<class T1=int, class T2=T1, class T3=T1>
struct tuple3 {
	T1 v1;
	T2 v2;
	T3 v3;
	friend ostream& operator <<(ostream& out, const tuple3& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple3& t) {
		return in>>t.v1>>t.v2>>t.v3;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1>
struct tuple4 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	friend ostream& operator <<(ostream& out, const tuple4& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple4& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1>
struct tuple5 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	friend ostream& operator <<(ostream& out, const tuple5& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple5& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1>
struct tuple6 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	friend ostream& operator <<(ostream& out, const tuple6& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple6& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1>
struct tuple7 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	friend ostream& operator <<(ostream& out, const tuple7& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple7& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1>
struct tuple8 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	friend ostream& operator <<(ostream& out, const tuple8& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple8& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1>
struct tuple9 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	friend ostream& operator <<(ostream& out, const tuple9& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple9& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1>
struct tuple10 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	friend ostream& operator <<(ostream& out, const tuple10& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple10& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1>
struct tuple11 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	friend ostream& operator <<(ostream& out, const tuple11& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple11& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1>
struct tuple12 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	friend ostream& operator <<(ostream& out, const tuple12& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple12& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1>
struct tuple13 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	friend ostream& operator <<(ostream& out, const tuple13& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple13& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1>
struct tuple14 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	friend ostream& operator <<(ostream& out, const tuple14& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple14& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1>
struct tuple15 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	friend ostream& operator <<(ostream& out, const tuple15& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple15& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1>
struct tuple16 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	friend ostream& operator <<(ostream& out, const tuple16& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple16& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1>
struct tuple17 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	friend ostream& operator <<(ostream& out, const tuple17& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple17& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1>
struct tuple18 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	friend ostream& operator <<(ostream& out, const tuple18& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple18& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1>
struct tuple19 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	friend ostream& operator <<(ostream& out, const tuple19& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple19& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1>
struct tuple20 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	friend ostream& operator <<(ostream& out, const tuple20& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple20& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1>
struct tuple21 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	friend ostream& operator <<(ostream& out, const tuple21& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple21& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1>
struct tuple22 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	friend ostream& operator <<(ostream& out, const tuple22& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple22& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1>
struct tuple23 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	friend ostream& operator <<(ostream& out, const tuple23& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple23& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1>
struct tuple24 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	friend ostream& operator <<(ostream& out, const tuple24& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple24& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1>
struct tuple25 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	friend ostream& operator <<(ostream& out, const tuple25& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple25& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1>
struct tuple26 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	friend ostream& operator <<(ostream& out, const tuple26& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple26& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1>
struct tuple27 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	friend ostream& operator <<(ostream& out, const tuple27& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple27& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1>
struct tuple28 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	friend ostream& operator <<(ostream& out, const tuple28& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple28& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1>
struct tuple29 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	friend ostream& operator <<(ostream& out, const tuple29& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple29& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1>
struct tuple30 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	friend ostream& operator <<(ostream& out, const tuple30& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple30& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1>
struct tuple31 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	friend ostream& operator <<(ostream& out, const tuple31& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple31& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1>
struct tuple32 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	friend ostream& operator <<(ostream& out, const tuple32& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple32& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1>
struct tuple33 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	friend ostream& operator <<(ostream& out, const tuple33& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple33& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1>
struct tuple34 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	friend ostream& operator <<(ostream& out, const tuple34& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple34& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1>
struct tuple35 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	friend ostream& operator <<(ostream& out, const tuple35& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple35& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1>
struct tuple36 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	friend ostream& operator <<(ostream& out, const tuple36& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple36& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1>
struct tuple37 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	friend ostream& operator <<(ostream& out, const tuple37& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple37& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1>
struct tuple38 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	friend ostream& operator <<(ostream& out, const tuple38& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple38& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1>
struct tuple39 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	friend ostream& operator <<(ostream& out, const tuple39& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple39& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1>
struct tuple40 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	friend ostream& operator <<(ostream& out, const tuple40& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple40& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1>
struct tuple41 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	friend ostream& operator <<(ostream& out, const tuple41& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple41& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1>
struct tuple42 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	friend ostream& operator <<(ostream& out, const tuple42& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple42& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1>
struct tuple43 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	friend ostream& operator <<(ostream& out, const tuple43& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple43& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1>
struct tuple44 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	friend ostream& operator <<(ostream& out, const tuple44& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple44& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1>
struct tuple45 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	friend ostream& operator <<(ostream& out, const tuple45& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple45& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1>
struct tuple46 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	friend ostream& operator <<(ostream& out, const tuple46& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple46& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1>
struct tuple47 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	friend ostream& operator <<(ostream& out, const tuple47& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple47& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1>
struct tuple48 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	friend ostream& operator <<(ostream& out, const tuple48& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple48& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1>
struct tuple49 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	friend ostream& operator <<(ostream& out, const tuple49& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple49& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1>
struct tuple50 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	friend ostream& operator <<(ostream& out, const tuple50& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple50& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1>
struct tuple51 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	friend ostream& operator <<(ostream& out, const tuple51& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple51& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1>
struct tuple52 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	friend ostream& operator <<(ostream& out, const tuple52& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple52& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1>
struct tuple53 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	friend ostream& operator <<(ostream& out, const tuple53& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple53& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1>
struct tuple54 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	friend ostream& operator <<(ostream& out, const tuple54& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple54& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1>
struct tuple55 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	friend ostream& operator <<(ostream& out, const tuple55& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple55& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1>
struct tuple56 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	friend ostream& operator <<(ostream& out, const tuple56& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple56& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1>
struct tuple57 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	friend ostream& operator <<(ostream& out, const tuple57& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple57& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1>
struct tuple58 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	friend ostream& operator <<(ostream& out, const tuple58& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple58& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1>
struct tuple59 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	friend ostream& operator <<(ostream& out, const tuple59& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple59& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1>
struct tuple60 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	friend ostream& operator <<(ostream& out, const tuple60& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple60& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1>
struct tuple61 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	friend ostream& operator <<(ostream& out, const tuple61& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple61& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1>
struct tuple62 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	friend ostream& operator <<(ostream& out, const tuple62& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple62& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1>
struct tuple63 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	friend ostream& operator <<(ostream& out, const tuple63& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple63& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1>
struct tuple64 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	friend ostream& operator <<(ostream& out, const tuple64& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple64& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1>
struct tuple65 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	friend ostream& operator <<(ostream& out, const tuple65& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple65& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1>
struct tuple66 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	friend ostream& operator <<(ostream& out, const tuple66& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple66& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1>
struct tuple67 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	friend ostream& operator <<(ostream& out, const tuple67& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple67& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1>
struct tuple68 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	friend ostream& operator <<(ostream& out, const tuple68& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple68& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1>
struct tuple69 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	friend ostream& operator <<(ostream& out, const tuple69& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple69& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1>
struct tuple70 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	friend ostream& operator <<(ostream& out, const tuple70& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple70& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1>
struct tuple71 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	friend ostream& operator <<(ostream& out, const tuple71& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple71& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1>
struct tuple72 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	friend ostream& operator <<(ostream& out, const tuple72& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple72& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1>
struct tuple73 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	friend ostream& operator <<(ostream& out, const tuple73& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple73& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1>
struct tuple74 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	friend ostream& operator <<(ostream& out, const tuple74& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple74& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1>
struct tuple75 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	friend ostream& operator <<(ostream& out, const tuple75& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple75& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1>
struct tuple76 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	friend ostream& operator <<(ostream& out, const tuple76& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple76& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1>
struct tuple77 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	friend ostream& operator <<(ostream& out, const tuple77& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple77& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1>
struct tuple78 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	friend ostream& operator <<(ostream& out, const tuple78& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple78& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1>
struct tuple79 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	friend ostream& operator <<(ostream& out, const tuple79& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple79& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1>
struct tuple80 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	friend ostream& operator <<(ostream& out, const tuple80& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple80& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1>
struct tuple81 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	friend ostream& operator <<(ostream& out, const tuple81& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple81& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1>
struct tuple82 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	friend ostream& operator <<(ostream& out, const tuple82& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple82& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1>
struct tuple83 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	friend ostream& operator <<(ostream& out, const tuple83& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple83& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1>
struct tuple84 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	friend ostream& operator <<(ostream& out, const tuple84& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple84& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1>
struct tuple85 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	friend ostream& operator <<(ostream& out, const tuple85& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple85& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1>
struct tuple86 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	friend ostream& operator <<(ostream& out, const tuple86& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple86& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1>
struct tuple87 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	friend ostream& operator <<(ostream& out, const tuple87& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple87& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1>
struct tuple88 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	friend ostream& operator <<(ostream& out, const tuple88& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple88& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1>
struct tuple89 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	friend ostream& operator <<(ostream& out, const tuple89& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple89& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1>
struct tuple90 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	friend ostream& operator <<(ostream& out, const tuple90& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple90& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1>
struct tuple91 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	friend ostream& operator <<(ostream& out, const tuple91& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple91& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1>
struct tuple92 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	friend ostream& operator <<(ostream& out, const tuple92& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple92& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1, class T93=T1>
struct tuple93 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	T93 v93;
	friend ostream& operator <<(ostream& out, const tuple93& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<t.v93<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple93& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92>>t.v93;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1, class T93=T1, class T94=T1>
struct tuple94 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	T93 v93;
	T94 v94;
	friend ostream& operator <<(ostream& out, const tuple94& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<t.v93<<", "<<t.v94<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple94& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92>>t.v93>>t.v94;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1, class T93=T1, class T94=T1, class T95=T1>
struct tuple95 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	T93 v93;
	T94 v94;
	T95 v95;
	friend ostream& operator <<(ostream& out, const tuple95& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<t.v93<<", "<<t.v94<<", "<<t.v95<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple95& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92>>t.v93>>t.v94>>t.v95;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1, class T93=T1, class T94=T1, class T95=T1, class T96=T1>
struct tuple96 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	T93 v93;
	T94 v94;
	T95 v95;
	T96 v96;
	friend ostream& operator <<(ostream& out, const tuple96& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<t.v93<<", "<<t.v94<<", "<<t.v95<<", "<<t.v96<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple96& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92>>t.v93>>t.v94>>t.v95>>t.v96;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1, class T93=T1, class T94=T1, class T95=T1, class T96=T1, class T97=T1>
struct tuple97 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	T93 v93;
	T94 v94;
	T95 v95;
	T96 v96;
	T97 v97;
	friend ostream& operator <<(ostream& out, const tuple97& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<t.v93<<", "<<t.v94<<", "<<t.v95<<", "<<t.v96<<", "<<t.v97<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple97& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92>>t.v93>>t.v94>>t.v95>>t.v96>>t.v97;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1, class T93=T1, class T94=T1, class T95=T1, class T96=T1, class T97=T1, class T98=T1>
struct tuple98 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	T93 v93;
	T94 v94;
	T95 v95;
	T96 v96;
	T97 v97;
	T98 v98;
	friend ostream& operator <<(ostream& out, const tuple98& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<t.v93<<", "<<t.v94<<", "<<t.v95<<", "<<t.v96<<", "<<t.v97<<", "<<t.v98<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple98& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92>>t.v93>>t.v94>>t.v95>>t.v96>>t.v97>>t.v98;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1, class T93=T1, class T94=T1, class T95=T1, class T96=T1, class T97=T1, class T98=T1, class T99=T1>
struct tuple99 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	T93 v93;
	T94 v94;
	T95 v95;
	T96 v96;
	T97 v97;
	T98 v98;
	T99 v99;
	friend ostream& operator <<(ostream& out, const tuple99& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<t.v93<<", "<<t.v94<<", "<<t.v95<<", "<<t.v96<<", "<<t.v97<<", "<<t.v98<<", "<<t.v99<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple99& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92>>t.v93>>t.v94>>t.v95>>t.v96>>t.v97>>t.v98>>t.v99;
	}
};

template<class T1=int, class T2=T1, class T3=T1, class T4=T1, class T5=T1, class T6=T1, class T7=T1, class T8=T1, class T9=T1, class T10=T1, class T11=T1, class T12=T1, class T13=T1, class T14=T1, class T15=T1, class T16=T1, class T17=T1, class T18=T1, class T19=T1, class T20=T1, class T21=T1, class T22=T1, class T23=T1, class T24=T1, class T25=T1, class T26=T1, class T27=T1, class T28=T1, class T29=T1, class T30=T1, class T31=T1, class T32=T1, class T33=T1, class T34=T1, class T35=T1, class T36=T1, class T37=T1, class T38=T1, class T39=T1, class T40=T1, class T41=T1, class T42=T1, class T43=T1, class T44=T1, class T45=T1, class T46=T1, class T47=T1, class T48=T1, class T49=T1, class T50=T1, class T51=T1, class T52=T1, class T53=T1, class T54=T1, class T55=T1, class T56=T1, class T57=T1, class T58=T1, class T59=T1, class T60=T1, class T61=T1, class T62=T1, class T63=T1, class T64=T1, class T65=T1, class T66=T1, class T67=T1, class T68=T1, class T69=T1, class T70=T1, class T71=T1, class T72=T1, class T73=T1, class T74=T1, class T75=T1, class T76=T1, class T77=T1, class T78=T1, class T79=T1, class T80=T1, class T81=T1, class T82=T1, class T83=T1, class T84=T1, class T85=T1, class T86=T1, class T87=T1, class T88=T1, class T89=T1, class T90=T1, class T91=T1, class T92=T1, class T93=T1, class T94=T1, class T95=T1, class T96=T1, class T97=T1, class T98=T1, class T99=T1, class T100=T1>
struct tuple100 {
	T1 v1;
	T2 v2;
	T3 v3;
	T4 v4;
	T5 v5;
	T6 v6;
	T7 v7;
	T8 v8;
	T9 v9;
	T10 v10;
	T11 v11;
	T12 v12;
	T13 v13;
	T14 v14;
	T15 v15;
	T16 v16;
	T17 v17;
	T18 v18;
	T19 v19;
	T20 v20;
	T21 v21;
	T22 v22;
	T23 v23;
	T24 v24;
	T25 v25;
	T26 v26;
	T27 v27;
	T28 v28;
	T29 v29;
	T30 v30;
	T31 v31;
	T32 v32;
	T33 v33;
	T34 v34;
	T35 v35;
	T36 v36;
	T37 v37;
	T38 v38;
	T39 v39;
	T40 v40;
	T41 v41;
	T42 v42;
	T43 v43;
	T44 v44;
	T45 v45;
	T46 v46;
	T47 v47;
	T48 v48;
	T49 v49;
	T50 v50;
	T51 v51;
	T52 v52;
	T53 v53;
	T54 v54;
	T55 v55;
	T56 v56;
	T57 v57;
	T58 v58;
	T59 v59;
	T60 v60;
	T61 v61;
	T62 v62;
	T63 v63;
	T64 v64;
	T65 v65;
	T66 v66;
	T67 v67;
	T68 v68;
	T69 v69;
	T70 v70;
	T71 v71;
	T72 v72;
	T73 v73;
	T74 v74;
	T75 v75;
	T76 v76;
	T77 v77;
	T78 v78;
	T79 v79;
	T80 v80;
	T81 v81;
	T82 v82;
	T83 v83;
	T84 v84;
	T85 v85;
	T86 v86;
	T87 v87;
	T88 v88;
	T89 v89;
	T90 v90;
	T91 v91;
	T92 v92;
	T93 v93;
	T94 v94;
	T95 v95;
	T96 v96;
	T97 v97;
	T98 v98;
	T99 v99;
	T100 v100;
	friend ostream& operator <<(ostream& out, const tuple100& t) {
		return out<<"( "<<t.v1<<", "<<t.v2<<", "<<t.v3<<", "<<t.v4<<", "<<t.v5<<", "<<t.v6<<", "<<t.v7<<", "<<t.v8<<", "<<t.v9<<", "<<t.v10<<", "<<t.v11<<", "<<t.v12<<", "<<t.v13<<", "<<t.v14<<", "<<t.v15<<", "<<t.v16<<", "<<t.v17<<", "<<t.v18<<", "<<t.v19<<", "<<t.v20<<", "<<t.v21<<", "<<t.v22<<", "<<t.v23<<", "<<t.v24<<", "<<t.v25<<", "<<t.v26<<", "<<t.v27<<", "<<t.v28<<", "<<t.v29<<", "<<t.v30<<", "<<t.v31<<", "<<t.v32<<", "<<t.v33<<", "<<t.v34<<", "<<t.v35<<", "<<t.v36<<", "<<t.v37<<", "<<t.v38<<", "<<t.v39<<", "<<t.v40<<", "<<t.v41<<", "<<t.v42<<", "<<t.v43<<", "<<t.v44<<", "<<t.v45<<", "<<t.v46<<", "<<t.v47<<", "<<t.v48<<", "<<t.v49<<", "<<t.v50<<", "<<t.v51<<", "<<t.v52<<", "<<t.v53<<", "<<t.v54<<", "<<t.v55<<", "<<t.v56<<", "<<t.v57<<", "<<t.v58<<", "<<t.v59<<", "<<t.v60<<", "<<t.v61<<", "<<t.v62<<", "<<t.v63<<", "<<t.v64<<", "<<t.v65<<", "<<t.v66<<", "<<t.v67<<", "<<t.v68<<", "<<t.v69<<", "<<t.v70<<", "<<t.v71<<", "<<t.v72<<", "<<t.v73<<", "<<t.v74<<", "<<t.v75<<", "<<t.v76<<", "<<t.v77<<", "<<t.v78<<", "<<t.v79<<", "<<t.v80<<", "<<t.v81<<", "<<t.v82<<", "<<t.v83<<", "<<t.v84<<", "<<t.v85<<", "<<t.v86<<", "<<t.v87<<", "<<t.v88<<", "<<t.v89<<", "<<t.v90<<", "<<t.v91<<", "<<t.v92<<", "<<t.v93<<", "<<t.v94<<", "<<t.v95<<", "<<t.v96<<", "<<t.v97<<", "<<t.v98<<", "<<t.v99<<", "<<t.v100<<", "<<")"<<endl;
	}
	friend istream& operator >>(istream& in, tuple100& t) {
		return in>>t.v1>>t.v2>>t.v3>>t.v4>>t.v5>>t.v6>>t.v7>>t.v8>>t.v9>>t.v10>>t.v11>>t.v12>>t.v13>>t.v14>>t.v15>>t.v16>>t.v17>>t.v18>>t.v19>>t.v20>>t.v21>>t.v22>>t.v23>>t.v24>>t.v25>>t.v26>>t.v27>>t.v28>>t.v29>>t.v30>>t.v31>>t.v32>>t.v33>>t.v34>>t.v35>>t.v36>>t.v37>>t.v38>>t.v39>>t.v40>>t.v41>>t.v42>>t.v43>>t.v44>>t.v45>>t.v46>>t.v47>>t.v48>>t.v49>>t.v50>>t.v51>>t.v52>>t.v53>>t.v54>>t.v55>>t.v56>>t.v57>>t.v58>>t.v59>>t.v60>>t.v61>>t.v62>>t.v63>>t.v64>>t.v65>>t.v66>>t.v67>>t.v68>>t.v69>>t.v70>>t.v71>>t.v72>>t.v73>>t.v74>>t.v75>>t.v76>>t.v77>>t.v78>>t.v79>>t.v80>>t.v81>>t.v82>>t.v83>>t.v84>>t.v85>>t.v86>>t.v87>>t.v88>>t.v89>>t.v90>>t.v91>>t.v92>>t.v93>>t.v94>>t.v95>>t.v96>>t.v97>>t.v98>>t.v99>>t.v100;
	}
};





#endif /* TUPLE_TYPES_HPP_BY_JADESOUL */
