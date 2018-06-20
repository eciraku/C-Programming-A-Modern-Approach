#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

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

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	const int *array_ptr = a;

	if (*(array_ptr + 1) > *array_ptr)
	{
		*largest = *(array_ptr + 1);
		*second_largest = *array_ptr;
	}
	else
	{
		*largest = *array_ptr;
		*second_largest = *(array_ptr + 1);
	}

	for (array_ptr = a + 2; array_ptr < a + n; array_ptr++)
	{
		if (*array_ptr > *largest)
		{
			*second_largest = *largest;
			*largest = *array_ptr;
		}
		else if (*array_ptr > *second_largest)
			*second_largest = *array_ptr;
	}
}