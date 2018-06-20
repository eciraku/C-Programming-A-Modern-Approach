#include <stdio.h>

void store_zeros(int a[], int n);

int main(int argc, char const *argv[])
{
	int size;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int array[size];

	printf("Enter elements of array: ");
	for (int i = 0; i < size; ++i)
		scanf("%d", &array[i]);

	store_zeros(array, size);

	printf("New array: ");
	for (int i = 0; i < size; ++i)
		printf("%d ", array[i]);

	return 0;
}

void store_zeros(int a[], int n)
{
	int *p;

	for (p = a; p < a + n; p++)
		*p = 0;
}