#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int values_array[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	int sum = 0;
	char ch;

	printf("Enter a word: ");
	while ((ch = getchar()) != '\n')
	{
		ch = toupper(ch);
		sum += values_array[ch - 'A'];
	}

	printf("Scrabble value: %d\n", sum);

	return 0;
}