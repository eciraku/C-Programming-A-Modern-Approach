#include <stdio.h>
#include <ctype.h>

#define LEN 30

int compute_scrabble_value(const char *word);

int main(int argc, char const *argv[])
{
	char word[LEN];
	int sum = 0;

	printf("Enter a word: ");
	scanf("%s", word);

	printf("Scrabble value: %d\n", compute_scrabble_value(word));

	return 0;
}

int compute_scrabble_value(const char *word)
{
	int sum = 0;
	char ch;

	while (*word != '\0')
	{
		ch = toupper(*word);

		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || 
			ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
			sum += 1;
		else if (ch == 'D' || ch == 'G')
			sum += 2;
		else if (ch == 'B' || ch == 'C' || ch == 'M' ||ch  == 'P')
			sum += 3;
		else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
			sum += 4;
		else if (ch == 'K')
			sum += 5;
		else if (ch == 'J' || ch == 'X')
			sum += 8;
		else if (ch == 'Q' || ch == 'Z')
			sum += 10;

		word++;
	}

	return sum;
}