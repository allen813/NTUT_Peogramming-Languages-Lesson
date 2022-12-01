#include <stdio.h>
#include <stdlib.h>

#define STUDENT 3
#define EXAMS 4

void minimum(int grades[][EXAMS], int pupils, int tests);
void maximum(int grades[][EXAMS], int pupils, int tests);
void average(int grades[][EXAMS], int pupils, int tests);
void printArray(int grades[][EXAMS], int pupils, int tests);
void printMenu();

int main() {
	//initial std grades
	int studentGrades[STUDENT][EXAMS] = { {77,68,86,73},
										  {96,87,89,78},
										  {70,90,86,81} };

	void(*processGrades[4])(int[STUDENT][EXAMS], int, int)
		= { printArray,minimum,maximum,average };

	int choice = 0;

	while (choice != 4) {
		do {
			printMenu();
			scanf_s("%d", &choice);
		} while (choice < 0 || choice>4);

		if (choice != 4)
			(*processGrades[choice])(studentGrades, STUDENT, EXAMS);
		else
			printf("\tProgram Ended. \n");
	}

	system("pause");
	return 0;
}

void minimum(int grades[][EXAMS], int pupils, int tests) {
	int lowGrade = 100;
	for (int i = 0; i < pupils; i++)
		for (int j = 0; j < tests; j++)
			if (grades[i][j] < lowGrade)
				lowGrade = grades[i][j];
	printf("\n\tThe lowest grade is %d\n", lowGrade);
}

void maximum(int grades[][EXAMS], int pupils, int tests) {
	int highGrade = 0;
	for (int i = 0; i < pupils; i++)
		for (int j = 0; j < tests; j++)
			if (grades[i][j] > highGrade)
				highGrade = grades[i][j];
	printf("\n\tThe highest grade is %d\n", highGrade);
}

void average(int grades[][EXAMS], int pupils, int tests) {
	int total;
	for (int i = 0; i < pupils; i++) {
		total = 0;
		for (int j = 0; j < tests; j++)
			total += grades[i][j];
		printf("\n\tThe average grades for students %d is %.1f"
			, i + 1, (double)total / tests);
	}
	printf("\n");
}

void printArray(int grades[][EXAMS], int pupils, int tests) {
	printf("\n\t\t [0]\t[1]    [2]    [3]");
	for (int i = 0; i < pupils; i++) {
		printf("\ntstudentGrades[%d]", i);
		for (int j = 0; j < tests; j++)
			printf("%-7d", grades[i][j]);
	}
	printf("\n");
}

void printMenu() {
	printf("\n\tEnter a choice:\n");
	printf("\t0 Print the array of grades\n");
	printf("\t1 Find the minimum grade\n");
	printf("\t2 Find the maximum grade\n");
	printf("\t0 Print the average on all tests for each student\n");
	printf("\t4 End program\n");
	printf("Choice:");

}