#include <stdio.h>
#include <math.h>

long largestPrime(long num);

int main(void) {
	long prime = 1;
	long num = 13195;

	printf("Largest prime of %ld: %ld\n", num, largestPrime(num));

	return 0;
}

long numFactorization(const long num) {
	if(num > 2) {
		for(long i = (long)sqrt(num); i > 0; i--) {
			if(num % i == 0) {
				return i;
			}
		}
	}

	return num;
}

long largestPrime(long num) {
	return 0;
}





