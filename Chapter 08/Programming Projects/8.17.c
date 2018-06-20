#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x, y, size;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");

	printf("Enter size of magic square: ");
	scanf("%d", &size);

	int magic_square[size][size];

	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j)
			magic_square[i][j] = 0;


	x = 0;
	y = (size - 1) / 2;
	magic_square[x][y] = 1;

	for (int i = 2; i <= size * size; ++i)
	{
		if (magic_square[(size + x - 1) % size][(size + y + 1) % size] == 0)
		{
			x = (size + x - 1) % size;
			y = (size + y + 1) % size;
			magic_square[x][y] = i;
		}
		else
		{
			x = (size + x + 1) % size;
			magic_square[x][y] = i;
		}
	}

	printf("\n");
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			printf("%5d", magic_square[i][j]);	// Change the placeholder according to the needs, with size = 13 it works just fine
		}

		printf("\n");
	}

	return 0;
}