#include <stdio.h>

#define LENGTH	100

int main(int argc, char const *argv[])
{
	char ch, message[LENGTH], *message_ptr;

	message_ptr = message;

	printf("Enter a message: ");
	ch = getchar();
	while (ch != '\n' && message_ptr < message + LENGTH)
	{
		*message_ptr++ = ch;
		ch = getchar();
	}

	printf("Reversal is: ");
	while (--message_ptr >= message)
		printf("%c", *message_ptr);

	printf("\n");

	return 0;
}