#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int main(int argc, char const *argv[])
{
	char ch, message[LENGTH];
	char *message_ptr, *message_start, *message_end;

	message_ptr = message;

	printf("Enter a message: ");
	ch = getchar();
	while (ch != '\n' && message_ptr < message + LENGTH)
	{
		ch = tolower(ch);
		if (ch >= 'a' && ch <= 'z')
			*message_ptr++ = ch;

		ch = getchar();
	}

	for (message_start = message, message_end = --message_ptr; message_start < message_end; message_start++, message_end--)
		if (*message_start != *message_end)
			break;

	if (message_start >= message_end)
		printf("Palindrome!\n");
	else
		printf("Not a palindrome!\n");

	return 0;
}