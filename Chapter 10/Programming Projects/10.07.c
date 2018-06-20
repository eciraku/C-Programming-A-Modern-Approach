#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define HEIGHT 4
#define WIDTH 4

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
							 {0, 1, 1, 0, 0, 0, 0},
							 {1, 1, 0, 1, 1, 0, 1},
							 {1, 1, 1, 1, 0, 0, 1},
							 {0, 1, 1, 0, 0, 1, 1},
							 {1, 0, 1, 1, 0, 1, 1},
							 {1, 0, 1, 1, 1, 1, 1},
							 {1, 1, 1, 0, 0, 0, 0},
							 {1, 1, 1, 1, 1, 1, 1},
							 {1, 1, 1, 1, 0, 1, 1}};

char digits[HEIGHT][MAX_DIGITS * WIDTH];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(int argc, char const *argv[])
{
	char ch = ' ';
	int number;
	int count = 0;

	clear_digits_array();

	printf("Enter a number: ");
	while(count < MAX_DIGITS && ch != '\n')
	{
		ch = getchar();
		if (ch < '0' || ch > '9')
			continue;

		number = ch - '0';
		process_digit(number, count);
		count++;
	}

	print_digits_array();

	return 0;
}


void clear_digits_array(void)
{
	for (int i = 0; i < HEIGHT; ++i)
		for (int j = 0; j < MAX_DIGITS * WIDTH; ++j)
			digits[i][j] =  ' ';
}

void process_digit(int digit, int position)
{
	int i;

	for (i = 0; i < 7; i++)
	{
		digits[0][position * WIDTH + 1] = segments[digit][0] ? '_' : ' ';

		digits[1][position * WIDTH + 0] = segments[digit][5] ? '|' : ' ';
		digits[1][position * WIDTH + 1] = segments[digit][6] ? '_' : ' ';
		digits[1][position * WIDTH + 2] = segments[digit][1] ? '|' : ' ';

		digits[2][position * WIDTH + 0] = segments[digit][4] ? '|' : ' ';
		digits[2][position * WIDTH + 1] = segments[digit][3] ? '_' : ' ';
		digits[2][position * WIDTH + 2] = segments[digit][2] ? '|' : ' ';
	}
}

void print_digits_array(void)
{
	for (int i = 0; i < HEIGHT; ++i)
	{
		for (int j = 0; j < MAX_DIGITS * WIDTH; ++j)
		{
			printf("%c", digits[i][j]);
		}

		printf("\n");
	}
}