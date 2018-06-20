#include <stdio.h>

int main(int argc, char const *argv[])
{
	float amount, total;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	total = amount + (5.0f / 100.0f) * amount;

	printf("With tax added: $%.2f\n", total);

	return 0;
}