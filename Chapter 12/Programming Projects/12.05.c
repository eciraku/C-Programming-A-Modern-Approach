#include <stdio.h>

#define LENGTH 100

int main(int argc, char const *argv[])
{
	char ch, sentence[LENGTH];
	char *sentence_ptr;
	char *word_end, *word_process, *word_print;

	sentence_ptr = sentence;

	printf("Enter a sentence: ");

	// Read and store the sentence in an array of characters except the last character which is the '.', '?' or the '!'
	ch = getchar();
	while (ch != '.' && ch != '?' && ch != '!')
	{
		*sentence_ptr++ = ch;
		ch = getchar();
	}

	printf("Reversal of sentence: ");
	word_end = sentence_ptr;
	for (word_process = sentence_ptr - 1; word_process >= sentence; --word_process)
	{
		if (*word_process == ' ' || word_process == sentence)
		{
			if (word_process == sentence)
				putchar(*word_process);

			for (word_print = word_process + 1; word_print < word_end; ++word_print)
				putchar(*word_print);

			if (word_process == sentence)
				break;

			putchar(' ');
			word_end = word_process;
		}
	}

	putchar(ch);

	return 0;
}