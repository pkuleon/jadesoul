#ifndef JADE_HPP_BY_JADESOUL
#define JADE_HPP_BY_JADESOUL
/**
 * File: jade.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-07 13:17:37.893000
 * Written In: Peking University, beijing, China$
 */
 
/****************************************
*   includes
****************************************/

#include "jade/jade_config.hpp"
#include "jade/jade_types.hpp"
#include "jade/jade_common.hpp"
#include "jade/jade_functions.hpp"
#include "jade/jade_classes.hpp"
#include "jade/jade_global.hpp"
#include "jade/jade_utils.hpp"
#include "jade/jade_algorithm.hpp"
#include "jade/jade_objectworld.hpp"

#ifdef ENABLE_BOOST_UNIT_TEST
#   include "jade_all_tests.hpp"
#endif

#ifdef ENABLE_OPENGL_TEST
#   include "jade_opengl_test.hpp"
int main(int argc, char * argv[]) {
	return opengltest::opengltest_main(argc, argv);
}
#endif

//for debug option
#ifdef debug
	#define show(msg, var) cout<< msg <<" = ";dump(var)
	#define printv(var) show(#var , var)
	#define printl(msg, var) cout<<msg<<": "<<var<<endl;
	#define dbglog(...) log(__VA_ARGS__)
	// #define print2(var1, var2) show( #var1 , var1); show( #var2 , var2)

#else
	#undef show
	#define show(a, b)
	
	#undef printv
	#define printv(a)

	#undef printl
	#define printl(msg, var)

	#undef dbglog
	#define dbglog(...)
#endif

//for google test
#ifdef googletest

#include <limits.h>
#include <gtest/gtest.h>

#define gtest(name) TEST(test, name)
#define gtrue EXPECT_TRUE
#define gfalse EXPECT_FALSE
#define gequal EXPECT_EQ

GTEST_API_ int main(int argc, char **argv) {
	std::cout << "Running Google Test main() from jadesoul\n";
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

// void test();

// gtest (test) {
	// test();
// }

#endif

#endif /* JADE_HPP_BY_JADESOUL */
