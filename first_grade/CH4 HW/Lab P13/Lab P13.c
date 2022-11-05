#include <stdio.h>
#include <stdlib.h>

void printArry(const int a[][3]);

int main(void) {
	int array1[2][3] = { {1,2,3},{4,5,6} };
	int array2[2][3] = { 1,2,3,4,5 };
	int array3[2][3] = { {1,2},{4} };

	printf("Value in arry1 by row are:\n");
	printArry(array1);

	printf("Value in arry2 by row are:\n");
	printArry(array2);

	printf("Value in arry3 by row are:\n");
	printArry(array3);

	system("pause");
	return 0;
}

void printArry(const int a[][3]) {
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 2; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}