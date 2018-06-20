#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(int argc, char const *argv[])
{
	int numerator, denominator;
	int reduced_numerator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d /%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

	printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
	
	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int copy_num, copy_denum;
	int temp;

	copy_num = numerator;
	copy_denum = denominator;

	while (copy_denum != 0)
	{
		temp = copy_num % copy_denum;
		copy_num = copy_denum;
		copy_denum = temp;
	}

	*reduced_numerator = numerator / copy_num;
	*reduced_denominator = denominator / copy_num;
}