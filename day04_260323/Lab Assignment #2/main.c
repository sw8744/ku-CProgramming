#define _CRT_SECURE_NO_WARNINGS
#define YEAR_TO_SECOND_RATE 3.156e7f
#include <stdio.h>

int main(void) {
	char age;
	float ageToSecond;

	printf("Enter your age:");
	scanf("%hhd", &age);

	ageToSecond = age * YEAR_TO_SECOND_RATE;
	printf("%hhd years old is %.0f in seconds\nor %e in seconds.", age, ageToSecond, ageToSecond);

	return 0;
}