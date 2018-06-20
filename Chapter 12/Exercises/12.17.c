#include <stdio.h>

int sum_two_dimensional_array(const int *a, int n);

int main(int argc, char const *argv[])
{
	int row, col;

	printf("Enter number of rows: ");
	scanf("%d", &row);
	printf("Enter number of columns: ");
	scanf("%d", &col);

	int array[row][col];

	printf("Enter elements of array:\n");
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; j++)
			scanf("%d", &array[i][j]);

	printf("\n");
	printf("The sum of all the elements is: %d\n", sum_two_dimensional_array(array[0], row * col));

	
	return 0;
}

int sum_two_dimensional_array(const int *a, int n)
{
	int sum = 0;
	const int *a_ptr;

	for (a_ptr = a; a_ptr < a + n; a_ptr++)
		sum += *a_ptr;

	return sum;
}