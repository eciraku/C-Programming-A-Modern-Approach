#include <stdio.h>
#include <string.h>

#define LEN 20

int read_line(char str[], int n);

int main(int argc, char const *argv[])
{
	char word[LEN + 1];
	char smallest_word[LEN + 1], largest_word[LEN + 1];

	printf("Enter word: ");
	read_line(word, LEN);
	strcpy(smallest_word, word);
	strcpy(largest_word, word);

	while (strlen(word) != 4)
	{
		if (strcmp(largest_word, word) < 0)
			strcpy(largest_word, word);
		if (strcmp(smallest_word, word) > 0)
			strcpy(smallest_word, word);

		printf("Enter word: ");
		read_line(word, LEN);
	}

	printf("\nSmallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);

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