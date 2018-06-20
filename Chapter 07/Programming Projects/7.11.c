#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch, initial;

	printf("Enter a first and last name: ");
	
	// Check for initial space; if there are spaces do nothing, just skip them
	while((ch = getchar()) == ' ')
		;

	initial = ch; // The first non-space character read will be the initial of the name

	// Read the remaining characters of the name and do nothing
	while((ch = getchar()) != ' ')
		;

	// Skip space(s) after the name
	while((ch = getchar()) == ' ')
		;

	putchar(ch); // The first non-space character read will be the initial of the last name
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ')
			continue; // Or break;

		putchar(ch);
	}

	printf(", %c.\n", initial);

	return 0;
}