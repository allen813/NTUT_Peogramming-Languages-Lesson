#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE,WON,LOST};
int rollDice(void);

int main(void) {
	int sum, myPoint;
	enum Status gameState;

	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gameState = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameState = LOST;
		break;

	default:
		gameState = CONTINUE;
		myPoint = sum;
		printf("Point is %d\n", myPoint);
		break;
	}

	while (gameState == CONTINUE) {
		sum = rollDice();
		if (sum == myPoint)
			gameState = WON;
		else
			if (sum == 7)
				gameState = LOST;
	}

	if (gameState == WON)
		printf("Player wins\n");
	else
		printf("Player loses\n");
	system("pause");
	return 0;
}

int rollDice(void) {
	int die1, die2, workSum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;

	printf("Player roll %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}