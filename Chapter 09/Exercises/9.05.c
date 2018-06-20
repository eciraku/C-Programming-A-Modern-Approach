#include <stdio.h>

int num_digits(int n)
{
	int count = 0;

	while(n != 0)
	{
		n /= 10;
		count++;
	}

	return count;
}

int main(int argc, char const *argv[])
{
	int number;

	printf("Enter number: ");
	scanf("%d", &number);

	printf("The number has %d digit(s).\n", num_digits(number));

	return 0;
}