/**
 * File: prime_test.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-02-19 14:10:09.888000
 * Written In: Peking University, beijing, China
 */

#include "jadesoul.hpp"
using namespace std;

// Returns true if n is a prime number.
bool is_prime(uint n) {
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

uint primes[]={
		2, 	3, 	5, 	7, 	11,
		13, 	17, 	19, 	23, 	29, 
		31, 	37, 	41,	43, 	47,
		53
	};
	
void test_primes() {
	uint max_p=2;
	for_n(i, 0xffffffff) {
		if (i%1000000000==0) print(i);
		for_n(j, 15) {
			uint p=primes[j];
			if (i%p!=0) {
				if (max_p<p) max_p=p;
				break;
			}
			// print(i);print(p);print(i%p);
			// print("----------------");
			if (j==14) print(i);
		}
		
	}
	print(max_p);
}

int main () {
	test_primes();
	return 0;
	
	::list<str> ps;
	// for_n(i, uint(-1)) if (is_prime(i)) ps.append(i);
	uint sum=1, max_uint=uint(-1);
	for_n(i, 100000) {
		if (i%10000==0) print(i);
		if (is_prime(i)) {
			ps.append(i);
			// if (sum<=max_uint/i) {
				
				// sum*=i;
			// }
			// else break;
		}
	}
	print(sum);
	str s=ps.glue('\n');
	fwrite(s, "a.txt");
}


