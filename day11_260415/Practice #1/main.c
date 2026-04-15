#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f_to_C(void) {
	float f, c;

	printf("È­¾¾ ¿Âµµ ÀÔ·Â: ");
	scanf("%f", &f);
	
	c = 5.0 / 9.0 * (f - 32);
	printf("¼·¾¾ ¿Âµµ: %.2f\n", c);
}

int main(void) {
	f_to_C();

	return 0;
}