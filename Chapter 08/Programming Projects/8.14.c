#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch, sentence[100];
	int length = 0;
	int i, j, k;

	printf("Enter a sentence: ");

	// Read and store the sentence in an array of characters except the last character which is the '.', '?' or the '!'
	ch = getchar();
	while (ch != '.' && ch != '?' && ch != '!')
	{
		sentence[length] = ch;
		length++;
		ch = getchar();
	}

	printf("Reversal of sentence: ");
	k = length;
	for (i = length - 1; i >= 0; --i)
	{
		if (sentence[i] == ' ' || i == 0)
		{
			if (i == 0)
				putchar(sentence[i]);

			for (j = i + 1; j < k; ++j)
				putchar(sentence[j]);

			if (i == 0)
				break;

			putchar(' ');
			k = i;
		}
	}

	putchar(ch);

	return 0;
}