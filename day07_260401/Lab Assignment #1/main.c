#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;
	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	// 중첩 if문
	if (!x) {
		if (!y) {
			printf("두 수 모두 0입니다.\n");
		}
		else {
			printf("x는 0이고, y는 0이 아닙니다.\n");
		}
	}
	else {
		if (!y) {
			printf("x는 0이 아니고, y는 0입니다.\n");
		}
		else {
			printf("x, y는 모두 0이 아닙니다.\n");
		}
	}

	// if - else if 문
	if (!x && !y) {
		printf("두 수 모두 0입니다.\n");
	}
	else if (x && y) {
		printf("x, y는 모두 0이 아닙니다.\n");
	}
	else if (!x) {
		printf("x는 0이고, y는 0이 아닙니다.\n");
	}
	else {
		printf("x는 0이 아니고, y는 0입니다.\n");
	}

	return 0;
}
