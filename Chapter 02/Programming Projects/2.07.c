#include <stdio.h>

int main(int argc, char const *argv[])
{
	int amount_dollar;
	int one_dollar, five_dollar, ten_dollar, twenty_dollar;

	printf("Enter dollar amount: ");
	scanf("%d", &amount_dollar);

	twenty_dollar = amount_dollar / 20;					// $20 bills
	amount_dollar = amount_dollar - twenty_dollar * 20;	
	ten_dollar = amount_dollar / 10;					// $10 bills
	amount_dollar = amount_dollar - ten_dollar * 10;	
	five_dollar = amount_dollar / 5;					// $5 bills
	amount_dollar = amount_dollar - five_dollar * 5;
	one_dollar = amount_dollar;							// $1 bills

	printf("\n$20 bills: %d\n", twenty_dollar);
	printf("$10 bills: %d\n", ten_dollar);
	printf(" $5 bills: %d\n", five_dollar);
	printf(" $1 bills: %d\n", one_dollar);

	return 0;
}