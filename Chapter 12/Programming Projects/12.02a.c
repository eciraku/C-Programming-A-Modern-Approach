#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int main(int argc, char const *argv[])
{
	char ch, message[LENGTH];
	int i = 0, j, k;

	printf("Enter a message: ");
	ch = getchar();
	while (ch != '\n' && i < LENGTH)
	{
		ch = tolower(ch);
		if (ch >= 'a' && ch <= 'z')
			message[i++] = ch;

		ch = getchar();
	}

	for (k = 0, j = i - 1; k < j; k++, j--)
		if (message[k] != message[j])
			break;

	if (k >= j)
		printf("Palindrome!\n");
	else
		printf("Not a palindrome!\n");

	return 0;
}