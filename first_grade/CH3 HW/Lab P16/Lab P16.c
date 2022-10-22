#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	for (int x=1; x <= 10; x++)
		printf("%.2f ", sqrt(x));
	printf("\n");
	system("pause");
	return 0;
}