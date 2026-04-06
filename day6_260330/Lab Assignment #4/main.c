#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c;
	double D, x1, x2;

	printf("Enter a, b and c for a quadratic equation ax^2 + bx + c = 0:\n");
	scanf("%d %d %d", &a, &b, &c);

	D = (double)b * b - 4 * a * c;

	x1 = (-b + sqrt(D)) / (2 * a);
	x2 = (-b - sqrt(D)) / (2 * a);

	printf("The answer is <%.2f, %.2f>", x1, x2);

	return 0;
}