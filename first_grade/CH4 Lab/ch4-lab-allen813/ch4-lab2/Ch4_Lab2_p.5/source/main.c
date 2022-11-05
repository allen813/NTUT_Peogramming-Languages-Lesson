#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char arry[5];
	printf("arry = %p \n&arry[0]=%p\n&arry = %p\n",
		arry, &arry[0], &arry);
	system("pause");
	return 0;
}