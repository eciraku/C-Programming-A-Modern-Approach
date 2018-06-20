#include <stdio.h>
#include <stdbool.h>

#define DAYS_PER_WEEK 7
#define HOURS_PER_DAY 24

void print_row(const int a[], int n);

int main(int argc, char const *argv[])
{
	int row;
	int temperatures[DAYS_PER_WEEK][HOURS_PER_DAY];

	printf("Enter elements of array:\n");
	for (int i = 0; i < DAYS_PER_WEEK; ++i)
		for (int j = 0; j < HOURS_PER_DAY; j++)
			scanf("%d", &temperatures[i][j]);

	printf("\nEnter the row you want to show: ");
	scanf("%d", &row);
	print_row(temperatures[row - 1], HOURS_PER_DAY);

	return 0;
}

void print_row(const int a[], int n)
{
	const int *p;

	printf("Printing row: ");

	for (p = a; p < a + n; p++)
		printf("%d ", *p);
}