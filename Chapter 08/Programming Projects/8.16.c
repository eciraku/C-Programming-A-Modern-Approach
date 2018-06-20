#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int count;
	int word_count[26] = {0};
	char ch;

	printf("Enter first word: ");
	ch = getchar();
	while (ch != ' ' && ch != '\n')
	{
		if (isalpha(ch))
		{
			ch = tolower(ch);
			word_count[ch - 'a']++;
		}

		ch = getchar();
	}

	printf("Enter second word: ");
	ch = getchar();
	while (ch != ' ' && ch != '\n')
	{
		if (isalpha(ch))
		{
			ch = tolower(ch);
			word_count[ch - 'a']--;
		}

		ch = getchar();
	}

	for (count = 0; count < 26; ++count)
	{
		if (word_count[count] != 0)
			break;
	}

	if (count == 26)
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	return 0;
}