#include <stdio.h>
#define ROW 3
#define COL 3

int get_sum(int (*p)[COL]);

int main(void) {
	int a[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("The total sum is : %d \n", get_sum(a));

	return 0;
}

int get_sum(int (*p)[COL]) {
	int sum = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			sum += *(*(p + i) + j);
			// sum += p[i][j]; 와 동일
			// i < ROW * COL로 하고 sum += p[i]; 로 해도 동일
		}
	}
	return sum;
}