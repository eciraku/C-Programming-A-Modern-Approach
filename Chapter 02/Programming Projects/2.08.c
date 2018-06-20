#include <stdio.h>

int main(int argc, char const *argv[])
{
	float loan, interest, payment;
	float first_pay, second_pay, third_pay;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	first_pay = loan - payment + ((interest / 100) / 12) * loan;
	second_pay = first_pay - payment + ((interest / 100) / 12) * first_pay;
	third_pay = second_pay - payment + ((interest / 100) / 12) * second_pay;

	printf("\nBalance remaining after first payment: $%.2f\n", first_pay);
	printf("Balance remaining after second payment: $%.2f\n", second_pay);
	printf("Balance remaining after third payment: $%.2f\n", third_pay);
}
