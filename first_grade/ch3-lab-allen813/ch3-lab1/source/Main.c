#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Odd(int);
int Even(int);
int TotalSum(int);

int main(void)
{
	int n, sum;
	char choice;
	printf("1+2+...+n=?請輸入n=\n");
	scanf("%d", &n);
	printf("請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:\n");
	scanf(" %c", &choice);

	switch (choice)
	{
	case 'O':
		sum = Odd(n);
		break;
	case 'E':
		sum = Even(n);
		break;
	case 'I':
		sum = TotalSum(n);
		break;
	default:
		printf("選擇錯誤\n");
		return -1;
	}
	printf("總合為%d\n", sum);
	system("pause");
	return 0;
}

int Odd(int n) {
	int i, total = 0;
	for (i = 1;i <= n;i++)
		if (i % 2 == 1)
			total += i;
	return total;
}

int Even(int n) {
	int i, total = 0;
	for (i = 1;i <= n;i++)
		if (i % 2 == 0)
			total += i;
	return total;
}

int TotalSum(int n) {
	return Odd(n) + Even(n);
}
