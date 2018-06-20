#include <stdio.h>
#include <stdbool.h>

#define DAYS_PER_WEEK 7
#define HOURS_PER_DAY 24

bool search(const int a[], int n, int key);

int main(int argc, char const *argv[])
{
	int key;
	int temperatures[DAYS_PER_WEEK][HOURS_PER_DAY];

	printf("Enter elements of array: ");
	for (int i = 0; i < DAYS_PER_WEEK; ++i)
		for (int j = 0; j < HOURS_PER_DAY; j++)
			scanf("%d", &temperatures[i][j]);

	printf("Enter key to search: ");
	scanf("%d", &key);

	if (search(temperatures[0], DAYS_PER_WEEK * HOURS_PER_DAY, key))
		printf("Key: %d; Found!\n", key);
	else
		printf("Key: %d; Not found!\n", key);

	return 0;
}

bool search(const int a[], int n, int key)
{
	const int *p;

	for (p = a; p < a + n; p++)
		if (*p == key)
			return true;

	return false;
}