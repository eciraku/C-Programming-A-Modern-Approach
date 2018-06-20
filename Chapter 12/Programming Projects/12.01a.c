#include <stdio.h>

#define LENGTH	100

int main(int argc, char const *argv[])
{
	char ch, message[LENGTH];
	int i = 0;

	printf("Enter a message: ");
	ch = getchar();
	while (ch != '\n' && i < LENGTH)
	{
		message[i++] = ch;
		ch = getchar();
	}

	printf("Reversal is: ");
	while (--i >= 0)
		printf("%c", message[i]);

	printf("\n");

	return 0;
}