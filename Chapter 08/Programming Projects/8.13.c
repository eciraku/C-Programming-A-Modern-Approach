#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch, initial;
	char last_name[20];
	int index = 0;

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

	// The first non-space character read will be the initial of the last name
	last_name[index] = ch;

	while((ch = getchar()) != '\n')
	{
		index++;
		last_name[index] = ch;
	}

	printf("You entered the name: ");
	for (int j = 0; j <= index; ++j)
		putchar(last_name[j]);

	printf(", %c.\n", initial);

	return 0;
}