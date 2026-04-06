#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define DEFAULT_WAGE_PER_HOUR 9860
#define EXCEED_WORKING_HOUR_STANDARD 30
#define EXCEED_WORKING_WAGE_RATE 1.2
#define TAX_STANDARD 300000
#define DEFAULT_TAX_RATE 0.03
#define EXCEED_TAX_RATE 0.05

int main(void) {
	int workingHour, totalWage, exceedHour, exceedWage;
	float tax, netWage;

	printf("근무 시간을 입력하시오 (시간단위): ");
	scanf("%d", &workingHour);

	if (workingHour <= EXCEED_WORKING_HOUR_STANDARD) {
		totalWage = workingHour * DEFAULT_WAGE_PER_HOUR;
	}
	else {
		printf("기본 주급: %d\n", DEFAULT_WAGE_PER_HOUR * EXCEED_WORKING_HOUR_STANDARD);
		exceedHour = workingHour - EXCEED_WORKING_HOUR_STANDARD;
		exceedWage = exceedHour * DEFAULT_WAGE_PER_HOUR * EXCEED_WORKING_WAGE_RATE;
		printf("초과 수당: %d 시간, %d원\n", exceedHour, exceedWage);
		totalWage = DEFAULT_WAGE_PER_HOUR * EXCEED_WORKING_HOUR_STANDARD + exceedWage;
	}

	printf("주당 총 임금: %d\n\n", totalWage);

	if (totalWage <= TAX_STANDARD) {
		tax = totalWage * DEFAULT_TAX_RATE;
		printf("주급이 %d원 이하로 %d%% 세율 적용, 세액: %d원\n\n", TAX_STANDARD, (int)(DEFAULT_TAX_RATE * 100), (int)tax);
	}
	else {
		tax = totalWage * EXCEED_TAX_RATE;
		printf("주급이 %d원 초과로 %d%% 세율 적용, 세액: %d원\n\n", TAX_STANDARD, (int)(EXCEED_TAX_RATE * 100), (int)tax);
	}

	netWage = totalWage - tax;
	printf("실수령액: %d원\n", (int)netWage);

	return 0;
}