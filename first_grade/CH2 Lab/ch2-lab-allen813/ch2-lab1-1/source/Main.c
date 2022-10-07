#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("(1)\n");
	for (int i = 0; i < 10; i++)
		printf(i == 0 || i == 9 ? "XXXXXXXXXX\n" : "X--------X\n");

	printf("(2)\n");
	for (int i = 0; i < 10; i++)
		printf(i == 3 || i == 4 || i == 5 || i == 6 ? "XXX----XXX\n" : "XXXXXXXXXX\n");

	printf("(3)\n");
	for (int i = 10; i > 0; i--) {
		if (i > 6) {
			for (int j = i - 6; j > 0; j--)
				printf("-");
			printf("X");
			for (int j = (10 - i) * 2; j > 0; j--)
				printf("-");
			printf("X");
			for (int j = i - 6; j > 0; j--)
				printf("-");
			printf("\n");
		}
		else if (i == 6)	printf("XXXXXXXXXX\n");
		else printf("----------\n");
	}

	printf("(4)\n");
	printf("XXXXXXXXXX\n");
	for (int i = 1; i < 10; i++) {
		if (i < 5) {
			for (int j = 0; j < i; j++)
				printf("-");
			printf("X");
			for (int j = 0; j < (4 - i) * 2; j++)
				printf("-");
			printf("X");
			for (int j = 0; j < i; j++)
				printf("-");
			printf("\n");
		}
		else printf("----------\n");
	}

	printf("(5)\n");
	for (int i = 0; i < 10; i++) {
		if (i <= 4) {
			for (int j = 0; j < i; j++)
				printf("-");
			printf("X");
			for (int j = (4 - i) * 2; j > 0; j--)
				printf("-");
			printf("X");
			for (int j = 0; j < i; j++)
				printf("-");
		}
		else {
			for (int j = 0; j < 9 - i; j++)
				printf("-");
			printf("X");
			for (int j = (i - 5) * 2; j > 0; j--)
				printf("-");
			printf("X");
			for (int j = 0; j < 9 - i; j++)
				printf("-");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
