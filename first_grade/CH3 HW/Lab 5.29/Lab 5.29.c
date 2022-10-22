#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y,lcm;
	printf("Enter two numbers:");
	scanf_s("%d %d", &x, &y);

	lcm = 1;
	do {
		lcm++;
	} while (!(lcm%x == 0 && lcm%y == 0));
	printf("%d\n", lcm);

	system("pause");
	return 0;
}