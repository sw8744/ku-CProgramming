#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, i, sum;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n) {
		sum += i * i + 1;
		printf("%d + ", i * i + 1);
		i++;
	}

	printf("\b\b= %d\n", sum);

	return 0;
}