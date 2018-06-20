#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	int word = 0, count = 0;

	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n')
	{
		if (ch == ' ')
		{
			word++;
			continue;
		}

		count++;
	}

	word++; // Here we incerement the for the last word, since we do not increment it inside the while loop
	
	printf("Average word length: %g\n", (float) count / word);

	return 0;
}