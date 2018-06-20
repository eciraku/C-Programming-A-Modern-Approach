#include <stdio.h>

int main(int argc, char const *argv[])
{
	float loan, interest, payment;
	int num_payment;
	int i;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	printf("Enter number of payments: ");
	scanf("%d", &num_payment);

	printf("\n");
	for (i = 1; i <= num_payment; i++)
	{
		loan = loan - payment + ((interest / 100) / 12) * loan;
		printf("Balance remaining after %d payment(s): $%.2f\n", i, loan);
	}

	return 0;
}
