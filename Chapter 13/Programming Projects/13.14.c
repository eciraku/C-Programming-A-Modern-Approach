#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

int word_count[26] = {0};

int read_word(char str[], int n);
bool are_anagrams(const char *word1, const char *word2);

int main(int argc, char const *argv[])
{
	char word1[LEN], word2[LEN];

	printf("Enter first word: ");
	read_word(word1, LEN);
	printf("Enter second word: ");
	read_word(word2, LEN);

	if (are_anagrams(word1, word2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	return 0;
}

int read_word(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n' && ch != ' ')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

bool are_anagrams(const char *word1, const char *word2)
{
	const char *word1_copy, *word2_copy;
	int count;
	char ch;

	word1_copy = word1;
	word2_copy = word2;

	while (*word1_copy)
	{
		if (isalpha(*word1_copy))
		{
			ch = tolower(*word1_copy);
			word_count[ch - 'a']++;
		}

		word1_copy++;
	}

	while (*word2_copy)
	{
		if (isalpha(*word2_copy))
		{
			ch = tolower(*word2_copy);
			word_count[ch - 'a']--;
		}

		word2_copy++;
	}

	for (count = 0; count < 26; ++count)
	{
		if (word_count[count] != 0)
			break;
	}

	if (count == 26)
		return true;
	else
		return false;
}