#include <stdio.h>
#include "roll_dice.h"
#include "player.h"

void print_winner(void) {
	if (roll_dice_num[0] > roll_dice_num[1]) {
		printf("%s���� �̰���ϴ�.\n", player[0]);
	}
	else if (roll_dice_num[0] < roll_dice_num[1]) {
		printf("%s���� �̰���ϴ�.\n", player[1]);
	}
	else {
		printf("���º� �Դϴ�.\n");
	}
}