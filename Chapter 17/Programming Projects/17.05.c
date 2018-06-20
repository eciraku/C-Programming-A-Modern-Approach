#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN   20
#define MAX_WORDS 100

int read_line(char str[], int n);

int main(int argc, char const *argv[])
{
	char word[WORD_LEN + 1];
	char *word_arr[MAX_WORDS];
	int count = 0;
	int i, j;

	printf("Enter word: ");
	while (read_line(word, WORD_LEN + 1) != 0)
	{
		for (i = 0; i < count; i++)
			if (strcmp(word, word_arr[i]) < 0)
				break;
		for (j = count; j > i; j--)
			word_arr[j] = word_arr[j - 1];

		word_arr[i] = malloc(strlen(word) + 1);
		if (word_arr[i] == NULL) 
		{
			printf("-- No space left --\n");
			break;
		}
		strcpy(word_arr[i], word);
		
		count++;
		printf("Enter word: ");
	}

	printf("\nIn sorted order:");
	for (int i = 0; i < count; i++)
		printf(" %s", word_arr[i]);

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