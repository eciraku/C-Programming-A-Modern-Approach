#include <stdio.h>

int max_arr(int a[], int n)
{
	int max;

	max = a[0];

	for (int i = 1; i < n; ++i)
	{
		if (max < a[i])
			max = a[i];
	}

	return max;
}

float avg_arr(int a[], int n)
{
	float average;
	int sum = 0;

	for (int i = 0; i < n; ++i)
		sum += a[i];

	return (float)sum / n;
}

int pos_arr(int a[], int n)
{
	int count = 0;

	for (int i = 0; i < n; ++i)
		if (a[i] > 0)
			count++;

	return count;
}

int main(int argc, char const *argv[])
{
	int size;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int array[size];

	printf("Enter elements of the array: ");
	for (int i = 0; i < size; ++i)
		scanf("%d", &array[i]);

	printf("The largest element is: %d\n", max_arr(array, size));
	printf("The average of the elements is: %.2f\n", avg_arr(array, size));
	printf("The number of positive values is: %d\n", pos_arr(array, size));

	return 0;
}