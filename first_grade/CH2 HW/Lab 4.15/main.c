#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

double Caculate(float a) {
	double Fin;
	Fin = 5000 * pow((1 + a), 15);
	return Fin;
}

int main() {
	double Fin;
	printf("Use Compound interest\n");
	printf("$5000 for 15 years:\n");
	for (float i = 0.100; i < 0.125; i += 0.005) {
		printf("rate %.1lf%%	$%.2lf\n",100*i, Caculate(i));
	}
}
