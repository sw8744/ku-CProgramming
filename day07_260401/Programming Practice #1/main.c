#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;
	printf("2개의정수를입력하시오:");
	scanf("%d %d", &x, &y);
	if (x == 0)
	if (y == 0)
		printf("두수모두0입니다.\n");
	else
		printf("둘중에서하나는0입니다.\n");
	
	return 0;
}