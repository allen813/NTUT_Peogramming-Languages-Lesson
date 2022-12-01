#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Key in some numbers:");
	int i = 0,num[100],MAX;


	do {
		scanf_s("%d", &num[i]);
		i++;
	} while (getchar() != '\n');

	MAX = num[0];

	for (int j = 1; j < i; j++)
		if (num[j] > MAX)
			MAX = num[j];

	printf("The largest number is %d\n", MAX);

	system("pause");
	return 0;
}