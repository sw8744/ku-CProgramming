#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char alphabet;
	
	printf("문자를 입력하세요: ");
	scanf("%c", &alphabet);

	if (alphabet >= 'a' && alphabet <= 'z') {
		// if 구문
		if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') {
			printf("%c는 모음입니다.\n", alphabet);
		}
		else {
			printf("%c는 자음입니다.\n", alphabet);
		}

		// switch 구문
		switch (alphabet) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("%c는 모음입니다.\n", alphabet);
				break;
			default:
				printf("%c는 자음입니다.\n", alphabet);
		}
	}
	else {
		printf("알파벳 소문자가 아닙니다.\n");
	}

	return 0;
}