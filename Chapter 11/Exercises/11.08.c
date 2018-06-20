#include <stdio.h>

int *find_largest(int a[], int n);

int main(int argc, char const *argv[])
{
	int *largest;
	int size;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int array[size];

	printf("Enter elements of array: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &array[i]);

	largest = find_largest(array, size);

	printf("Largest element: %d\n", *largest);

	return 0;
}

int *find_largest(int a[], int n)
{
	int *largest = &a[0];

	for (int i = 1; i < n; ++i)
		if (a[i] > *largest)
			*largest = a[i];

	return largest;
}