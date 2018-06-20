/* Determines the length of a message */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int len = 0;

	printf("Enter a message: ");
	while (getchar() != '\n')
		len++;

	printf("You message was %d character(s) long.\n", len);
	
	return 0;
}