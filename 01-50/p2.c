#include <stdio.h>
#include <math.h>

// Binet's formula for calculating Fibonacci numbers using the Golden Ratio Phi
int binetsFibonacci(const int n);

// The Golden Ratio
const float phi = (1 + sqrt(5))/2;

int main(void) {
	int i = 2;		// start from fibonacci = 1
	int sum = 0;
	int fibnum = 0;

	while((fibnum = binetsFibonacci(i++)) < 400) {
		if(!(fibnum & 1)) { // sum even fibonacci numbers
			sum += fibnum;
		}
	}

	printf("Sum of even fibonacci numbers below 4e+9: %d\n", sum);
	
	return 0;
}

int binetsFibonacci(const int n) {
	return round((pow(phi, n) - (1/pow(-phi, n))) / (2*phi - 1));
}
