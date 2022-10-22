#include <stdio.h>
#include <stdlib.h>

long long int fibonacci(unsigned int t) {
	if (t == 0)	return 0;
	if (t == 1)	return 1;
	return fibonacci(t - 1) + fibonacci(t - 2);
}

int main() {
	unsigned int num;
	printf("Enter the number of fibonacci\n series you want :");
	scanf_s("%d", &num);num -= 1;
	for (int i = 0; i <= num; i++) {
		if (i % 8 == 0)	printf("\n");
		printf("%d\t", fibonacci(i));
	}
	printf("\n\nThe Maximum is: %d  \n\n", fibonacci(num));

	system("pause");
	return 0;
}