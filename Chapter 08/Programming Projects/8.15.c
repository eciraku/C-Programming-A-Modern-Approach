#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	char message[80];
	int length = 0, shift;

	printf("Enter a message to be encrypted: ");

	ch = getchar();
	while (ch != '\n' && length < 80)
	{	
		message[length] = ch;
		length++;
		ch = getchar();
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	printf("Encrypted message: ");
	for (int i = 0; i < length; ++i)
	{
		if (message[i] >= 'A' && message[i] <= 'Z')
			putchar(((message[i] - 'A') + shift) % 26 + 'A');
		else if(message[i] >= 'a' && message[i] <= 'z')
			putchar(((message[i] - 'a') + shift) % 26 + 'a');
		else
			putchar(message[i]);
	}

	return 0;
}