#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {
	int n[SIZE] = {19,3,15,7,11,9,13,5,17,1 };
	
	printf("%s%13s%17s\n", "Elemnt", "Value", "Histogram");

	for (int i = 0; i < SIZE; i++) {
		printf("%7d%13d ", i, n[i]);
		for (int j = 1; j <= n[i]; j++)
			printf("%c", '*');
		printf("\n");
	}

	system("pause");
	return 0;
}