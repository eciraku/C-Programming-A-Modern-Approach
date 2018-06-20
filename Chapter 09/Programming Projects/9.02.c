#include <stdio.h>

float compute_tax(float income)
{
	float tax;

	if(income < 750.00f)
		tax = 0.01f * income;
	else if(income < 2250.00f)
		tax = 7.50f + 0.02f * (income - 750.00f);
	else if(income < 3750.00f)
		tax = 37.50f + 0.03f * (income - 2250.00f);
	else if(income < 5250.00f)
		tax = 82.50f + 0.04f * (income - 3750.00f);
	else if(income < 7000.00f)
		tax = 142.00f + 0.05f * (income - 5250.00f);
	else
		tax = 230.00f + 0.06f * (income - 7000.00f);

	return tax;
}

int main(int argc, char const *argv[])
{
	float income;

	printf("Enter amount of income: ");
	scanf("%f", &income);

	printf("The amount of tax is: $%.2f\n", compute_tax(income));

	return 0;
}