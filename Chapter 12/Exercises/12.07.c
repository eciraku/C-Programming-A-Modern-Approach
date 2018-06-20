#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(int argc, char const *argv[])
{
	int size, key;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int array[size];

	printf("Enter elements of array: ");
	for (int i = 0; i < size; ++i)
		scanf("%d", &array[i]);

	printf("Enter key to search: ");
	scanf("%d", &key);

	if (search(array, size, key))
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