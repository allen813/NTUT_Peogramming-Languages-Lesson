#include <stdio.h>
#include <stdlib.h>
int power(int x, int y) {
	if (y < 1)	return 1;
	return x * power(x, y - 1);
}

int main() {
	int base, exponent;
	printf("Exponent is an interger greater than or equal 1 !!\n");
	printf("Enter power(base,exponent):");
	scanf_s("%d %d", &base, &exponent);
	printf("%d",power(base, exponent));
}