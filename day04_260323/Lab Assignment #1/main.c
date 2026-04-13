#include <stdio.h>

int main(void) {
	float result = (3.32e-3 + 9.76e-8) / (9.12e6 + 1.87e9);
	printf("%e", result);

	return 0;
}