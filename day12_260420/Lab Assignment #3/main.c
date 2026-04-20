#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int set_random();
int decision(int computer, int user);
void print_result(int result);
int get_input();

int main(void) {
	int computer, user, result;
	char sel;
	
	srand((unsigned int)time(0));

	while (1) {
		computer = set_random();
		user = get_input();
		printf("\ncomputer: %d, user: %d\n", computer, user);

		result = decision(computer, user);
		print_result(result);

		printf("\n\n게임 계속 진행하려면 y를 누르시오. 단, q를 누르면 끝납니다.: ");
		scanf(" %c", &sel);

		if (sel == 'q')
			break;
	}
}

int set_random() {
	return rand() % 3;
}

int decision(int computer, int user) {
	if (!(computer - user)) {
		return 0;
	}
	else if (computer - user == -1 || computer - user == 2) {
		return 1;
	}
	else {
		return 2;
	}
}

void print_result(int result) {
	switch (result) {
	case 0:
		printf("무승부 입니다.");
		break;
	case 1:
		printf("사용자 승리입니다!");
		break;
	case 2:
		printf("컴퓨터 승리입니다!");
		break;
	}
}

int get_input() {
	int input;
	printf("가위(0), 바위(1), 보(2) 중 하나를 선택하세요: ");
	scanf("%d", &input);
	return input;
}