// C++ program for implementation of Sieve of Atkin 
#include <bits/stdc++.h> 
#define limit  1000000001
using namespace std; 
typedef long long ll;
ll sieve[limit];

void SieveOfAtkin() 
{ 
	// 2 and 3 are known to be prime 
	if (limit > 2) 
		cout << 2 << " "; 
	if (limit > 3) 
		cout << 3 << " "; 

	// Initialise the sieve array with false values 
	
	for (ll i = 0; i < limit; i++) 
		sieve[i] = false; 

	/* Mark siev[n] is true if one 
	of the following is true: 
	a) n = (4*x*x)+(y*y) has odd number of 
	solutions, i.e., there exist 
	odd number of distinct pairs (x, y) 
	that satisfy the equation and 
		n % 12 = 1 or n % 12 = 5. 
	b) n = (3*x*x)+(y*y) has odd number of 
	solutions and n % 12 = 7 
	c) n = (3*x*x)-(y*y) has odd number of 
	solutions, x > y and n % 12 = 11 */
	for (ll x = 1; x * x < limit; x++) { 
		for (ll y = 1; y * y < limit; y++) { 
			
			// Main part of Sieve of Atkin 
			ll n = (4 * x * x) + (y * y); 
			if (n <= limit && (n % 12 == 1 || n % 12 == 5)) 
				sieve[n] ^= true; 

			n = (3 * x * x) + (y * y); 
			if (n <= limit && n % 12 == 7) 
				sieve[n] ^= true; 

			n = (3 * x * x) - (y * y); 
			if (x > y && n <= limit && n % 12 == 11) 
				sieve[n] ^= true; 
		} 
	} 

	// Mark all multiples of squares as non-prime 
	for (ll r = 5; r * r < limit; r++) { 
		if (sieve[r]) { 
			for (ll i = r * r; i < limit; i += r * r) 
				sieve[i] = false; 
		} 
	} 

	// Print primes using sieve[] 
	for (ll a = 5; a < 30; a++) 
		if (sieve[a]) 
			cout << a << " "; 
} 

// Driver program 
int main(void) 
{ 
	SieveOfAtkin(); 
	return 0; 
} 
