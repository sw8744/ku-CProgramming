#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define HOUR_SECOND_RATE 3600
#define MINUTE_SECOND_RATE 60

int main(void) {
	float speed, totalHour;
	int distance, totalSecond, hour, minute, second;

	printf("Enter the speed (km/h): ");
	scanf("%f", &speed);

	printf("Enter the driviing distance (km): ");
	scanf("%d", &distance);

	totalHour = distance / speed;
	totalSecond = totalHour * HOUR_SECOND_RATE;

	hour = totalSecond / HOUR_SECOND_RATE;
	minute = (totalSecond % HOUR_SECOND_RATE) / MINUTE_SECOND_RATE;
	second = (totalSecond % HOUR_SECOND_RATE) % MINUTE_SECOND_RATE;

	printf("The total driving time is %d hours %d minutes %d seconds", hour, minute, second);

	return 0;
}