#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int area, widthRate, heightRate;
	double width, height, x, x_square;

	printf("넓이를 입력하세요: ");
	scanf("%d", &area);

	printf("가로 세로 비율을 입력하세요: ");
	scanf("%d %d", &widthRate, &heightRate);

	x_square = ((double)area / (widthRate * heightRate));
	width = sqrt(x_square) * widthRate;
	height = sqrt(x_square) * heightRate;

	printf("가로 길이: %.2lf, 세로 길이: %.2lf", width, height);

	return 0;
}