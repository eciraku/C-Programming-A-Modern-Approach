#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number, first_digit, second_digit;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	first_digit = number / 10;
	second_digit = number % 10;

	printf("The reversal is: %d%d\n", second_digit, first_digit);

	return 0;
}