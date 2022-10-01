#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	int r;
	printf("Please key in 2 number\n whih a space:");
	scanf("%d %d", &num1, &num2);
	r = num1 % num2;
	if (r == 0)
	{
		printf("\n%d \033[7mis\033[m the mutiples of %d\n", num1, num2);
	}
	else
	{
		printf("\n%d \033[7mis not\033[m the mutiples of %d\n", num1, num2);
	}
	system("pause");
	return 0;
}