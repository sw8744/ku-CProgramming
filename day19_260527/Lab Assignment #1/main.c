#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	struct vector {
		double x;
		double y;
	};

	struct vector A, B, add , sub, kA, kB;
	int k;
	double dot, absA, absB;

	printf("첫 번째 벡터 A의 x성분과 y성분을 입력하세요: ");
	scanf("%lf %lf", &A.x, &A.y);
	printf("두 번째 벡터 B의 x성분과 y성분을 입력하세요: ");
	scanf("%lf %lf", &B.x, &B.y);
	printf("스칼라 값 k를 입력하세요: ");
	scanf("%d", &k);

	add.x = A.x + B.x;
	add.y = A.y + B.y;
	printf("A + B = (%lf, %lf)\n", add.x, add.y);

	sub.x = A.x - B.x;
	sub.y = A.y - B.y;
	printf("A - B = (%lf, %lf)\n", sub.x, sub.y);

	dot = A.x * B.x + A.y + B.y;
	printf("A·B = %lf\n", dot);

	kA.x = k * A.x;
	kA.y = k * A.y;
	printf("kA = (%lf, %lf)\n", kA.x, kA.y);

	kB.x = k * B.x;
	kB.y = k * B.y;
	printf("kB = (%lf, %lf)\n", kB.x, kB.y);

	absA = sqrt(A.x * A.x + A.y * A.y);
	printf("|A| = %lf\n", absA);

	absB = sqrt(B.x * B.x + B.y * B.y);
	printf("|B| = %lf\n", absB);

	return 0;
}