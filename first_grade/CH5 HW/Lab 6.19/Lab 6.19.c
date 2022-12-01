#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int dice1, dice2, a[6][6] = { 0 }, b[56] = { 0 }, c[11] = { 0 };
	srand(time(0));
	for (int i = 0; i < 36000; i++) {
		dice1 = rand() % 6;
		dice2 = rand() % 6;
		a[dice1][dice2]++;
		b[dice1 + dice2 * 10]++;
	}
	printf("以二維陣列製作:\n       ");
	for (int i = 1; i <= 6; i++)
		printf("[%d]   ", i);
	printf("\n");
	for (int j = 0; j < 6; j++) {
		printf(" [%d]", j+1);
		for (int i = 0; i < 6; i++) {
			printf(" %5d", a[i][j]);
		}
		printf("\n");
	}

	int sum = 0;
	printf("\n以一維陣列製作:\n       ");
	for (int i = 1; i <= 6; i++)
		printf("[%d]    ", i);
	for (int i = 0; i < 6; i++) {
		printf("\n  [%d]",i+1);
		for (int j = 0; j < 6; j++){
			printf("%5d  ", b[i + j * 10]);
			c[i + j] = c[i + j] + b[i + j * 10];
		}
	}

	printf("\n\n    ");
	for (int i = 2; i <= 8; i++)
		printf("[%d]    ", i);
	for (int i = 9; i <= 12; i++)
		printf("[%d]   ", i);

	printf("\n");
	for (int i = 0; i < 11; i++) {
		printf("%7d", c[i]);
		sum  += c[i];
	}
	printf("\nTimes: %d\n",sum);

	system("pause");
	return 0;
}