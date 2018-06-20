/* Calculates a broker's commission */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float commission, rival_commission, value, price_per_share;
	int shares;

	// a)
	printf("Enter number of shares: ");
	scanf("%d", &shares);
	printf("Ener price per share: ");
	scanf("%f", &price_per_share);

	value = shares * price_per_share;
	// end of a)

	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else 
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	// b)
	if (shares < 2000)
		rival_commission = 33.00f + 0.03f * shares;
	else
		rival_commission = 33.00f + 0.02f * shares;
	// end of b)

	printf("\nCommission: $%.2f\n", commission);
	printf("Rival commission: $%.2f\n", rival_commission);

	return 0;
}