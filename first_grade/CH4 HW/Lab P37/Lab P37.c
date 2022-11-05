#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int linearSearch(const int array[], int key, int size);

int main(void) {
	int a[SIZE], searchkey, element;

	for (int x = 0; x < SIZE; x++)
		a[x] = 2 * x;

	printf("Enter interger search key:\n");
	scanf_s("%d", &searchkey);

	element = linearSearch(a, searchkey, SIZE);
	
	if (element != -1)
		printf("Found value in element %d\n", element);
	else
		printf("Value not found\n");

	system("pause");
	return 0;
}

int linearSearch(const int array[], int key, int size) {
	for (int n = 0; n < size; ++n)
		if (array[n] == key)
			return n;
	return -1;
}