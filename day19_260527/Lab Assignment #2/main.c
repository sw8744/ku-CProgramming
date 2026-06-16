#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STU_SIZE 10
#define MAX_SIZE 256

struct student {
	char name[MAX_SIZE];
	int stuNum;
	char cp[MAX_SIZE];
	char major[MAX_SIZE];
};

void show_menu();
void insert_student(struct student st[], int* count);
void search_student(struct student st[], int count);
void show_list(struct student st[], int count);

int main(void) {
	struct student st[STU_SIZE];
	int count = 0, sel;
	while (1) {
		show_menu();
		scanf("%d", &sel);
		getchar();
		printf("\n");
		if (sel == 4) {
			break;
		}
		if (sel < 1 || sel > 4) {
			continue;
		}
		switch (sel) {
		case 1: insert_student(st, &count); break;
		case 2: search_student(st, count); break;
		case 3: show_list(st, count); break;
		}
	}
	return 0;
}

void show_menu() {
	printf("1. 학생 등록\n");
	printf("2. 학생 검색\n");
	printf("3. 학생 리스트 출력\n");
	printf("4. 끌내기\n");
}

void insert_student(struct student st[], int* count) {
	if (*count < STU_SIZE) {
		printf("학생의 이름을 입력하세요: ");
		gets_s(st[*count].name, MAX_SIZE);
		printf("학생의 학번을 입력하세요: ");
		scanf("%d", &(st[*count].stuNum));
		getchar();
		printf("학생의 전화번호를 입력하세요: ");
		gets_s(st[*count].cp, MAX_SIZE);
		printf("학생의 전공을 입력하세요: ");
		gets_s(st[*count].major, MAX_SIZE);
		printf("등록되었습니다.\n\n");
		(*count)++;
	}
	else {
		printf("더 이상 입력할 수 없습니다.\n\n");
	}
}

void search_student(struct student st[], int count) {
	char name[MAX_SIZE];
	int isExists = 0;
	printf("검색할 학생의 이름을 입력하세요: ");
	gets_s(name, MAX_SIZE); 
	printf("\n");
	for (int i = 0; i < count; i++) {
		if (!strcmp(st[i].name, name)) {
			isExists = 1;
			printf("%s(%d)\n", st[i].name, st[i].stuNum);
			printf("C.P: %s\n", st[i].cp);
			printf("Major: %s\n\n", st[i].major);
		}
	}
	if (!isExists) {
		printf("해당 학생이 없습니다.\n\n");
	}
}

void show_list(struct student st[], int count) {
	for (int i = 0; i < count; i++) {
		printf("%s(%d)\n", st[i].name, st[i].stuNum);
		printf("C.P: %s\n", st[i].cp);
		printf("Major: %s\n\n", st[i].major);
	}
}