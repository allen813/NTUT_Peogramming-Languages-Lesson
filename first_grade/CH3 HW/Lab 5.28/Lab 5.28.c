#include <stdio.h>
#include <stdlib.h>

int main() {
	char c1,c2;
	int num;

	printf("Enter a alphabet(A~Z or a~z) :");
	scanf_s("%c",&c1);

	num = (int)c1;

	if (num >= 65 && num <= 90)
		num += 32;
	else if (num >= 97 && num <= 122)
		num -= 32;
	else {
		printf("Errow!");
		system("pause");
		return 0;
	}
	
	c2 = (char)num;
	printf("%c ==> %c\n", c1, c2);
	return 0;
}