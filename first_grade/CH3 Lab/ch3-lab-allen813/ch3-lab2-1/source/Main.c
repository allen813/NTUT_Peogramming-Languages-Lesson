#include <stdio.h>
#include <stdlib.h>

long int factorial(int);

int main(void)
{
	printf("求排列組合C(m,n)\n");
	int m, n;
	long int ans, a, b, c;
	printf("m=\n");
	scanf("%d", &m);
	printf("n=\n");
	scanf("%d", &n);

	a = factorial(m);
	b = factorial(n);
	c = factorial(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%ld\n", m, n, ans);
	system("pause");
	return 0;
}

long int factorial(int p) {
	int count;
	long int result = 1;
	for (count = 1;count <= p;count++)
		result *= count;
	return result;
}
