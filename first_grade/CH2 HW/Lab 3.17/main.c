#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int acc;
	float beg, Tchr, Tcre, Clim, Bal;

	while (1) {
		printf("%s", "Enter account number (-1 to end):");
		scanf("%d", &acc);
		if (acc == -1)	break;
		printf("%s", "Enter beginning balance:");
		scanf("%f", &beg);
		printf("%s", "Enter total charges:");
		scanf("%f", &Tchr);
		printf("%s", "Enter total credits:");
		scanf("%f", &Tcre);
		printf("%s", "Enter credit limit:");
		scanf("%f", &Clim);
		Bal = beg + Tchr - Tcre;
		if (Bal > Clim) {
			printf("Account:      %d\n", acc);
			printf("Credit limit: %.2f\n", Clim);
			printf("Balance:      %.2f\n", Bal);
			printf("%s", "Credit Limit Exceeded.");
		}
		printf("\n\n");
	}
}