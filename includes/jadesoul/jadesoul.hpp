#ifndef JADESOUL_HPP_BY_JADESOUL
#define JADESOUL_HPP_BY_JADESOUL
/**
 * File: jadesoul.hpp
 * Description: 
 * 
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * 
 * Date: 2011-12-04 14:28:37.770000
 * Written In: MSRA, beijing, China
 */

// #define debug











std::ostream& vform( std::ostream& os, const char* fmt, va_list ap)
{
	const int MAX = 1 << 12;
	char buf[ MAX + 1 ];
	vsprintf( buf, fmt, ap );
	va_end(ap);
	return os << buf;
}

std::ostream& form( std::ostream& os, const char* fmt, ... )
{
	va_list ap;
	va_start( ap, fmt );
	vform(os, fmt, ap );
	va_end(ap);
	return os;
}


//algorithms

/* startswith { */

/**
 *  startswith
 *
 *  test if the elements in [first1, last1) startswith the elements in [first2, last2)
 *  by jadesoul @ 2010-9-30
 *
 *  usage sample: cout<<boolalpha<<startswith(p, p+12, q, q+5);
*/
template <  class InputIterator1,
class InputIterator2    >
bool startswith(    InputIterator1 first1,
                    InputIterator1 last1,
                    InputIterator2 first2,
                    InputIterator2 last2    ) {
	ptrdiff_t len1 = distance(first1, last1), len2 = distance(first2, last2);
	if (len1 < len2) return false;
	while (first2 != last2) {
		if (*first1++ != *first2++) return false;
	}
	return true;
}


/**
 *  startswith using comp function
 *
 *  test if the elements in [first1, last1) startswith the elements in [first2, last2)
 *  by jadesoul @ 2010-9-30
 *
 *  usage sample: cout<<boolalpha<<startswith(p, p+12, q, q+5, equal_to<char>());
*/
template <  class InputIterator1,
class InputIterator2,
class Function  >
bool startswith(    InputIterator1 first1,
                    InputIterator1 last1,
                    InputIterator2 first2,
                    InputIterator2 last2,
                    Function comp   ) {
	ptrdiff_t len1 = distance(first1, last1), len2 = distance(first2, last2);
	if (len1 < len2) return false;
	while (first2 != last2) {
		if (!comp(*first1++ , *first2++)) return false;
	}
	return true;
}

/* startswith } */

/* endswith { */

/**
 *  endswith
 *
 *  test if the elements in [first1, last1) endswith the elements in [first2, last2)
 *  by jadesoul @ 2010-9-30
 *
 *  usage sample: cout<<boolalpha<<endswith(p, p+12, q, q+5);
*/
template <  class InputIterator1,
class InputIterator2    >
bool endswith(      InputIterator1 first1,
                    InputIterator1 last1,
                    InputIterator2 first2,
                    InputIterator2 last2    ) {
	ptrdiff_t len1 = distance(first1, last1), len2 = distance(first2, last2);
	if (len1 < len2) return false;
	while (first2 != last2) {
		if (*--last1 != *--last2) return false;
	}
	return true;
}

/**
 *  endswith using comp function
 *
 *  test if the elements in [first1, last1) endswith the elements in [first2, last2)
 *  by jadesoul @ 2010-9-30
 *
 *  usage sample: cout<<boolalpha<<endswith(p, p+12, q, q+5, equal_to<char>());
*/
template <  class InputIterator1,
class InputIterator2,
class Function  >
bool endswith(      InputIterator1 first1,
                    InputIterator1 last1,
                    InputIterator2 first2,
                    InputIterator2 last2,
                    Function comp   ) {
	ptrdiff_t len1 = distance(first1, last1), len2 = distance(first2, last2);
	if (len1 < len2) return false;
	while (first2 != last2) {
		if (!comp(*--last1 , *--last2)) return false;
	}
	return true;
}

/* endswith } */

/* split and range { */
/**
 *  split -- split a big container into many subcontainers by a specified small delimiter container
 *
 *  by jadesoul @ 2010-10-1
 *  return a vector consists of pairs, each pair has a begin iterator
 *  and a end iterator of the prime container
*/
template <  class InputIterator1,
class InputIterator2    >
vector<pair<InputIterator1, InputIterator1> > split(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2    ) {
	vector<pair<InputIterator1, InputIterator1> > result;
	pair<InputIterator1, InputIterator1> tmp;

	ptrdiff_t len1 = distance(first1, last1), len2 = distance(first2, last2);
	if (len1 < len2) return result;
	InputIterator1 start = first1, stop = search(first1, last1, first2, last2);
	if (stop==last1) return result;
	do {
		result.push_back( make_pair(start, stop) );
		advance(stop, len2);
		start = stop;
		stop = search(start, last1, first2, last2);
	} while (stop!=last1);
	assert( stop==last1 );
	result.push_back( make_pair(start, last1) );
	return result;
}

/**
  * range -- Interval types implementation
  *
  * range use start, stop and step to stand for a range
  * it takes a range expression as parameter
  * the format of range expression is like python
  * example: [0:1], [3:], [10:-1], [1:10:2]
  */

class range {
public:
	int start;
	int stop;
	int step;
	const static int first=min_sint4;
	const static int last=max_sint4;

	range(int start, int stop, int step=1): start(start), stop(stop), step(step) {}

	range(int len=0) : start(0), stop(len), step(1) {}

	range(const string& range_expr) {
		construct_from_str(range_expr);
	}

	range& operator =(const string& range_expr) {
		range& me=*this;
		me.construct_from_str(range_expr);
		return me;
	}

	inline bool very_begin() const {
		return start==first;    //return if start is the very beginning of the range
	}
	inline bool very_end() const {
		return stop==last;    //return if stop is the very end of the range
	}

	void operator ()(const string& range_expr) {
		construct_from_str(range_expr);
	}

	friend ostream& operator<<(ostream& out, const range& r) {
		out<<"["<<r.start<<":"<<r.stop<<":"<<r.step<<"] = ";

		if (r.start==range::first || r.stop==last ) {
			return out<<"can not expand"<<endl;
		}
		out<<"[";
		if (r.stop>r.start AND r.step>0)
			for (int i=r.start; i<r.stop; i+=r.step) out<<i<<", ";
		else if (r.stop<=r.start AND r.step<0)
			for (int i=r.start; i>r.stop; i+=r.step) out<<i<<", ";
		out<<"]"<<endl;

		return out;
	}

	vec_int to_vec() {
		vec_int vec;
		if (stop>start AND step>0)
			for (int i=start; i<stop; i+=step) vec.push_back(i);
		else if (stop<=start AND step<0)
			for (int i=start; i>stop; i+=step) vec.push_back(i);
		return vec;
	}

private:
	void construct_from_str(const string& range_expr) {
		string deli=":";
		typedef vector<pair<string::const_iterator, string::const_iterator> > result_type;
		result_type nums(split(range_expr.begin(), range_expr.end(), deli.begin(), deli.end()));
		int nums_size=nums.size();
		assert( nums_size==2 || nums_size==3 );
		ptrdiff_t len_a=distance(nums[0].first, nums[0].second);
		if (len_a>0) {
			string s_start(nums[0].first, nums[0].second);
			start = atoi( s_start.c_str() );
		} else start=first;

		ptrdiff_t len_b=distance(nums[1].first, nums[1].second);
		if (len_b>0) {
			string s_stop(nums[1].first, nums[1].second);
			stop = atoi( s_stop.c_str() );
		} else stop=last;

		if (nums_size==2) step=1;
		else step = atoi( string(nums[2].first, nums[2].second).c_str() );
		if (step==0) step=1;
	}
} __tmp_range;

typedef range rg;
#define RG __tmp_range=

/* split and range } */

/* slice { */
/**
 *  slice -- slice a big container by a range to get a smaller one (will copy a new one)
 *
 *  by jadesoul @ 2010-10-1
 *  return a new container
*/

template <  class Container >
Container slice(Container& c, range r) {
	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	assert( r.step!=0 );
	int len=c.size();
	if (len==0) return Container();

	if (r.step<0) {
		if (r.very_begin()) r.start=range::last;
		if (r.very_end()) r.stop=range::first;
	}

	//adjust start
	if (r.start<0)
		if (r.start+len<0) r.start=0;
		else r.start+=len;
	else if (r.start>len) r.start=len;

	//adjust stop
	if (r.stop<0)
		if (r.stop+len<0) r.stop=0;
		else r.stop+=len;
	else if (r.stop>len) r.stop=len;

	if (r.start==r.stop) return Container();

	//empty situation
	if ((r.start<r.stop AND r.step<0) || (r.start>r.stop AND r.step>0)) return Container();

	if (r.step==1) {
		iterator first=c.begin(), last=first;
		if (r.start!=0)
			advance(first, r.start);
		if (r.stop==len)
			last=c.end();
		else
			advance(last, r.stop);
		return Container(first, last);
	} else if (r.step==-1) {
		r.start=len-r.start;
		r.stop=len-r.stop;
		reverse_iterator first=c.rbegin(), last=first;
		if (r.start!=0)
			advance(first, r.start);
		if (r.stop==len)
			last=c.rend();
		else
			advance(last, r.stop);
		return Container(first, last);
	} else {
		Container ret;
		if (r.start<r.stop AND r.step>0)
			for (int i=r.start; i<r.stop; i+=r.step) ret.push_back(c[i]);
		if (r.start>r.stop AND r.step<0)
			for (int i=r.start; i>r.stop; i+=r.step) ret.push_back(c[i]);
		return ret;
	}
}

/* slice } */

/* sort algorithms { */

//cardinal_sort (ji shu sort)
//hill_sort (xi er sort)

//heap_sort
//most bad: O(nlogn)
//average: O(nlogn)

template <  class Container >
void heap_sort(Container& c) {
	make_heap(c.begin(), c.end());
	sort_heap(c.begin(), c.end());
}

//merge_sort
/*
  * tmp is a temporary helper container which at least has the same size of region [first, last)
  */

//O(nlogn)
template <  class RandomAccessIterator >
void merge_sort(RandomAccessIterator first, RandomAccessIterator last, RandomAccessIterator tmp) {
	assert( last>first );
	ptrdiff_t len=last-first;
	if (len>1) {
		ptrdiff_t half_len=len/2;
		RandomAccessIterator mid=first+half_len;
		merge_sort(first, mid, tmp);
		merge_sort(mid, last, tmp+half_len);
		merge(first, mid, mid, last, tmp);
		copy(tmp, tmp+len, first);
	}
}

/*
  * compare function version
  */
template <  class RandomAccessIterator, class Compare >
void merge_sort(RandomAccessIterator first, RandomAccessIterator last, RandomAccessIterator tmp, Compare cmp) {
	assert( last>first );
	ptrdiff_t len=last-first;
	if (len>1) {
		ptrdiff_t half_len=len/2;
		RandomAccessIterator mid=first+half_len;
		merge_sort(first, mid, tmp, cmp);
		merge_sort(mid, last, tmp+half_len, cmp);
		merge(first, mid, mid, last, tmp, cmp);
		copy(tmp, tmp+len, first);
	}
}

/*
 * improvement of merge sort
 * by divide the container into 4 parts
 */
template <  class RandomAccessIterator >
void merge_sort_improved(RandomAccessIterator first, RandomAccessIterator last, RandomAccessIterator tmp) {
	assert( last>first );
	ptrdiff_t len=last-first;
	if (len<=16) {
		insert_sort(first, last);
	} else {
		ptrdiff_t len_half=len/2;
		RandomAccessIterator mid=first+len_half;

		ptrdiff_t len_left=mid-first;
		ptrdiff_t len_quarter_left=len_left/2;
		RandomAccessIterator quarter_left=first+len_quarter_left;
		merge_sort_improved(first, quarter_left, tmp);
		merge_sort_improved(quarter_left, mid, tmp+len_quarter_left);

		ptrdiff_t len_right=last-mid;
		ptrdiff_t len_quarter_right=len_right/2;
		RandomAccessIterator quarter_right=mid+len_quarter_right;
		merge_sort_improved(mid, quarter_right, tmp+len_half);
		merge_sort_improved(quarter_right, last, tmp+len_half+len_quarter_right);

		merge(first, quarter_left, quarter_left, mid, tmp);
		merge(mid, quarter_right, quarter_right, last, tmp+len_half);
		merge(tmp, tmp+len_half, tmp+len_half, tmp+len, first);
	}
}

//quick_sort
//overload the partition funciton in STL
//this version has only 2 params while the one in STL has 3
//most bad: O(n^2)
//average: O(nlogn)

template <class iterator >
iterator partition(iterator begin, iterator end) {
	assert(begin<end);
	iterator i=begin, j=end-1;
	typename iterator_traits<iterator>::value_type v=*i;
	if (i<j) {
		while(i<j) {// there is some problem here
			while (i<j && *j>v) --j;
			if (i==j) break;
			*i++=*j;
			while (i<j && *i<v) ++i;
			if (i==j) break;
			*j--=*i;
		}
	}
	*i=v;
	return i;
}


template< class iterator >
void quick_sort(iterator begin, iterator end) {
	if (end-begin>1) {
		iterator k=partition(begin, end);
		quick_sort(begin, k);
		quick_sort(k+1, end);
	}
}


//insert_sort
// O(n^2)

template <  class RandomAccessIterator >
void insert_sort(RandomAccessIterator begin, RandomAccessIterator end) {
	RandomAccessIterator i, j;
	for (i=begin+1; i<end; ++i) {
		for (j=i; j>begin && *i < *(j-1); --j) ;
		if (j!=i) rotate(j, i, i+1);
	}
}



//using binary search when insert
// O(n log n)

template <  class RandomAccessIterator >
void binary_insert_sort(RandomAccessIterator begin, RandomAccessIterator end) {
	RandomAccessIterator i, low, high, mid;
	for (i=begin+1; i<end; ++i) {
		low=begin;
		high=i-1;
		while (low<high) {
			mid=low+(high-low)/2;
			if (*mid==*i) {
				low=mid;//let low represent the result
				break;
			}
			else if (*mid<*i) low=mid+1;
			else high=mid-1;
		}
		if (low!=i) rotate(low, i, i+1);
	}
}


//bubble_sort
// O(n^2)
template <  class RandomAccessIterator >
void bubble_sort(RandomAccessIterator first, RandomAccessIterator last) {
	typedef RandomAccessIterator iter_t;
	for (iter_t end=last-1; first!=end; --end) {
		for (iter_t it=first; it!=end; ++it) {
			if (*it > *(it+1)) iter_swap(it, it+1) ;
		}
	}
}

//select_sort
//select the smallest element and exchange it with the n-th element
//O(n^2)

template< class iterator >
void select_sort(iterator begin, iterator end) {
	for (iterator round=begin; round<end-1; ++round) {
		iterator min=round;
		for (iterator it=round+1; it<end; ++it)
			if (*it<*min) min=it;
		iter_swap(round, min);
	}
}

//exchange_sort
//O(n^2)
template< class iterator >
void exchange_sort(iterator begin, iterator end) {
	for (iterator now=begin; now<end-1; ++now) {
		for (iterator it=now+1; it<end; ++it)
			if (*now>*it) iter_swap(now, it);
	}
}


/* sort algorithms } */


/* heap { */



/* heap } */

/* search { */

//binary search tree

/* search } */


/* graph algorithms { */

//dijkstra with priority queen



/* search } */

/**
 *  backtracking_8queen
*/

/**
 *  backtracking_01bag
*/

/**
 *  backtracking_travel_sales_man
*/

/**
 *  dynamic_programming_sales_man
*/




/*
STL Algorithms
<algorithm>
Non-modifying sequence operations:
for_each        Apply function to range (template function)
find            Find value in range (function template)
find_if         Find element in range (function template)
find_end	Find last subsequence in range (function template)
find_first_of	Find element from set in range (function template)
adjacent_find	Find equal adjacent elements in range (function template)
count           Count appearances of value in range (function template)
count_if	Return number of elements in range satisfying condition (function template)
mismatch	Return first position where two ranges differ (function template)
equal           Test whether the elements in two ranges are equal (function template)
search          Find subsequence in range (function template)
search_n	Find succession of equal values in range (function template)


Modifying sequence operations:
copy            Copy range of elements (function template)
copy_backward	Copy range of elements backwards (function template)
swap            Exchange values of two objects (function template)
swap_ranges	Exchange values of two ranges (function template)
iter_swap	Exchange values of objects pointed by two iterators (function template)
transform	Apply function to range (function template)
replace         Replace value in range (function template)
replace_if	Replace values in range (function template)
replace_copy	Copy range replacing value (function template)
replace_copy_if	Copy range replacing value (function template)
fill            Fill range with value (function template)
fill_n          Fill sequence with value (function template)
generate	Generate values for range with function (function template)
generate_n	Generate values for sequence with function (function template)
remove          Remove value from range (function template)
remove_if	Remove elements from range (function template)
remove_copy	Copy range removing value (function template)
remove_copy_if	Copy range removing values (function template)
unique          Remove consecutive duplicates in range (function template)
unique_copy	Copy range removing duplicates (function template)
reverse         Reverse range (function template)
reverse_copy	Copy range reversed (function template)
rotate          Rotate elements in range (function template)
rotate_copy	Copy rotated range (function template)
random_shuffle	Rearrange elements in range randomly (function template)
partition	Partition range in two (function template)
stable_partition	 Partition range in two - stable ordering (function template)


Sorting:
sort            Sort elements in range (function template)
stable_sort	Sort elements preserving order of equivalents (function template)
partial_sort	Partially Sort elements in range (function template)
partial_sort_copy	 Copy and partially sort range (function template)
nth_element	Sort element in range (function template)


Binary search (operating on sorted ranges):
lower_bound	Return iterator to lower bound (function template)
upper_bound	Return iterator to upper bound (function template)
equal_range	Get subrange of equal elements (function template)
binary_search	Test if value exists in sorted array (function template)


Merge (operating on sorted ranges):
merge           Merge sorted ranges (function template)
inplace_merge	Merge consecutive sorted ranges (function template)
includes	Test whether sorted range includes another sorted range (function template)
set_union	Union of two sorted ranges (function template)
set_intersection            Intersection of two sorted ranges (function template)
set_difference	Difference of two sorted ranges (function template)
set_symmetric_difference    Symmetric difference of two sorted ranges (function template)


Heap:
push_heap       Push element into heap range (function template)
pop_heap	Pop element from heap range (function template)
make_heap	Make heap from range (function template)
sort_heap	Sort elements of heap (function template)


Min/max:
min             Return the lesser of two arguments (function template)
max             Return the greater of two arguments (function template)
min_element	Return smallest element in range (function template)
max_element	Return largest element in range (function template)
lexicographical_compare	 Lexicographical less-than comparison (function template)
next_permutation	 Transform range to next permutation (function template)
prev_permutation	 Transform range to previous permutation (function template)

<numeric>
accumulate	 Accumulate values in range (function template)
adjacent_difference	 Compute adjacent difference of range (function template)
inner_product	 Compute cumulative inner product of range (function template)
partial_sum	 Compute partial sums of range (function template)
*/


//utils
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





#endif /* JADESOUL_HPP_BY_JADESOUL */
