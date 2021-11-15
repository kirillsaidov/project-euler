#include <stdio.h>
#include <math.h>

// NOTE: link -lm when compiling

long binetsSolution(void);

// The Golden Ratio
const double phi = 1.6180339887; // (1 + sqrt(5)) / 2

int main(void) {
	printf("Sum of even fibonacci numbers below 4e+6\n");
	printf("using Binet's formula: %ld\n", binetsSolution());

	return 0;
}

// Binet's formula for calculating Fibonacci numbers using the Golden Ratio
long binetsFormula(const int n) {
	return round((pow(phi, n) - (1/pow(-phi, n))) / (2*phi - 1));
}

long binetsSolution(void) {
	int i = 2;		// start from fibonacci = 1
	long sum = 0;
	long fibnum = 0;

	while((fibnum = binetsFormula(i++)) < 4e+6) { // less than 4 million
		if(!(fibnum & 1)) { // sum even fibonacci numbers
			sum += fibnum;
		}
	}

	return sum;
}









