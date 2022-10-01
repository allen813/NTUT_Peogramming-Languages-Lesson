#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float height;
	float weight;
	float BMI;

	printf("Enter your height(m)\n and weight(kg) with a space: ");
	scanf("%f%f",&height,&weight);

	BMI=weight/(height*height);

	printf("\nYour BMI is:%f\n",BMI);

	if (BMI<18.5)
		printf("\033[7mYou're underweight\033[m\n\n");
	if (BMI >= 18.5 && BMI < 24.9)
		printf("\033[7mYou're normal\033[m\n\n");
	if (BMI >= 25 && BMI < 29.9)
		printf("\033[7mYou're overweight\033[m\n\n");
	if (BMI >= 30)
		printf("\033[7mYou're obese\033[m\n\n");

	printf("\
BMI VALUES \n\
Uunderweight:\tless than 18.5\n\
Normal:\t\tbetween 18.5 and 24.9\n\
Overweight:\tbetween 25 and 29.9\n\
Obese:\t\t30 or greater\n"\
			);
	system("pause");
	return 0;
}