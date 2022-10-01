#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float mil, gas,gal,park,tolls,total;
	printf("Enter your total miles per day\t\t: ");
	scanf("%f", &mil);
	printf("Enter your cost per gallon of gas\t: ");
	scanf("%f", &gas);
	printf("Enter your average miles per gallon\t: ");
	scanf("%f", &gal);
	printf("Enter your parking fee per day\t\t: ");
	scanf("%f", &park);
	printf("Enter your tolls per day\t\t: ");
	scanf("%f", &tolls);
	total=(mil/gal)*gas+park+tolls;
	printf("\nToday you cost %f \n\n", total);
	system("pause");
	return 0;
}