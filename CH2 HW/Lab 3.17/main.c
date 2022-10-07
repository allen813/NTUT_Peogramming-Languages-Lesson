#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int acc;
	float beg, Tchr, Tcre, Clim, Bal;

	while (1) {
		printf("Enter account number (-1 to end):");
		scanf("%d", &acc);
		if (acc == -1)	break;
		printf("Enter beginning balance:");
		scanf("%f", &beg);
		printf("Enter total charges:");
		scanf("%f", &Tchr);
		printf("Enter total credits:");
		scanf("%f", &Tcre);
		printf("Enter credit limit:");
		scanf("%f", &Clim);
		Bal = beg + Tchr - Tcre;
		if (Bal > Clim) {
			printf("Account:      %d\n", acc);
			printf("Credit limit: %.2f\n", Clim);
			printf("Balance:      %.2f\n", Bal);
			printf("Credit Limit Exceeded.");
		}
		printf("\n\n");
	}
}