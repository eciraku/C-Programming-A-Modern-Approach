#include <stdio.h>

int *find_middle(int a[], int n);

int main(int argc, char const *argv[])
{
	int size, *middle;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int array[size];

	printf("Enter elements of array: ");
	for (int i = 0; i < size; ++i)
		scanf("%d", &array[i]);

	middle = find_middle(array, size);

	printf("The middle element is: %d\n", *middle);

	return 0;
}

int *find_middle(int a[], int n)
{
	return a + (n / 2);
}