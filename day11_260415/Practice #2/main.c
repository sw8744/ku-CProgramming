#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float f_to_C(float temp);

int main(void) {
	float f, c;

	printf("È­¾¾ ¿Âµµ ÀÔ·Â: ");
	scanf("%f", &f);

	c = f_to_C(f);
	printf("¼·¾¾ ¿Âµµ: %.2f\n", c);

	return 0;
}

float f_to_C(float temp) {
	return 5.0 / 9.0 * (temp - 32);
}