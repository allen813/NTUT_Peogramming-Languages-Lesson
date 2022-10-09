#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,y;
	printf("(A)	   (B)	      (C)        (D)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++)	printf("*");
		for (int j = 11 - i; j > 0; j--)	printf(" ");
		for (int j = 11 - i; j > 0; j--)	printf("*");
		for (int j = 1; j <= i - 1; j++)	printf(" ");
		for (int j = 1; j <= i; j++)	printf(" ");
		for (int j = 11 - i; j > 0; j--)	printf("*");
		for (int j = 11 - i; j > 0; j--)	printf(" ");
		for (int j = 1; j <= i; j++)	printf("*");
		printf("\n");
	}
}