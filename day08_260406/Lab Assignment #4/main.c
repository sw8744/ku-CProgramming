#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c;
	
	printf("문자 하나를 입력하시오: ");
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z') {
		printf("%c -> 대문자: %c\n", c, (c - 'a') + 'A');
	}
	else if (c >= 'A' && c <= 'Z') {
		printf("%c -> Ascii code: %d\n", c, c);
	}
	else {
		printf("%c -> 알파벳이 아닙니다.\n", c);
	}

	return 0;
}