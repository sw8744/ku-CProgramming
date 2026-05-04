#include <stdio.h>

void reverse();

int main(void) {
	printf("String: ");
	reverse();
	return 0;
}

void reverse() {
	char ch;
	ch = getchar();

	if (ch != '\n') {
		reverse();
	}
	printf("%c", ch);
}