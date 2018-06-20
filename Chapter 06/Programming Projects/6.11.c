#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 1, n;
	float e = 1.00f, product = 1.00f, factorial = 1.00f;

	printf("Enter the number n: ");
	scanf("%d", &n);

	while (i <= n)
	{
		product *= i;
		factorial = 1.00f / product;
		e += factorial;
		i++;
	}

	printf("Approximate value of e is: %f\n", e);

	return 0;
}