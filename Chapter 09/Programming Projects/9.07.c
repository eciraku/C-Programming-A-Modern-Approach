#include <stdio.h>

int power(int x, int n)
{
	if(n == 0)
        return 1;
    else if(n % 2 == 0)
        return power(x*x, n/2);
    else if(n % 2 != 0)
        return x * power(x, n-1);
}

int main(int argc, char const *argv[])
{
	int number, exponent;

	printf("Enter number: ");
	scanf("%d", &number);
	printf("Enter exponent: ");
	scanf("%d", &exponent);

	printf("%d to the power of %d is: %d\n", number, exponent, power(number, exponent));

	return 0;
}