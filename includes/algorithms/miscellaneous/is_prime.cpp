/**
 * File: is_prime.cpp
 * Description: 判断一个数是否是素数
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * $Date: 2010-10-16 18:27:01.853000$
 */

#define debug
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

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//code from google test samples

// Returns true iff n is a prime number.
bool is_prime(int n) {
	// Trivial case 1: small numbers
	if (n <= 1) return false;

	// Trivial case 2: even numbers
	if (n % 2 == 0) return n == 2;

	// Now, we have that n is odd and n >= 3.

	// Try to divide n by every odd number i, starting from 3
	for (int i = 3; ; i += 2) {
		// We only have to try i up to the squre root of n
		if (i > n/i) break;

		// Now, we have i <= n/i < n.
		// If n is divisible by i, n is not prime.
		if (n % i == 0) return false;
	}

	// n has no integer factor in the range (1, n), and thus is prime.
	return true;
}

int main () {
	cout<<"hello, world"<<endl;
}
