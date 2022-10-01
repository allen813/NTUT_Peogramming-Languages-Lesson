#include <stdio.h>
#include <stdlib.h>
int x;

int main()
{
	for (int i=6;i>0;i--)
	{
		for (int j=1;j<=5-x;j++)
			printf(" ");
		for (int k=0;k<2*x-1;k++)
			printf("*");
		++x;
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}