#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char ch;
	int count = 0;

	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n')
	{
		if (toupper(ch) == 'A' || toupper(ch) == 'E' || toupper(ch) == 'I' || toupper(ch) == 'O' || toupper(ch) == 'U')
			count++;
	}

	printf("Your sentence contains %d vowels.\n", count);

	return 0;
}