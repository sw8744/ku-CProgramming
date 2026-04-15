#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double dist(int x1, int y1, int x2, int y2);

int main(void) {
	int x1, x2, y1, y2;
	char ch;
	
	while (1) {
		printf("첫 번째 점의 좌표를 입력하시오: ");
		scanf("%d %d", &x1, &y1);
		printf("두 번째 점의 좌표를 입력하시오: ");
		scanf("%d %d", &x2, &y2);

		printf("두 점 사이의 거리는 %lf입니다.\n", dist(x1, y1, x2, y2));
		
		printf("다시 수행하시겠습니까? (y/n): ");
		while ((ch = getchar()) == '\n');
		if (ch == 'n') {
			break;
		}
	}
}

double dist(int x1, int y1, int x2, int y2) {
	int delta_x, delta_y;

	delta_x = x1 - x2;
	delta_y = y1 - y2;

	return sqrt((double)(delta_x * delta_x + delta_y * delta_y));
}