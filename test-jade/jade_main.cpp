#include "../includes/jade.hpp"

#ifdef ENABLE_GOOGLE_TEST
#include <gtest/gtest.h>
#include <deque>
#include <hash_map>
#define gtest(name) TEST(test, name)
#define gtrue EXPECT_TRUE
#define gfalse EXPECT_FALSE
#define gequal EXPECT_EQ

GTEST_API_ int main(int argc, char **argv) {
	std::cout << "Running Google Test main() from jadesoul\n";
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

/*
#define repeat(n) for(int i=0; i< n ; ++i)

gtest(get_power2) {
	repeat(10000000) {
		//history.clear();
		get_power2(2, 30);
	}
}


gtest(get_power) {
	repeat(10000000) {
		get_power(2, 30);
	}
}

*/



gtest(mytest) {
	gtrue(1);
}




#endif



#ifndef ENABLE_BOOST_UNIT_TEST
#ifndef ENABLE_GOOGLE_TEST
int main() {
	string s="54321";
	insert_sort(s.begin(), s.end());
	dump(s);
	
	vec_int a=range("40:20:-2").to_vec();
	insert_sort(a.begin(), a.end());
	dump(a);
	
	return 0;
}
#endif
#endif

