#include <stdio.h>

int gcd(int m, int n)
{
	int temp;

	while(n > 0)
	{
		temp = m % n;
		m = n;
		n = temp;
	}

	return m;
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