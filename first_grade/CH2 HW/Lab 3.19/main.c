#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int days;
	float loan,rate,interest;

	while (1)
	{
		printf("%s", "Enter loan principal(-1 to end): ");
		scanf("%f", &loan);
		if (loan == -1)	break;
		printf("%s", "Enter interest rate: ");
		scanf("%f", &rate);
		printf("%s", "Enter term of the loan in days: ");
		scanf("%d", &days);
		interest = loan * rate*days / 365;
		printf("The interest charge is $%.2f\n\n", interest);
	}
}