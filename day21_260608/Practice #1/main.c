#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* link;
} LIST;

LIST* insert_node(LIST* head, int d);
void print_list(LIST* head);

int main(void) {
	LIST* thead = NULL;
	int data;
	char key;

	printf("연결 리스트 생성\n");
	while (1) {
		printf("데이터를 입력하시오: ");
		scanf("%d", &data);
		getchar();
		thead = insert_node(thead, data);
		printf("계속 수행? (y) ");
		if ((key = getchar()) != 'y') {
			break;
		}
		getchar();
	}

	printf("리스트 출력: \n");
	print_list(thead);

	return 0;
}

LIST* insert_node(LIST* head, int d) {
	LIST* newList = NULL;
	LIST* p = head;
	if (!(newList = (LIST*)malloc(sizeof(LIST)))) {
		printf("메모리 동적 할당 오류\n");
		exit(1);
	}
	
	newList->data = d;
	newList->link = NULL;

	if (p == NULL) {
		head = newList;
	}

	else {
		while (p->link) {
			p = p->link;
		}

		p->link = newList;
	}

	return head;
}

void print_list(LIST* head) {
	LIST* thead = head;
	while (thead) {
		printf("(%d, %x)\n", thead->data, thead->link);
		thead = thead->link;
	}
}