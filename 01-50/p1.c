#include <stdio.h>

// boundary (we iterate up to and equals to 999, or below 1000)
#define N 999

// solutions
int bruteforceSolution(void);
int analyticalSolution(void);

// main
int main(void) {
	printf("Bruteforce solution: %d\n", bruteforceSolution()); // 233 168 
	printf("Analytical solution: %d\n", analyticalSolution()); // 
	return 0;
}

// Calculates the sum of multiples of 3 and 5 below 1000 (slower)
int bruteforceSolution(void) {
	int sum = 0;

	for(int i = 0; i < N+1; i++) {
		if(i%3 == 0 || i%5 == 0) {
			sum += i;
		}
	}

	return sum;
}

int analyticalSum(int n) {
	return n*(n + 1)/2;
}

// Calculates the sum of multiples of 3 and 5 below 1000 analytically (faster)
int analyticalSolution(void) {
	// multiples
	int m3 = 3;
	int m5 = 5;
	int m15 = 15;

	// upper lowest bound of multiples
	int M3 = (int)(N/m3);
	int M5 = (int)(N/m5);
	int M15 = (int)(N/m15);

	// sum of multiples of 3, 5, 15 below 1000
	int sum3 = m3 * analyticalSum(M3);
	int sum5 = m5 * analyticalSum(M5);
	int sum15 = m15 * analyticalSum(M15);

	return sum3 + sum5 - sum15;
}
















