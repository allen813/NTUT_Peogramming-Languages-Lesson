#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int length, breadth;
	printf("Enter the length  : ");
	scanf("%d", &length);
	printf("Enter the breadth : ");
	scanf("%d", &breadth);
	for (int i = 1; i <= length; i++) {
		if (i == 1 || i == length) {
			for (int j = 1; j <= breadth; j++)	printf("+");
			printf("\n");
		}
		else {
			printf("+");
			for (int j = 1; j < breadth - 1; j++)	printf(" ");
			printf("+\n");
		}
	}
}