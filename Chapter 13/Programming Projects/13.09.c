#include <stdio.h>
#include <ctype.h>

#define LEN 100

int read_line(char str[], int n);
int compute_vowel_count(const char *sentence);

int main(int argc, char const *argv[])
{
	char sentence[LEN];
	int count = 0;

	printf("Enter a sentence: ");
	read_line(sentence, LEN);

	printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

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

int compute_vowel_count(const char *sentence)
{
	int count = 0;
	char vowel;

	while (*sentence != '\0')
	{
		vowel = toupper(*sentence);
		if (vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
			count++;

		sentence++;
	}

	return count;
}