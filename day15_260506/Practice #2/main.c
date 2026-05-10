#include <stdio.h>

#define CSIZE 26

int main(void) {
	char string[CSIZE];

	for (int i = 0; i < 26; i++) {
		string[i] = 'a' + i;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c ", string[i]);
	}

	return 0;
}