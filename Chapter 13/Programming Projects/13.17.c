#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

int read_line(char str[], int n);
bool is_palindrome(const char *message);

int main(int argc, char const *argv[])
{
	char message[LEN];

	printf("Enter a message: ");
	read_line(message, LEN);

	if (is_palindrome(message))
		printf("Palindrome!\n");
	else
		printf("Not a palindrome!\n");

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

bool is_palindrome(const char *message)
{
	char message_only_char[LEN];
	int count = 0;

	for (message; *message; message++)
		if (tolower(*message) >= 'a' && tolower(*message) <= 'z')
		{
			message_only_char[count] = tolower(*message);
			count++;
		}

	char *message_start = message_only_char;
	char *message_end = message_only_char;

	while(*message_end)
		message_end++;

	for (--message_end; message_start < message_end; message_start++, message_end--)
		if (*message_start != *message_end)
			return false;

	return true;
}