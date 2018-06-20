#include <stdio.h>

#define LEN 100

int read_line(char str[], int n);
void reverse(char *message);

int main(int argc, char const *argv[])
{
	char message[LEN];

	printf("Enter a message: ");
	read_line(message, LEN);

	reverse(message);
	printf("Reversal is: %s\n", message);


	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

void reverse(char *message)
{
	char *message_start = message;
	char *message_end = message;
	char temp;

	while (*message_end)
		message_end++;

	for (--message_end; message_start < message_end; message_start++, message_end--)
	{
		temp = *message_start;
		*message_start = *message_end;
		*message_end = temp;
	}
}