#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c", &ch);
	
	// 코드 1
	/*while(ch != 'g') {
		printf("%c", ch);
		scanf("%c", &ch);
	}*/

	// 코드 2
	while (ch != 'g') {
		printf("%c", ++ch);
		scanf("%c", &ch);
	}

	return 0;
}