#include <stdio.h>

int gcd(int m, int n)
{
	if (n == 0)
		return m;
	else
		gcd(n, m % n);
}

int main(int argc, char const *argv[])
{
	int m, n;

	printf("Enter first number: ");
	scanf("%d", &m);
	printf("Enter second number: ");
	scanf("%d", &n);

	printf("Greatest common divisor is: %d\n", gcd(m, n));
	
	return 0;
}