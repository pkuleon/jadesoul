#ifndef JADE_ALL_TESTS_HPP
#define JADE_ALL_TESTS_HPP

#include "jade_global.hpp"
#include "jade_utils.hpp"
#include "jade_algorithm.hpp"
#include "jade_objectworld.hpp"

#define BOOST_TEST_MODULE jadesoul_test_center

#ifdef ENABLE_UNIT_TEST_DYNAMIC_LINK
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp> //Dynamic Link, The dynamic library variant of the UTF, faster when compile
#else
#include <boost/test/included/unit_test.hpp>  //The single-header variant of the UTF
#endif


#ifdef debug
	#define show(msg, var) cout<< msg <<" = ";dump(var)

	#define print(var) show( #var , var)

	#define peek
#else
	#undef show
	#define show(a, b)

	#undef print
	#define print(a)

	#undef peek
#endif


/*tmp no use
//other inlcudes
//#include <boost/test/test_case_template.hpp>
//#include <boost/mpl/list.hpp>
//#include <boost/test/parameterized_test.hpp>
//#include <boost/bind.hpp>
//#include <boost/test/floating_point_comparison.hpp>
*/
using namespace boost::unit_test;

/*
BOOST_AUTO_TEST_CASE(test_startswith) {
    //BOOST_TEST_MESSAGE( "now test startswith :" );
    int a[]={1,2,4};
    vector<int> v(a, a+3);

    char* p="hello, world";
    char* q="hello123";
    string sp(p);
    string sq(q);
    BOOST_CHECK( startswith(p, p+12, q, q+5)==true );
    BOOST_CHECK( startswith(sp.begin(), sp.end(), sq.begin(), sq.end())==false );
}

BOOST_AUTO_TEST_CASE(test_endswith) {
    int a[]={1,2,4};
    vector<int> v(a, a+3);

    char* p="hello, world123";
    char* q="hello123";
    string sp(p);
    string sq(q);

    BOOST_CHECK( endswith(p, p+12, q, q+5)==false );
    BOOST_CHECK( endswith(sp.begin(), sp.end(), sq.end()-3, sq.end())==true );
}



BOOST_AUTO_TEST_CASE(test_dump) {

    int a[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
    vec_int v(a, a+3);
    dump(v, ", ", "[", "]", cout);
    dump(v, ", ", "[", "]");
    dump(v, ", ", "[");
    dump(v, ". ");
    cout<<v;
    dump(a+1);
    bool b=false, c=true;
    dump(&b);
    dump(&c);
    dump(1);
    dump('a');

    string s="hello, world!";
    dump(s);

    vec_int v2(a+3, a+7);
    vec_int v3(a+7, a+9);

    vector<vec_int> vv;
    vv.push_back(v);
    vv.push_back(v2);
    vv.push_back(v3);
    //dump(vv);

}

BOOST_AUTO_TEST_CASE(test_split) {

    const string s("123::456789");
    const string deli(":");
    vector<pair<string::const_iterator, string::const_iterator> > nums(split(s.begin(), s.end(), deli.begin(), deli.end()));
    int nums_size=nums.size();nums_size++;

}

BOOST_AUTO_TEST_CASE(test_range) {
    range r(1,12,4);
    cout<<r;
    r("22:100:21");
    cout<<r;
    r=range("1:-10:-2");
    cout<<r;
    cout<<range(":23");
    r=range("1::-1");
    cout<<r;
    cout<<range();
}

BOOST_AUTO_TEST_CASE(test_slice) {
    vec_int r1=(RG"0:10").to_vec();
    range r2=RG"100:120:2";

    vec_int a=rg("0:10").to_vec();
    cout<<a;

    dump(slice(a, RG"3:"));
    dump(slice(a, RG":5"));
    dump(slice(a, RG":"));
    dump(slice(a, RG"3:7"));
    dump(slice(a, RG"3:1"));

    dump(slice(a, RG"3:1:-1"));
    dump(slice(a, RG"::-1"));
    dump(slice(a, RG"3:9:2"));
    dump(slice(a, RG"3:6:"));

    dump(slice(a, RG"-3:1:-2"));
    dump(slice(a, RG"1:-1"));
    dump(slice(a, RG"-7:-1"));

    dump(slice(a, RG"5:5"));
}

BOOST_AUTO_TEST_CASE(test_file) {


//    ofstream fout("a.txt");
//    range r("1:10000:2");
//    BOOST_CHECK( fout<<r.to_vec() );
//    fout.close();

}


BOOST_AUTO_TEST_CASE(test_bubble_sort) {
    vec_int a(range(10).to_vec());
    dump(a);
    reverse(a.begin(), a.end());
    dump(a);
    bubble_sort(a.begin(), a.end());
    dump(a);
}


BOOST_AUTO_TEST_CASE(test_fibonacci_old) {
    vec_int a;
    fibonacci_old::sequence(a, 10);
    dump(a);
    dump(fibonacci_old::get(10));
}


BOOST_AUTO_TEST_CASE(test_fibonacci) {
    vec_int a;
    fibonacci f;
    f.sequence(a, 10);
    dump(a);
    dump(f.get(10));
    dump(fibonacci().sequence(a, 20));
}

BOOST_AUTO_TEST_CASE(test_sqare) {
    vec_int a;
    square f;
    f.sequence(a, 10);
    dump(a);
    dump(f.get(10));
    dump(square().sequence(a, 20));
    dump(slice(nagtive().sequence(a, 20), range("3:8")));


}

BOOST_AUTO_TEST_CASE(test_objectworld) {
    BOOST_CHECK(true);
    test_object_world();

}

BOOST_AUTO_TEST_CASE(test_select_sort) {
	vec_int a=range("20:3:-2").to_vec();
	select_sort(a.begin(), a.end());
	print(a);
}

BOOST_AUTO_TEST_CASE(test_exchange_sort) {
	vec_int a=range("20:3:-2").to_vec();
	exchange_sort(a.begin(), a.end());
	print(a);
}

BOOST_AUTO_TEST_CASE(test_merge_sort) {
	vec_int a=range(100).to_vec();
	reverse(a.begin(), a.end());
	dump(a);
	vec_int b;
	b.resize(a.size());

	merge_sort_improved(a.begin(), a.end(), b.begin());
	dump(a);

	string x="12345";
	string y=x;
	merge_sort(x.begin(), x.end(), y.begin());
	dump(x);
	dump(y);
}

BOOST_AUTO_TEST_CASE(test_insert_sort) {
	vec_int a=range(100, 0, -1).to_vec();
	print(a);
	insert_sort(a.begin(), a.end());
	print(a);
}

BOOST_AUTO_TEST_CASE(test_binary_insert_sort) {
	vec_int a=range(100, 0, -1).to_vec();
	print(a);
	binary_insert_sort(a.begin(), a.end());
	print(a);
}

BOOST_AUTO_TEST_CASE(test_max_sub_sum) {
	int m[]={1, 2, -4, 3, 9, -7, 2, 5, -9, 3, 2};
	int *i, *j;
	max_sub_sum(m, m+11, i, j);
	vec_int r(i, j+1);
	print(r);
}

BOOST_AUTO_TEST_CASE(test_partition) {
	int m[]={3, 1, 4, 2, 5};
	vec_int a(m, m+5);
	cout<<*partition(a.begin(), a.end())<<endl;
	print(a);
}


BOOST_AUTO_TEST_CASE(test_quick_sort) {
	vec_int a=range("20:3:-2").to_vec();
	//vec_int a=range(30, 0, -1).to_vec();
	quick_sort(a.begin(), a.end());
	print(a);
}


BOOST_AUTO_TEST_CASE(test_heap_sort) {
	vec_int a=range("20:1:-1").to_vec();
	print(a);
	heap_sort(a);
	print(a);
}

BOOST_AUTO_TEST_CASE(test_select_k_th) {
	vec_int a=range("20:0:-1").to_vec();
	print(a);
	print(*select_k_th(a.begin(), a.end(), 1));
}


*/


/*six ways to detect and report the same error
int add( int i, int j ) { return i+j+1; }

int test_main( int, char *[] )             // note the name!
{
    // six ways to detect and report the same error:
    BOOST_CHECK( add( 2,2 ) == 4 );        // #1 continues on error
    BOOST_REQUIRE( add( 2,2 ) == 4 );      // #2 throws on error
    if( add( 2,2 ) != 4 )
        BOOST_ERROR( "Ouch..." );          // #3 continues on error
    if( add( 2,2 ) != 4 )
        BOOST_FAIL( "Ouch..." );           // #4 throws on error
    if( add( 2,2 ) != 4 ) throw "Oops..."; // #5 throws on error

    return add( 2, 2 ) == 4 ? 0 : 1;       // #6 returns error code
}


*/
/* Here are some boost test samples

//____________________________________________________________________________//

BOOST_AUTO_TEST_CASE( free_test_function )
{
    BOOST_CHECK( true   );

    int current_time = 0; // real call is required here

    BOOST_TEST_MESSAGE( "Testing initialization :" );
    BOOST_TEST_MESSAGE( "Current time:" << current_time );

}

//____________________________________________________________________________//

BOOST_AUTO_TEST_CASE( test_update )
{
    std::string field_name = "Volume";
    int         value      = 100;

    BOOST_TEST_MESSAGE( "Testing update :" );
    BOOST_TEST_MESSAGE( "Update " << field_name << " with " << value );
}



//____________________________________________________________________________//

extern void foo( int i );

//____________________________________________________________________________//

BOOST_AUTO_TEST_CASE( test_external_interface )
{
    for( int i = 3; i >=0; i-- ) {
        BOOST_TEST_MESSAGE( "Calling foo with i=" << i );
        //BOOST_TEST_CHECKPOINT( "Calling foo with i=" << i );
        foo( i );
    }
}

//____________________________________________________________________________//

void foo( int i )
{
    int j = 2/(i-1);
    j=1;
}

//____________________________________________________________________________//


//____________________________________________________________________________//

typedef boost::mpl::list<int,long,unsigned char> test_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( my_test, T, test_types )
{
    BOOST_CHECK_EQUAL( sizeof(T), (unsigned)4 );
}

//____________________________________________________________________________//



//____________________________________________________________________________//
//Nullary free function manually registered

void free_test_function2()
{
    BOOST_CHECK( true );
}

//____________________________________________________________________________//
//Nullary method of a class bound to global class instance and manually registered

class test_class1 {
public:
    void test_method()
    {
        BOOST_CHECK( true  );
    }
} tester;

//____________________________________________________________________________//
//ullary method of a class bound to shared class instance and manually registered

class test_class2 {
public:
    void test_method1()
    {
        BOOST_CHECK( true );
    }
    void test_method2()
    {
        BOOST_CHECK( false );
    }
};

//____________________________________________________________________________//
//Unary free function based test case

void free_test_function3( int i )
{
    BOOST_CHECK( i < 4   );
}

//____________________________________________________________________________//
//Unary class method based test case

class test_class3 {
public:
    void test_method( double const& d )
    {
        BOOST_CHECK_CLOSE( d * 100, (double)(int)(d*100), 0.01 );
    }
} tester2;

//____________________________________________________________________________//


test_suite*
init_unit_test_suite( int argc, char* argv[] )
{


    framework::master_test_suite().
        add( BOOST_TEST_CASE( &free_test_function2 ) );



    framework::master_test_suite().
        add( BOOST_TEST_CASE( boost::bind( &test_class1::test_method, &tester )));



    boost::shared_ptr<test_class2> tester( new test_class2 );

    framework::master_test_suite().
        add( BOOST_TEST_CASE( boost::bind( &test_class2::test_method1, tester )));
    framework::master_test_suite().
        add( BOOST_TEST_CASE( boost::bind( &test_class2::test_method2, tester )));


    int params[] = { 1, 2, 3, 4, 5 };

    framework::master_test_suite().
        add( BOOST_PARAM_TEST_CASE( &free_test_function3, params, params+5 ) );


    double params2[] = { 1., 1.1, 1.01, 1.001, 1.0001 };

    callback1<double> tm = bind( &test_class3::test_method, &tester2, _1);

    framework::master_test_suite().
        add( BOOST_PARAM_TEST_CASE( tm, params2, params2+5 ) );

    return 0;
}



BOOST_AUTO_TEST_CASE(test_graph_BFS) {

	graph<int> g;
	g.vertexs.push_back(LIST("1 2 3"));
	g.vertexs.push_back(LIST("2 5 6 3"));
	g.vertexs.push_back(LIST("3 1 2 4"));
	g.vertexs.push_back(LIST("4 3 6 5"));
	g.vertexs.push_back(LIST("5 4 6 2"));
	g.vertexs.push_back(LIST("6 2 5 4"));

	queue<int> q;
	map<int, bool> visited;
	size_t i;
	int now;
	for (i=0; i<g.vertexs.size(); ++i) {
		now=g.vertexs[i][0];
		visited[now]=false;
	}
	now=g.vertexs[0][0];
	q.push(now);

	while (!q.empty()) {
		now=q.front();
		q.pop();
		if (!visited[now]) {
			show("now visit:", now);
			visited[now]=true;
		}

		for (i=1; i<g.vertexs[now-1].size(); ++i) {
			int now2=g.vertexs[now-1][i];
			if (!visited[now2]) q.push(now2);
		}

	}

}


BOOST_AUTO_TEST_CASE(test_graph_DFS) {

	graph<int> g;
	g.vertexs.push_back(LIST("1 2 3"));
	g.vertexs.push_back(LIST("2 5 6 3"));
	g.vertexs.push_back(LIST("3 1 2 4"));
	g.vertexs.push_back(LIST("4 3 6 5"));
	g.vertexs.push_back(LIST("5 4 6 2"));
	g.vertexs.push_back(LIST("6 2 5 4"));

	stack<int> q;
	map<int, bool> visited;
	size_t i;
	int now;
	for (i=0; i<g.vertexs.size(); ++i) {
		now=g.vertexs[i][0];
		visited[now]=false;
	}
	now=g.vertexs[0][0];
	q.push(now);

	while (!q.empty()) {
		now=q.top();
		q.pop();
		if (!visited[now]) {
			show("now visit:", now);
			visited[now]=true;
		}

		for (i=1; i<g.vertexs[now-1].size(); ++i) {
			int now2=g.vertexs[now-1][i];
			if (!visited[now2]) q.push(now2);
		}

	}

}

*/



//#define BOOST_AUTO_TEST_CASE(s) void s(void)



BOOST_AUTO_TEST_CASE(test_get_power) {
	int a=get_power2(2, 30);
	print(a);

}


#endif // JADE_ALL_TESTS_HPP
