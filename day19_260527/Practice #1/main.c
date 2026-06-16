#include <stdio.h>
#include <stdlib.h>

void print_random(char** list, int size);

int main(void) {
	char* fruit[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};
	int size = sizeof(fruit) / sizeof(fruit[0]);
	srand(time(0));
	print_random(fruit, size);
	return 0;
}

void print_random(char** list, int size) {
	int randomIndex = rand() % size;
	printf("%s", list[randomIndex]);
}