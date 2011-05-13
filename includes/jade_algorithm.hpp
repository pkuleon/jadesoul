#ifndef JADE_ALGORITHM_HPP
#define JADE_ALGORITHM_HPP

#include "jade_global.hpp"
#include "jade_utils.hpp"

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

#include "algorithms/sort/sort.hpp"

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

//#include <algorithms/dynamic-programming/最大子项和问题.hpp>
//#include <algorithms/divide-and-conquer/选择问题.hpp>
//#include <algorithms/divide-and-conquer/求幂.hpp>


#endif // JADE_ALGORITHM_HPP


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
