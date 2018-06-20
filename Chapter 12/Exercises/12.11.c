#include <stdio.h>

int find_largest(int a[], int n);

int main(int argc, char const *argv[])
{
	int size;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int array[size];

	printf("Enter elements of array: ");
	for (int i = 0; i < size; ++i)
		scanf("%d", &array[i]);

	printf("The largest element in the array is: %d\n", find_largest(array, size));
	
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