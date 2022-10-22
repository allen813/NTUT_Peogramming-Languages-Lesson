#include <stdio.h>
#include <stdlib.h>

long int recursive_factorial(int);

int main(void)
{
	printf("求排列組合C(m,n)\n");
	int m, n;
	long int ans, a, b, c;
	printf("m=\n");
	scanf("%d", &m);
	printf("n=\n");
	scanf("%d", &n);

	a = recursive_factorial(m);
	b = recursive_factorial(n);
	c = recursive_factorial(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%ld\n", m, n, ans);
	system("pause");
	return 0;
}

long int recursive_factorial(int p) {
	if (p > 1) {
		long int result = p * recursive_factorial(p - 1);
		return result;
	}
	else {
		return 1;
	}
}
