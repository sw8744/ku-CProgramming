#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c;
	double x1, x2, D;
	
	printf("이차방정식의 계수 a, b, c를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a) {
		D = b * b - 4 * a * c;
		if (D > 0) {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			printf("x1 : %.2f, x2 : %.2f\n", x1, x2);
		}
		else if (D == 0) {
			x1 = (-b) / (2.0 * a);
			printf("x1 = x2 : %.2f\n", x1);
		}
		else {
			printf("실근이 존재하지 않습니다!\n");
		}
	}
	else {
		if (b) {
			x1 = (double)(- c) / b;
			printf("x : %.2f\n", x1);
		}
	}

	return 0;
}