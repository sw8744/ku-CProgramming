#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define GRAVITY 9.8

int main(void) {
	float m, v, h, Ek, Ep, Em;

	printf("물체의 질량 m (kg), 속도 v (m/s) 및 높이 h (m)를 입력하시오: ");
	scanf("%f %f %f", &m, &v, &h);

	Ek = 1.0 / 2.0 * m * v * v;
	Ep = m * GRAVITY * h;
	Em = Ek + Ep;

	printf("운동에너지: %10.2f [J]\n", Ek);
	printf("위치에너지: %10.2f [J]\n", Ep);
	printf("역학에너지: %10.2f [J]\n", Em);

	return 0;
}