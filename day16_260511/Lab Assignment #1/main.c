#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main(void) {
	char word[SIZE];
	char input[SIZE];
	char sel[2];
	int i;

	srand((unsigned)time(NULL));

	while (1) {
		for (i = 0; i < 5; i++) {
			word[i] = 'a' + (rand() % 26);
		}

		word[i] = '\0';
		printf("%s \n", word);
		Sleep(2000);
		system("cls");

		printf("글자를 입력하세요: ");
		gets_s(input, SIZE);

		if (!strcmp(input, word))
			printf("정답입니다\n");
		else
			printf("안타깝네요~\n");

		printf("다시 수행하시겠습니까?: ");
		gets_s(sel, 2);
		if (!strcmp(sel, "y") || !strcmp(sel, "Y")) {
			system("cls");
			continue;
		}
		else {
			break;
		}

		return 0;
	}
}