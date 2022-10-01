#include <stdio.h>
#include <stdlib.h>

int Print(x1, x2)
{
	for (int i = 0; i < x1; i++)
		printf("*");
	for (int i = 0; i < x2; i++)
		printf(" ");
	if (x2 == 0)
		printf("\n");
}

int main()
{
	//Line1
	Print(9, 9);
	Print(3, 9);
	Print(1, 9);
	Print(1, 0);

	//Line2
	Print(1, 7);
	Print(1, 8);
	Print(1, 3);
	Print(1, 7);
	Print(3, 7);
	Print(1, 1);
	Print(1, 0);

	//Line3
	Print(1, 7);
	Print(1, 7);
	Print(1, 5);
	Print(1, 5);
	Print(5, 5);
	Print(1, 3);
	Print(1, 0);

	//Line4
	Print(1, 7);
	Print(1, 7);
	Print(1, 5);
	Print(1, 7);
	Print(1, 6);
	Print(1, 5);
	Print(1, 0);

	//Line5
	Print(1, 7);
	Print(1, 7);
	Print(1, 5);
	Print(1, 7);
	Print(1, 5);
	Print(1, 7);
	Print(1, 0);

	//Line6
	Print(1, 7);
	Print(1, 7);
	Print(1, 5);
	Print(1, 7);
	Print(1, 6);
	Print(1, 5);
	Print(1, 0);

	//Line7
	Print(1, 7);
	Print(1, 7);
	Print(1, 5);
	Print(1, 7);
	Print(1, 7);
	Print(1, 3);
	Print(1, 0);

	//Line8
	Print(1, 7);
	Print(1, 8);
	Print(1, 3);
	Print(1, 8);
	Print(1, 8);
	Print(1, 1);
	Print(1, 0);

	//Line9
	Print(9, 9);
	Print(3, 9);
	Print(1, 9);
	Print(1, 0);

	system("pause");
	return 0;
}