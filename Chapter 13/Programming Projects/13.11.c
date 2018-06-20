#include <stdio.h>

#define LEN 100

int read_line(char str[], int n);
double compute_average_word_length(const char *sentence);

int main(int argc, char const *argv[])
{
	char sentence[LEN];

	printf("Enter a sentence: ");
	read_line(sentence, LEN);
	
	printf("Average word length: %.1f\n", compute_average_word_length(sentence));

	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

double compute_average_word_length(const char *sentence)
{
	int word = 0, count = 0;

	while (*sentence == ' ')	// Ignore leading white-space
		sentence++;

	printf("Hello\n");
	while (*sentence != '\0')
	{
		if (*sentence == ' ')
		{
			if (*(sentence - 1) != ' ')	// Ignore white spaces between words
				word++;

			sentence++;
			continue;
		}

		sentence++;
		count++;
	}

	word++; // Here we incerement the for the last word, since we do not increment it inside the while loop

	return (double) count / word;
}