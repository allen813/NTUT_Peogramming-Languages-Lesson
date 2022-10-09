#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int countManagers=0;
	int countHourlyWorkers=0;
	int countCommissionWorkers=0;
	int countPiceWorkers=0;

	int payCode;
	double salary, totalPay = 0;
	double  hourlySalary,workHour,grossWeeklySales, piecesNumer, wagePerPieces;

	do{
		salary = 0;

		printf("%s", "Select type of Employee from menu\n");
		printf("%s", "1. Manager\t\tfixed weekly salary\n");
		printf("%s", "2. Hourly Worker\tOver 40 hours are time-and-a-half\n");
		printf("%s", "3. Commission Worker\tBase $250 plus multiply 5.7% by gross weekly sales\n");
		printf("%s", "4. Pieceworker\t\tmultiply the numer of pices by wage\n");

		printf("%s","\nEnter your pay code(-1 to end):");
		scanf("%d", &payCode);
		if (payCode == -1)	break;

		switch (payCode){
		case 1:
			printf("%s", "\nManagers selected!\n");
			printf("%s", "Enter the yearly salary: $");
			scanf("%lf", &salary);
			salary /= 52; //52 weeks per year
			printf("\nManager's weekly pay is $%.2lf\n\n", salary);
			countManagers ++;
			totalPay += salary;
			break;

		case 2:
			printf("%s", "\nHourly workers selected!\n");
			printf("%s", "Enter the hourly salary: $");
			scanf("%lf", &hourlySalary);
			printf("%s", "The time you work this week(hour): ");
			scanf("%lf", &workHour);
			if (workHour > 40) {
				workHour -= 40;
				salary = 40 * hourlySalary + workHour * (hourlySalary*1.5);
			}
			else	salary = hourlySalary * workHour;
			printf("\nWorker's weekly pay is $%.2lf\n\n", salary);
			countHourlyWorkers++;
			totalPay += salary;
			break;

		case 3:
			printf("%s", "\nCommission workers selected!\n");
			printf("%s", "Enter the gross weekly sales: $");
			scanf("%lf", &grossWeeklySales);
			salary = 250 + 0.057*grossWeeklySales;
			printf("\nWorker's weekly pay is $%.2lf\n\n", salary);
			countCommissionWorkers++;
			totalPay += salary;
			break;

		case 4:
			printf("%s", "\nPiecewokers selected!\n");
			printf("%s", "Enter the numer of pieces: ");
			scanf("%lf", &piecesNumer);
			printf("%s", "Enter the wage per pieces: ");
			scanf("%lf", &wagePerPieces);
			salary = piecesNumer * wagePerPieces;
			printf("\nWorker's weekly pay is $%.2lf\n\n", salary);
			countPiceWorkers++;
			totalPay += salary;
			break;

		default:
			printf("%s", "\nPay code Errow ( X w X )//!! \n\n");
			break;

		}
	} while (payCode != -1);
	
	printf("\nThe number of managers paid:\t\t%d\n", countManagers);
	printf("The number of hourly worker paid:\t%d\n", countHourlyWorkers);
	printf("The number of commission workers paid:\t%d\n", countCommissionWorkers);
	printf("The number of pice workers paid:\t%d\n", countPiceWorkers);
	printf("Total payment:\t\t\t\t$%.2lf\n", totalPay);
}