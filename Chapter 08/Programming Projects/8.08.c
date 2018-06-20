#include <stdio.h>

int main(int argc, char const *argv[])
{
	int grades[5][5] = {0};
	int sum_student[5] = {0};
	int sum_quiz[5] = {0};
	int max_quiz[5];
	int min_quiz[5];

	// Enter the grades for each student
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter Student %d grades: ", i + 1);
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &grades[i][j]);
		}
	}

	// Find the sum of each student's quizzes
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; j++)
			sum_student[i] += grades[i][j];
	}

	// Find the sum of each quizz
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; j++)
			sum_quiz[i] += grades[j][i];
	}

	printf("\n");
	for (int i = 0; i < 5; ++i)
		printf("Student %d: total score - %3d; average score - %3.1f\n", i + 1, sum_student[i], sum_student[i] / 5.0);



	for (int i = 0; i < 5; ++i)
	{
		max_quiz[i] = grades[0][i];
		min_quiz[i] = grades[0][i];

		for (int j = 0; j < 5; ++j)
		{
			// Find the largest grade
			if (max_quiz[i] < grades[j][i])
				max_quiz[i] = grades[j][i];

			// Find the smallest grade
			if (min_quiz[i] > grades[j][i])
				min_quiz[i] = grades[j][i];
		}
	}

	printf("\n\n");
	for (int i = 0; i < 5; ++i)
		printf("Quiz #%d: average score - %3.1f; high score - %3d; low score - %3d\n", i + 1, sum_quiz[i] / 5.0, max_quiz[i], min_quiz[i]);

	return 0;
}