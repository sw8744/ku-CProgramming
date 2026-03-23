#include <stdio.h>

int main(void) {
	int inum = 2;
	short snum = 2;
	unsigned int unum1 = 53456;
	unsigned int unum2 = 4123456789;
	float log = 2.71828;
	double pi = 3.141592;

	printf("inum is %d\n", inum);
	printf("snum is %hd\n", snum);
	printf("unum1 is %u\n", unum1);
	printf("unum2 is %u\n", unum2);
	printf("log is %f\n", log);
	printf("pi is %lf\n", pi);

	return 0;
}