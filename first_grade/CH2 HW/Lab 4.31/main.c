#include <stdio.h>
#include <stdlib.h>

int main() {
	int x=4, y=1;
	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j < x; j++)	printf(" ");
		for (int j = 0; j < y; j++)	printf("*");
		if (i < 5) {
			x -= 1;
			y += 2;
		}
		else {
			x += 1;
			y -= 2;
		}
		printf("\n");
	}
}