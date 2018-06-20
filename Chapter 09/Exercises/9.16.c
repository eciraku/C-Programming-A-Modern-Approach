#include <stdio.h>

int fact(int n)
{
	return n <= 1 ? 1 : n * fact(n - 1);
}

int main(int argc, char const *argv[])
{
	int number;

	printf("Enter number: ");
	scanf("%d", &number);

	printf("The facotrial of %d is: %d\n", number, fact(number));

	return 0;
}