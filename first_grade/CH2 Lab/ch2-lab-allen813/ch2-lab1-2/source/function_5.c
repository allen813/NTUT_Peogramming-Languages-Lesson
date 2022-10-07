#include <stdio.h>
#include <stdlib.h>
int Han_Xin_5()
{
	// 在這裡撰寫韓信點兵的第5個函式
	printf("(5)\n");

	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp = 9;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i==j))
			{
				printf("%c", sign);
			}
			else if (((j == temp)))
			{
				printf("%c", sign);
				temp--;
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	return 0;
}
