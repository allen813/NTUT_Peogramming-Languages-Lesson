#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Please key in 3 interger \n whih a space:");
	int a, b, c, max,min;
	scanf("%d %d %d", &a, &b, &c);
	max = a > b ? a : b;
	max = max > c ? max : c;
	min = a < b ? a : b;
	min = min < c ? min : c;
	printf("\nmaxium:	%d\n",max);
	printf("Minium:	%d", min);
}