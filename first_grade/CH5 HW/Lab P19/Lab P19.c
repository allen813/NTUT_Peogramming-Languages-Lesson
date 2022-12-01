#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int b[] = { 10,20,30,40 };
	int *bPtr = b;

	printf("Array b printed with:\nArray subscript notation\n");
	for (int i = 0; i < 4; i++)
		printf("b[%d] = %d\n", i, b[i]);

	printf("\nPointer/offest notation where\n"
		"the pointer is the array name\n");
	for (int offset = 0; offset < 4; offset++)
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	printf("\nPointer subscript notation\n");
	for (int i = 0; i < 4; i++)
		printf("bPtr[%d] = %d\n", i, bPtr[i]);
	printf("\nPointer/offset notation\n");
	for (int offset = 0; offset < 4; offset++)
		printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));

	system("pause");
	return 0;
}