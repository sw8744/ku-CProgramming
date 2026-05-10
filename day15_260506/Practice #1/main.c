#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
	int num[SIZE], i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		num[i] = rand();
	}


	for (i = 0; i < 10; i++) {
		printf("[ %d ] : %d \n", i, num[i]);
	}

	return 0;
}