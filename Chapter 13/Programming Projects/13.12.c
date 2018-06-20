#include <stdio.h>

#define WORDS 30
#define LEN 20

int main(int argc, char const *argv[])
{
	char ch, sentence[WORDS][LEN + 1];
	int word_count = 0, length_count = 0;
	int i;

	printf("Enter a sentence: ");

	// Read and store the sentence in an array of characters except the last character which is the '.', '?' or the '!'
	ch = getchar();
	while (ch != '.' && ch != '?' && ch != '!')
	{
		while (ch != ' ' && ch != '.' && ch != '?' && ch != '!')
		{
			sentence[word_count][length_count] = ch;
			length_count++;
			ch = getchar();
		}

		if (ch == '.' || ch == '?' || ch == '!')
		{
			sentence[word_count][length_count] = '\0';
			word_count++;
			break;
		}

		sentence[word_count][length_count] = '\0';

		length_count = 0;
		word_count++;

		ch = getchar();
	}

	printf("In reverse:");
	for (i = word_count - 1; i >= 0; i--)
		printf(" %s", sentence[i]);

	putchar(ch);
	printf("\n");
	
	return 0;
}