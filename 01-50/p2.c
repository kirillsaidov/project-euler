#include <stdio.h>
#include <math.h>

// NOTE: DO NOT FORGET TO LINK MATH LIB: -lm

// Binet's formula for calculating Fibonacci numbers using the Golden Ratio Phi
long binetsFibonacci(const int n);

// The Golden Ratio
const float phi = (1 + sqrt(5))/2;

int main(void) {
	int i = 2;		// start from fibonacci = 1
	long sum = 0;
	long fibnum = 0;

	while((fibnum = binetsFibonacci(i++)) < 4e+6) { // less than 4 million
		if(/*!(fibnum & 1)*/ fibnum%2 == 0) { // sum even fibonacci numbers
			sum += fibnum;
			printf("%d: %d\n", i-1, fibnum);
		}
	}

	printf("Sum of even fibonacci numbers below 4e+6: %ld\n", sum);
	
	return 0;
}

long binetsFibonacci(const int n) {
	return round((pow(phi, n) - (1/pow(-phi, n))) / (2*phi - 1));
}
