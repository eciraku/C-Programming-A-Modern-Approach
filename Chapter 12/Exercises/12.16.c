#include <stdio.h>

#define DAYS_PER_WEEK 7
#define HOURS_PER_DAY 24

int find_largest(int a[], int n);

int main(int argc, char const *argv[])
{
	int temperatures[DAYS_PER_WEEK][HOURS_PER_DAY];

	printf("Enter elements of array:\n");
	for (int i = 0; i < DAYS_PER_WEEK; ++i)
		for (int j = 0; j < HOURS_PER_DAY; j++)
			scanf("%d", &temperatures[i][j]);

	printf("\n");
	for (int days = 0; days < DAYS_PER_WEEK; days++)
		printf("Day %d highest temperature: %d\n", days + 1, find_largest(temperatures[days], HOURS_PER_DAY));
	
	return 0;
}

int find_largest(int a[], int n)
{
	int *p = a, max;

	max = *p;
	for (p = a + 1; p < a + n; p++)
		if (*p > max)
			max = *p;
	return max;
}