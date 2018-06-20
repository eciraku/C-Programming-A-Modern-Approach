#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define UP 		0
#define RIGHT 	1
#define DOWN	2
#define LEFT 	3

int main(int argc, char const *argv[])
{
	char random_walk[10][10];
	int x = 0, y = 0, move;
	int count = 0;
	char ch;

	srand((unsigned) time(NULL));

	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			random_walk[i][j] = '.';

	ch = 'A';
	random_walk[x][y] = ch;
	ch++;

	while (ch <= 'Z')
	{
		move = rand() % 4;

		if ((move == UP) && (x > 0) && (random_walk[x-1][y] == '.'))
		{
			x = x - 1;
			y = y;
			random_walk[x][y] = ch;
		}

		else if ((move == RIGHT) && (y < 9) && (random_walk[x][y+1] == '.'))
		{
			x = x;
			y = y + 1;
			random_walk[x][y] = ch;
		}

		else if ((move == DOWN) && (x < 9) && (random_walk[x+1][y] == '.'))
		{
			x = x + 1;
			y = y;
			random_walk[x][y] = ch;
		}

		else if ((move == LEFT) && (y > 0) && (random_walk[x][y-1] == '.'))
		{
			x = x;
			y = y - 1;
			random_walk[x][y] = ch;
		}

		else
			{
				if (count <= 1000)
					{
						count++;
						continue;
					}

				else
					break;
			}

		ch++;
		count = 0;
	}

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			printf("%c ", random_walk[i][j]);
		}

		printf("\n");
	}

	return 0;
}