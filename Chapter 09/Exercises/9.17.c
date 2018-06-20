#include <stdio.h>

int fact(int n)
{
	int factorial = 1;

	for (int i = 1; i <= n; ++i)
		factorial *= i;

	return factorial;
}

int main(int argc, char const *argv[])
{
	int number;

	printf("Enter number: ");
	scanf("%d", &number);

	printf("The facotrial of %d is: %d\n", number, fact(number));

	return 0;
}