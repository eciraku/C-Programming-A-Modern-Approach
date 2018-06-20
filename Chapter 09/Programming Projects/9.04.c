#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26])
{
	char ch;

	ch = getchar();
	while (ch != ' ' && ch != '\n')
	{
		if (isalpha(ch))
		{
			ch = tolower(ch);
			counts[ch - 'a']++;
		}

		ch = getchar();
	}
}

bool equal_array(int counts1[26], int counts2[26])
{
	for (int i = 0; i < 26; ++i)
		if (counts1[i] != counts2[i])
			return false;

	return true;
}

int main(int argc, char const *argv[])
{
	int word1[26] = {0}, word2[26] = {0};

	printf("Enter first word: ");
	read_word(word1);
	printf("Enter second word: ");
	read_word(word2);
	
	if(equal_array(word1, word2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	return 0;
}