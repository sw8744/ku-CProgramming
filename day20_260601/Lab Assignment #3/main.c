#include <stdio.h>

#define HEIGHT 10
#define WIDTH 10

void array_copy(int copy[][WIDTH], int origin[][WIDTH]);
void array_print(int array[][WIDTH]);

int main(void) {
	int score[HEIGHT][WIDTH] = { {100, 30, 67}, {89, 50, 12}, {19, 60, 90} };
	int tmp[HEIGHT][WIDTH];
	
	array_copy(tmp, score);
	array_print(tmp);

	return 0;
}

void array_copy(int copy[][WIDTH], int origin[][WIDTH]) {
	int* pCopy, * endpCopy, * pOrigin, * endpOrigin;
	pCopy = &copy[0][0];
	endpCopy = &copy[HEIGHT - 1][WIDTH - 1];
	pOrigin = &origin[0][0];
	endpOrigin = &origin[HEIGHT - 1][WIDTH - 1];
	while (pCopy <= endpCopy) {
		*pCopy++ = *pOrigin++;
	}
}

void array_print(int array[][WIDTH]) {
	int* p, * startp, * endp;
	startp = &array[0][0];
	endp = &array[HEIGHT - 1][WIDTH - 1];
	p = startp;
	while (p <= endp) {
		printf("%3d ", *p++);
		if (!((p - startp) % WIDTH)) {
			printf("\n");
		}
	}
}