#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(int argc, char const *argv[])
{
	int i, size, max_first, max_second;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int array[size];

	printf("Enter elements of array: ");
	for (i = 0; i < size; i++)
		scanf("%d", &array[i]);

	find_two_largest(array, size, &max_first, &max_second);

	printf("Largest element: %d\n", max_first);
	printf("Second largest: %d\n", max_second);

	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	int i;

	if (a[1] > a[0])
	{
		*largest = a[1];
		*second_largest = a[0];
	}
	else
	{
		*largest = a[0];
		*second_largest = a[1];
	}

	for (i = 2; i < n; i++)
	{
		if (a[i] > *largest)
		{
			*second_largest = *largest;
			*largest = a[i];
		}
		else if (a[i] > *second_largest)
			*second_largest = a[i];
	}
}