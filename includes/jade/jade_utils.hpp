#ifndef JADE_UTILS_HPP
#define JADE_UTILS_HPP

#include "jade_global.hpp"
#include "jade_algorithm.hpp"

//___________________________________________________________________________________

/**
  * dump -- show all elements in a iterable container
  * usage:  dump< vector<int> >(v, ", ", "[", "]", cout) or show(v, ", ", "[", "]", cout) or just show(v);
  */

const char* default_show_deli=" ";
const char* default_show_left="[ ";
const char* default_show_right="]";

template<class Container >
void dump(const Container& c,
          const char* deli=default_show_deli,
          const char* left=default_show_left,
          const char* right=default_show_right,
	  ostream& out=cout ) {
	out<<left;
	ostream_iterator<typename Container::value_type> osit(out, deli);
	copy(c.begin(), c.end(), osit);
	out<<right<<endl;
}

//some special over loads
#define Macro__over_load_dump__ValueType( T )                           \
inline void dump( const T & v, ostream & out=cout ) {                   \
    out<<v<<endl;                                                       \
};                                                                      \
inline void dump( T * v, ostream & out=cout ) {                         \
    out<<v<<endl;                                                       \
}

Macro__over_load_dump__ValueType(bool);
Macro__over_load_dump__ValueType(int);
Macro__over_load_dump__ValueType(unsigned int);
Macro__over_load_dump__ValueType(char);
Macro__over_load_dump__ValueType(char*);
Macro__over_load_dump__ValueType(unsigned char);
Macro__over_load_dump__ValueType(short);
Macro__over_load_dump__ValueType(unsigned short);
Macro__over_load_dump__ValueType(long);
Macro__over_load_dump__ValueType(unsigned long);
Macro__over_load_dump__ValueType(float);
Macro__over_load_dump__ValueType(double);



//now is ostream overloads
//
//here we define our macro format:
//  Macro_ + _over_load_operator_out_ + _ContainerTemplate_ValueType
//    ^ prefix      ^ function explaination   ^ macro parameters
//
//this macro below is important
#define Macro__over_load_operator_out__ContainerTemplate_ValueType( CT, T )  \
inline ostream& operator <<(ostream& os, const CT < T >& c) { \
    dump(c, default_show_deli, default_show_left, default_show_right, os);    \
    return os;  \
}

Macro__over_load_operator_out__ContainerTemplate_ValueType(vector, int);
Macro__over_load_operator_out__ContainerTemplate_ValueType(vector, char);
Macro__over_load_operator_out__ContainerTemplate_ValueType(std::list, int);
Macro__over_load_operator_out__ContainerTemplate_ValueType(std::list, char);


/*no use now
template<class Container, class Iterator>
void show_old(const Container& c, const char* deli="", const char* left="{", const char* right="}") {
    cout<<left;
    ostream_iterator<typename Container::value_type> osit(cout, deli);
    copy(c.begin(), c.end(), osit);
    cout<<right<<endl;
}

template<class Container, class ValueType>
void show2(const Container& c, const char* deli="", const char* left="{", const char* right="}") {
    show_old<Container, iterator<input_iterator_tag, ValueType> >(c, deli, left, right);
}
*/


// class smart_parser {
// public:
	// static vec_int list(const string& s) {
		// istringstream iss(s);
		// int i;
		// vec_int r;
		// while(iss>>i) r.push_back(i);
		// return r;
	// }
// };

//___________________________________________________________________________________
/**
 *	datetime
 */

class datetime {
	time_t secs;
#ifdef OS_WIN32
	SYSTEMTIME sys;
#else
	struct timeval now;
#endif
public:
	datetime():secs(time(NULL)) {
		//init as now time
#ifdef OS_WIN32
		GetLocalTime(&sys);
#else
		gettimeofday(&now, NULL);
#endif
	}
	
	friend ostream& operator <<(ostream& o, datetime& dt) {
		char str[30];
#ifdef OS_WIN32
		const char* fmt="%4d-%02d-%02d %02d:%02d:%02d.%03d %1d/7";
		sprintf(str, fmt, 
				dt.sys.wYear,
				dt.sys.wMonth,
				dt.sys.wDay,
				dt.sys.wHour,
				dt.sys.wMinute, 
				dt.sys.wSecond,
				dt.sys.wMilliseconds,
				dt.sys.wDayOfWeek);
#else
		const char* fmt="%Y-%m-%d %H:%M:%S";
		strftime(str, 30, fmt, localtime(&dt.secs));
#endif
		return o<<str;
	}
	
	size_t millisecs() {
		size_t ms=0;
#ifdef OS_WIN32
		ms=secs*1000+sys.wMilliseconds;
#else
		ms=now.tv_usec;
#endif
		return ms;
	}
	
	int gap(datetime& dt) {
		return this->millisecs() - dt.millisecs();
	}
};

map<uint, datetime> __gdt;	//global datetime table

void time_seed(uint id=0) {
	__gdt[id]=datetime();
}

void time_gap(char* msg, uint id=0, bool update=true) {
	if_not_in(id, __gdt) return;
	cout<<msg<<": "<<datetime().gap(__gdt[id])<<"ms"<<endl;
	if (update) __gdt[id]=datetime();
}


//___________________________________________________________________________________
/**
 * memory information
 */

class meminfo {
private:
#ifdef ENV_WIN32_MSVC
	PROCESS_MEMORY_COUNTERS pmc;
#else
#endif

public:
	meminfo() {
#ifdef ENV_WIN32_MSVC
		HANDLE handle=GetCurrentProcess();
		GetProcessMemoryInfo(handle, &pmc, sizeof(pmc));
#else
#endif
	}
	
	friend ostream& operator <<(ostream& o, meminfo& mi) {
#ifdef ENV_WIN32_MSVC
		return o<<"Mem Usage:"
				<<mi.nice_repr(mi.pmc.WorkingSetSize)
				<<mi.nice_repr(mi.pmc.PeakWorkingSetSize)
				<<mi.nice_repr(mi.pmc.PagefileUsage)
				<<mi.nice_repr(mi.pmc.PeakPagefileUsage)
				<<endl;
#else
#endif
		return o;
	}
	
	//return physical memory size
	size_t phys() {
#ifdef ENV_WIN32_MSVC
		return pmc.WorkingSetSize;
#else
		return 0;
#endif
	}
	
	//return virtual memory size
	size_t virtu() {
#ifdef ENV_WIN32_MSVC
		return pmc.PagefileUsage;
#else
		return 0;
#endif
	}
	
	uchar get_unit(ulong bytes) {
		ulong& b=bytes;
		const uchar B=1, K=2, M=3, G=4, T=5, P=6;
		if (b<(1<<10)) return B;
		if (b<(1<<20)) return K;
		if (b<(1<<30)) return M;
		b/=1<<30;
		if (b<(1<<10)) return G;
		if (b<(1<<20)) return T;
		if (b<(1<<30)) return P;
		return B;
	}
	
	string nice_repr(ulong bytes) {
		ulong& b=bytes;
		uchar u=get_unit(labs(b));
		const uchar B=1, K=2, M=3, G=4, T=5, P=6;
		char buf[50];
		if (u==B) sprintf(buf, "%dB", b);
		else if (u==K) sprintf(buf, "%.1fK", (float)b/(1<<10));
		else if (u==M) sprintf(buf, "%.1fM", (float)b/(1<<20));
		else if (u==G) sprintf(buf, "%.1fG", (float)b/(1<<30));
		else if (u==T) sprintf(buf, "%.1fT", (float)b/(1<<30)/(1<<10));
		else if (u==P) sprintf(buf, "%.1fP", (float)b/(1<<30)/(1<<20));
		else sprintf(buf, "%dB", b);
		return buf;
	}
};


map<uint, meminfo> __gmt;	//global meminfo table

void mem_seed(uint id=0) {
	__gmt[id]=meminfo();
}

void mem_gap(char* msg, uint id=0, bool update=true) {
	if_not_in(id, __gmt) return;
	meminfo now;
	cout<<msg<<": "<<now.nice_repr(now.virtu()-__gmt[id].virtu())<<endl;
	if (update) __gmt[id]=now;
}

void sys_seed(uint id=0) {
	time_seed(id);
	mem_seed(id);
}

void sys_gap(char* msg, uint id=0, bool update=true) {
	if_not_in(id, __gdt) return;	
	if_not_in(id, __gmt) return;
	meminfo now;
	cout<<msg<<": "<<datetime().gap(__gdt[id])<<"ms "<<now.nice_repr(now.virtu()-__gmt[id].virtu())<<endl;
	if (update) {
		__gdt[id]=datetime();
		__gmt[id]=now;
	}
}
//___________________________________________________________________________________
/**
 *	log msg
 */
 

void log(const char* fmt, ...) {
	va_list ap;
	datetime now;
	cout<<"LOG : "<<now<<" : ";
	va_start(ap, fmt);
	vfprintf(stdout, fmt, ap);
	va_end(ap);
	cout<<endl;
}

#endif // JADE_UTILS_HPP
