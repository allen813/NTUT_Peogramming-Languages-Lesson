#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int hours;
	float rate,Sal;
	while (1)
	{
		printf("Enter # of hours worked(-1 to end): ");
		scanf("%d", &hours);
		if (hours == -1)	break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);
		Sal = hours > 40 ? (hours - 40)*rate*1.5 + 40 * rate : hours * rate;
		printf("Salary is $%.2f\n\n", Sal);
	}
}