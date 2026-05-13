#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void larger_of(double* x, double* y);

int main(void) {
	double x, y;
	
	printf("Enter two values: \n");
	scanf("%lf %lf", &x, &y);

	printf("The original values are %.2lf and %.2lf\n", x, y);

	larger_of(&x, &y);
	
	printf("The changed values are %.2lf and %.2lf\n", x, y);
	
	return 0;
}

void larger_of(double* x, double* y) {
	if (*x > *y) {
		*y = *x;
	}
	else {
		*x = *y;
	}
}