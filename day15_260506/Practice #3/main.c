#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 32

int main(void) {
	int num, index = 0, i;
	char bin[SIZE];

	printf("십진수 입력: ");
	scanf("%d", &num);

	while (num) {
		bin[index] = num % 2;
		num /= 2;
		index++;
	}

	printf("2진수: ");

	for (i = --index; i >= 0; i--) {
		printf("%d", bin[i]);
	}

	return 0;
}