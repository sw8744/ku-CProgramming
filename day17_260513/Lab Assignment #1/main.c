#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int_real(float f, int* integer, float* real);

int main(void) {
	float f, real;
	int integer;

	printf("실수를 입력하시오: ");
	scanf("%f", &f);

	get_int_real(f, &integer, &real);

	printf("정수 부분은 %d이고 소수 부분은 %f입니다.", integer, real);
}

void get_int_real(float f, int* integer, float* real) {
	*integer = (int)f;
	*real = f - *integer;
}