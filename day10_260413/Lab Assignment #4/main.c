#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;
	float f_num1, f_num2;
	char operator;

	do {
		printf("*******************\n");
		printf("A---Add\nS---Substract\nM---Multiply\nD---Divide\nQ---Quit\n");
		printf("*******************\n");
		
		printf("연산을 선택하시오: ");
		while ((operator = getchar()) == '\n');

		if (operator == 'Q') {
			printf("계속하려면 아무 키나 누르십시오...\n");
			break;
		}
		if (operator != 'A' && operator != 'S' && operator != 'M' && operator != 'D') {
			printf("잘못 입력하였습니다.\n");
			continue;
		}

		printf("두 수를 입력하시오: ");
		scanf("%d %d", &num1, &num2);

		switch (operator) {
		case 'A':
			printf("%d + %d = %d\n", num1, num2, num1 + num2);
			break;

		case 'S':
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
			break;

		case 'M':
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
			break;

		case 'D':
			f_num1 = (float)num1;
			f_num2 = (float)num2;
			printf("%.2f / %.2f = %.2f\n", f_num1, f_num2, f_num1 / f_num2);
			break;
		}
	} while (1);

	return 0;
}