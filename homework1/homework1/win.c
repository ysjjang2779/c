#include <stdio.h>
#include "player.h"
#include "dice.h"

void check_win(void) {
	if (dice_total[0] > dice_total[1]) {
		printf("%s�� ���� = %d\n", player[0], dice_total[0]);
		printf("%s�� ���� = %d\n", player[1], dice_total[1]);
		printf("%s�� �¸��Ͽ����ϴ�.\n", player[0]);
	}
	else if (dice_total[0] < dice_total[1]) {
		printf("%s�� ���� = %d\n", player[0], dice_total[0]);
		printf("%s�� ���� = %d\n", player[1], dice_total[1]);
		printf("%s�� �¸��Ͽ����ϴ�.\n", player[1]);
	}
	else {
		printf("%s�� ���� = %d\n", player[0], dice_total[0]);
		printf("%s�� ���� = %d\n", player[1], dice_total[1]);
		printf("���º� �Դϴ�.\n");
	}
}