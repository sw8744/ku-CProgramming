#include <stdio.h>
#include <string.h>

int main(void) {
	char string[101], ch;
	int alphabet[26] = { 0 };
	int i = 0;

	printf("Enter string\n");
	gets_s(string, 100);

	for (i = 0; i < strlen(string); i++) {
		ch = string[i];
		if ('a' <= ch && ch <= 'z') {
			alphabet[ch - 'a']++;
		}
	}

	for (i = 0; i < 26; i++) {
		printf("%c: %d ", 'A' + i, alphabet[i]);
		if ('A' + i == 'M') {
			printf("\n");
		}
	}

	return 0;
}