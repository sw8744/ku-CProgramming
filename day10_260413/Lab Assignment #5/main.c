#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	const int ROWS = 6;
	int row;
	char ch;
	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'F'; ch >= ('F' - row); ch--)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}