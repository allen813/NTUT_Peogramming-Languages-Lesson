#include <stdio.h>
#include <stdlib.h>

int sort(int *ptr) {
	int temp;
	for (int i = 0; i < 8; i++) {
		for (int j = i; j < 8; j++) {
			if (*(ptr + i) > *(ptr + j)) {
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}
}


int main(void) {
	int L=0, R=7, middle=3,ask,num[8];
	printf("Key 8 numbers with space:");
	for (int i = 0; i < 8; i++)
		scanf_s("%d", &num[i]);
	printf("What number you want to find:");
	scanf_s("%d", &ask);

	sort(&num);
	printf("after sortting:");
	for (int i = 0; i < 8; i++)
		printf("%d ", num[i]);

	if (num[L] == ask) {
		num[middle] = ask;
		middle = L;
	}
	else if(num[R] == ask) {
		num[middle] = ask;
		middle = R;
	}

	while (num[middle] != ask) {
		middle = (L + R) / 2;
		if (num[middle] > ask)	R = middle;
		else if (num[middle] < ask) L = middle;
	}

	printf("\nThe number you want is at number %d of the row which is be sortted!\n\n", middle + 1);
	
	system("pause");
	return 0;
}