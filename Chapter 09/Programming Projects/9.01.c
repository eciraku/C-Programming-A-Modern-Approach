#include <stdio.h>

int selection_sort(int size, int array[size])
{
	int max_index = 0, max_number = array[0];
	int temp;

	for (int i = 1; i < size; ++i)
	{
		if (max_number < array[i])
		{
			max_number = array[i];
			max_index = i;
		}
	}

	temp = array[size - 1];
	array[size - 1] = max_number;
	array[max_index] = temp;

	if (size <= 1)
		return 0;
	else
		selection_sort(size - 1, array);
}

int main(int argc, char const *argv[])
{
	int size;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int num_arr[size];

	printf("Enter %d numbers: ", size);
	for (int i = 0; i < size; ++i)
		scanf("%d", &num_arr[i]);

	selection_sort(size, num_arr);

	printf("In sorted order: ");
	for (int i = 0; i < size; ++i)
		printf("%d ", num_arr[i]);

	return 0;
}