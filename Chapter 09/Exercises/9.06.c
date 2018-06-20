#include <stdio.h>

int digit(int n, int k)
{
	for (int i = 1; i < k; ++i)
		n /= 10;

	return (n % 10);
}

int main(int argc, char const *argv[])
{
	int number, position;

	printf("Enter number: ");
	scanf("%d", &number);
	printf("Enter position: ");
	scanf("%d", &position);

	printf("The digit you asked is: %d\n", digit(number, position));

	return 0;
}