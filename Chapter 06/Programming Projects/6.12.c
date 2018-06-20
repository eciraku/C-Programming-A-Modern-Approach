#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 1;
	float e = 1.00f, product = 1.00f, factorial = 1.00f, epsilon;

	printf("Enter the number epsilon: ");
	scanf("%f", &epsilon);

	while (factorial > epsilon)
	{
		product *= i;
		factorial = 1.00f / product;
		e += factorial;
		i++;
	}

	printf("Approximate value of e is: %f\n", e);	// The first term smaller than epsilon is also included.

	return 0;
}