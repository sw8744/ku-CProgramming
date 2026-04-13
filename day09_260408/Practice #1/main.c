#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, i, sum;
	
	printf("자연수 하나를 입력하세요: ");
	scanf("%d", &n);

	i = 1;
	sum = 0;
	// i = 2;
	// sum = 1;

	while (i < n) {
		if (!(n % i)) {
			sum += i;
			// sum += i + n / i; -> 시행 횟수 절반으로 줄어듬
		}
		i++;
	}

	if (sum == n) {
		printf("%d은(는) 완전수입니다.\n", n);
	}
	else {
		printf("%d은(는) 완전수가 아닙니다.\n", n);
	}

	return 0;
}