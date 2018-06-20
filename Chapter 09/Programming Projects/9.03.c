#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define UP 		0
#define RIGHT 	1
#define DOWN	2
#define LEFT 	3

void generate_random_walk(char walk[10][10])
{
	int x = 0, y = 0, move;
	int count = 0;
	char ch;

	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			walk[i][j] = '.';

	ch = 'A';
	walk[x][y] = ch;
	ch++;

	while (ch <= 'Z')
	{
		move = rand() % 4;

		if ((move == UP) && (x > 0) && (walk[x-1][y] == '.'))
		{
			x = x - 1;
			y = y;
			walk[x][y] = ch;
		}

		else if ((move == RIGHT) && (y < 9) && (walk[x][y+1] == '.'))
		{
			x = x;
			y = y + 1;
			walk[x][y] = ch;
		}

		else if ((move == DOWN) && (x < 9) && (walk[x+1][y] == '.'))
		{
			x = x + 1;
			y = y;
			walk[x][y] = ch;
		}

		else if ((move == LEFT) && (y > 0) && (walk[x][y-1] == '.'))
		{
			x = x;
			y = y - 1;
			walk[x][y] = ch;
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
}

void print_array(char walk[10][10])
{
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			printf("%c ", walk[i][j]);
		}

		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	char random_walk[10][10];

	srand((unsigned) time(NULL));

	generate_random_walk(random_walk);
	print_array(random_walk);

	return 0;
}