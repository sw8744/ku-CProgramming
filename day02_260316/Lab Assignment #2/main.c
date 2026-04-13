#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float f;
	float c;

	printf("이름: 이승원\n");
	printf("학번: 202611014\n");
	printf("수행일자: 2026. 03. 16\n\n");
	
	printf("화씨 온도를 입력하세요: ");
	scanf("%f", &f);

	c = 5.0 / 9.0 * (f - 32);
	printf("섭씨 온도는 %.2f도 입니다.", c);

	return 0;
}