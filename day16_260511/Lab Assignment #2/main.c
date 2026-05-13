#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int matrix[5][5];
	int i = 0, j = 0, sum = 0, max = 0, min = 100;

	srand((unsigned)time(NULL));
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			matrix[i][j] = rand() % 100;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 5; i++) {
		max = 0, min = 100, sum = 0;

		for (j = 0; j < 5; j++) {
			sum += matrix[i][j];

			if (max < matrix[i][j]) {
				max = matrix[i][j];
			}
			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}
		printf("[%d] За, sum = %3d, max = %3d, min = %3d, average = %5.1f\n", i, sum, max, min, sum / 5.0);
	}

	printf("\n");

	for (i = 0; i < 5; i++) {
		max = 0, min = 100, sum = 0;

		for (j = 0; j < 5; j++) {
			sum += matrix[j][i];

			if (max < matrix[j][i]) {
				max = matrix[j][i];
			}
			if (min > matrix[j][i]) {
				min = matrix[j][i];
			}
		}
		printf("[%d] ї­, sum = %3d, max = %3d, min = %3d, average = %5.1f\n", i, sum, max, min, sum / 5.0);
	}

}