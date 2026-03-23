#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int inum;
	short snum;
	unsigned int unum;
	float log;
	double pi;

	printf("inum: ");
	scanf("%d", &inum);
	printf("snum: ");
	scanf("%hd", &snum);
	printf("unum: ");
	scanf("%u", &unum);
	printf("log: ");
	scanf("%f", &log);
	printf("pi: ");
	scanf("%lf", &pi);

	printf("inum is %d\n", inum);
	printf("snum is %hd\n", snum);
	printf("unum1 is %u\n", unum);
	printf("log is %f\n", log);
	printf("pi is %lf\n", pi);

	return 0;
}