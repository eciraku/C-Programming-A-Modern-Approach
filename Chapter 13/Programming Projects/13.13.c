#include <stdio.h>

#define LEN 80

int read_line(char str[], int n);
void encrypt(char *message, int shift);

int main(int argc, char const *argv[])
{
	char message[LEN];
	int shift;

	printf("Enter a message to be encrypted: ");
	read_line(message, LEN);

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	encrypt(message, shift);

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

void encrypt(char *message, int shift)
{
	printf("Encrypted message: ");
	for (message; *message; ++message)
	{
		if (*message >= 'A' && *message <= 'Z')
			putchar(((*message - 'A') + shift) % 26 + 'A');
		else if(*message >= 'a' && *message <= 'z')
			putchar(((*message - 'a') + shift) % 26 + 'a');
		else
			putchar(*message);
	}
}