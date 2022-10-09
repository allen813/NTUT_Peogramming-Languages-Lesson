#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	float i,Sal;
	while (1) {
		printf("%s", "Enter sales in dollars (-1 to end): ");
		scanf("%f", &i);
		if (i == -1)		break;
		Sal = i * 0.09 + 200;
		printf("Salary is: $%.2f\n\n", Sal);
	}
}