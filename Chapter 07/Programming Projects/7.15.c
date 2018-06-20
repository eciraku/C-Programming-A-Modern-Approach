#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, number, factorial = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &number);

	i = 1;
	while(i <= number)
	{
		factorial *= i;
		i++;
	}

	printf("Factorial of %d: %d\n", number, factorial);

	return 0;
}