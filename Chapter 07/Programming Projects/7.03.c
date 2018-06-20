/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	double n, sum = 0.00;

	printf("This program sums a series of integers.\n");
	printf("Enter doubles (0 to terminate): ");

	scanf("%lf", &n);
	while(n != 0) {
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %f\n", sum);	// No need to write %lf
	
	return 0;
}