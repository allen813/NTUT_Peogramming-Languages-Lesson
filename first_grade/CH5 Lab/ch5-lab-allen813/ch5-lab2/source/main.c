#include <stdio.h>
#include <stdlib.h>

#define ISSUES 5
#define RATINGS 10

void recordResponse(int issue, int rating);
void hightestRatings();
void lowestRatings();
float averageRating(int issue);
void displayResults();

int responses[ISSUES][RATINGS];
const char *topic[ISSUES] = { "Global Warming","The Economy",
							  "War","Health Care","Education" };

int main() {
	int response;

	do {
		printf("Please rate the following topics on a scale from 1 - 10"
			"\n 1 = least important,10 = most important\n");

		for (int i = 0; i < ISSUES; i++) {
			do {
				printf("%s? ", topic[i]);
				scanf_s("%d", &response);
			} while (response < 1 || response>10);
			recordResponse(i, response);
		}

		printf("Enter 1 to stop. Enter 0 to rate the issues again.");
		scanf_s("%d", &response);
	} while (response != 1);

	displayResults();

	system("pause");
	return 0;
}

void recordResponse(int issue, int rating) {
	responses[issue][rating - 1]++;
}

void hightestRatings() {
	int highRating = 0;
	int highTopic = 0;

	for (int i = 0; i < ISSUES; i++) {
		int topicRating = 0;
		for (int j = 0; j < RATINGS; j++) 
			topicRating += responses[i][j] * (j + 1);

		if (highRating < topicRating) {
			highRating = topicRating;
			highTopic = i;
		}
	}

	printf("The highest rated topic was ");
	printf("%s", topic[highTopic]);
	printf("with a total rating rating of %d\n", highRating);
}

void lowestRatings() {
	int lowRating = 0;
	int lowTopic = 0;

	for (int i = 0; i < ISSUES; i++) {
		int topicRating = 0;
		for (int j = 0; j < RATINGS; j++)
			topicRating += responses[i][j] * (j + 1);

		if (i==0) 
			lowRating = topicRating;
		if (lowRating > topicRating) {
			lowRating = topicRating;
			lowRating = i;
		}
	}

	printf("The lowest rated topic was ");
	printf("%s", topic[lowTopic]);
	printf("with a total rating rating of %d\n", lowRating);
}

float averageRating(int issue) {
	float total = 0;
	int counter = 0;

	for (int i = 0; i < RATINGS; i++) {
		if (responses[issue][i] != 0) {
			total += responses[issue][i] * (i + 1);
			counter += responses[issue][i];
		}
	}
	return total / counter;
}

void displayResults() {
	printf("%20s", "Topic");
	
	for (int i = 1; i <= RATINGS; i++) {
		printf("%4d", i);
	}

	printf("%20s\n", "Average Rating");

	for (int i = 0; i < ISSUES; i++) {
		printf("%20s", topic[i]);
		for (int j = 0; j < RATINGS; j++)
			printf("%4d", responses[i][j]);
		printf("%20.2f\n", averageRating(i));
	}

	hightestRatings();
	lowestRatings();
}