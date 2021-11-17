#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>

bool is_palindrome(const uint64_t num);
void factorization(const long num);

int main(void) {
	// printf("%d\n", is_palindrome(121));
	factorization(991199);

	return 0;
}

bool is_palindrome(const uint64_t num) {
	uint64_t tempNum = num;
	uint64_t reversed = 0;

	while (tempNum > 0) {
		reversed = reversed * 10 + tempNum % 10;
		tempNum /= 10;
	}

	return (reversed == num);
}

void factorization(const long num) {
	if(num >= 2) {
		for(long i = 2; i < sqrt(num); i++) {
			if(num % i == 0) {
				printf("%ld\n", i);
			}
		}
	}
}