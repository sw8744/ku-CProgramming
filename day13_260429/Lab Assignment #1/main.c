#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face();

int main(void) {
	int i;
	srand((unsigned)time(0));
	printf("주사위 던지기를 시작합니다. \n");
	for (i = 0; i < 50; i++) {
		get_dice_face();
	}

	return 0;
}

void get_dice_face() {
	static char face1 = 0, face2 = 0, face3 = 0, face4 = 0, face5 = 0, face6 = 0;
	char dice;
	
	dice = rand() % 6 + 1;
	printf("\n현재 주사위 면: %hhd\n", dice);

	switch (dice) {
	case 1:
		face1++;
		break;
	case 2:
		face2++;
		break;
	case 3:
		face3++;
		break;
	case 4:
		face4++;
		break;
	case 5: 
		face5++;
		break;
	case 6:
		face6++;
		break;
	}

	printf("면 별 나온 횟수:\n1: %hhd, 2: %hhd, 3: %hhd, 4: %hhd, 5: %hhd, 6: %hhd\n", face1, face2, face3, face4, face5, face6);
}