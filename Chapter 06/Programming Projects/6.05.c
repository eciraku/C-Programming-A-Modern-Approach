#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number, digit_rev;

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("The reversal is: ");

	do
	{
		digit_rev = number % 10;
		printf("%d", digit_rev);
		number /= 10;
	} while (number > 0);

	return 0;
}