#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, f0, f1, f2;
	
	printf("2보다 큰 정수를 입력하세요: ");
	scanf("%d", &n);

	f0 = 0;
	f1 = 1;

	printf("피보나치 수열 f(%d):\n", n);
	
	printf("f(0)=0, f(1)=1, ");

	for (int i = 2; i <= n; i++) {
		f2 = f0 + f1;
		
		f0 = f1;
		f1 = f2;

		printf("f(%d)=%d, ", i, f1);

		if (!(i % 5) && i != n) {
			printf("\n");
		}
	}

	printf("\b\b \n");

	return 0;
}