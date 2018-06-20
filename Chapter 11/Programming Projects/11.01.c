#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(int argc, char const *argv[])
{
	int dollars;
	int twenties, tens, fives, ones;

	printf("Enter dollar amount: ");
	scanf("%d", &dollars);

	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("\n$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf(" $5 bills: %d\n", fives);
	printf(" $1 bills: %d\n", ones);

	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20;			// $20 bills
	dollars = dollars - *twenties * 20;	
	*tens = dollars / 10;				// $10 bills
	dollars = dollars - *tens * 10;	
	*fives = dollars / 5;				// $5 bills
	dollars = dollars - *fives * 5;
	*ones = dollars;					// $1 bills
}