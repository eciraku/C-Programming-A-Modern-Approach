#include <stdio.h>

int main(int argc, char const *argv[])
{
	float number, max = 0.00f;

	printf("Enter a number: ");
	scanf("%f", &number);

	while (number > 0.00f)
	{
		if (number > max)
			max = number;

		printf("Enter a number: ");
		scanf("%f", &number);
	}

	printf("\nThe largest number entered was: %f\n", max);

	return 0;
}