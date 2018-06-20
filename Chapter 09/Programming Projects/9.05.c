#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n])
{
	int x, y;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			magic_square[i][j] = 0;


	x = 0;
	y = (n - 1) / 2;
	magic_square[x][y] = 1;

	for (int i = 2; i <= n * n; ++i)
	{
		if (magic_square[(n + x - 1) % n][(n + y + 1) % n] == 0)
		{
			x = (n + x - 1) % n;
			y = (n + y + 1) % n;
			magic_square[x][y] = i;
		}
		else
		{
			x = (n + x + 1) % n;
			magic_square[x][y] = i;
		}
	}
}

void print_magic_square(int n, char magic_square[n][n])
{
	printf("\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%5d", magic_square[i][j]);	// Change the placeholder according to the needs, with size = 11 it works just fine
		}

		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int size;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");

	printf("Enter size of magic square: ");
	scanf("%d", &size);

	char magic_square[size][size];

	create_magic_square(size, magic_square);
	print_magic_square(size, magic_square);

	return 0;
}