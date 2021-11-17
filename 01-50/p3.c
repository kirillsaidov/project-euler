#include <stdio.h>
#include <math.h>

long largestPrime(long num);

int main(void) {
	long num = 600851475143;

	printf("Largest prime of %ld is %ld\n", num, largestPrime(num));

	return 0;
}

/* 
	This function will always return prime numbers, because 
	we start from 2 by returning smallest prime divisors of num
	in largsetPrime function below. 

	Thus, the last prime number returned is the solution.

	Every number is can be represented as a product of primes:
		num = П(p[i]) where p[i] doesn't have to be unique
*/
long factorization(const long num) {
	if(num >= 2) {
		for(long i = 2; i < sqrt(num); i++) {
			if(num % i == 0) {
				return i;
			}
		}
	}

	return num;
}

long largestPrime(long num) {
	long prime = 1;

	while((prime = factorization(num)) < num) {
		num /= prime;
	}

	return prime;
}





