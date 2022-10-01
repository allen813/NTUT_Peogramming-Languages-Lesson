#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x;
	printf("Please key in \n one interger:");
	scanf("%d", &x);
	if (x / 2 == 0)
		printf("\nThe number is even\n");
	else
		printf("\nThe number is odd\n");
	system("pause");
	return 0;
}