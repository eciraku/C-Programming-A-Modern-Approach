#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN   20
#define MAX_WORDS 100

int read_line(char str[], int n);
int compare_words(const void *p, const void *q);

int main(int argc, char const *argv[])
{
	char word[WORD_LEN + 1];
	char *word_arr[MAX_WORDS];
	int count = 0;

	printf("Enter word: ");
	while (read_line(word, WORD_LEN + 1) != 0)
	{
		word_arr[count] = malloc(strlen(word) + 1);
		if (word_arr[count] == NULL) 
		{
			printf("-- No space left --\n");
			break;
		}
		strcpy(word_arr[count], word);
		
		count++;
		printf("Enter word: ");
	}

	qsort(word_arr, count, sizeof(char *), compare_words);

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

int compare_words(const void *p, const void *q)
{
	return strcmp((*(char **) p), (*(char **) q));
}