#include <stdio.h>

int main(int argc, char const *argv[])
{
	int matrix[5][5] = {0};
	int row[5] = {0};
	int col[5] = {0};

	for (int i = 0; i < 5; ++i)
	{
		printf("Enter row %d: ", i + 1);
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; j++)
			row[i] += matrix[i][j];
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; j++)
			col[i] += matrix[j][i];
	}

	printf("\nRow totals: ");
	for (int i = 0; i < 5; ++i)
		printf("%d ", row[i]);

	printf("\nColumn totals: ");
	for (int i = 0; i < 5; ++i)
		printf("%d ", col[i]);
	
	printf("\n");


	return 0;
}