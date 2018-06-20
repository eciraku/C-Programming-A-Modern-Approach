#include <stdio.h>

int check(int x, int y, int n)
{
	if ((x >= 0 && x <= n - 1) && (y >= 0 && y <= n - 1))
		return 1;
	return 0;
}

int main(int argc, char const *argv[])
{
	int x, y, n;

	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	printf("Enter the maximum of the range: ");
	scanf("%d", &n);

	if (check(x, y, n))
		printf("The numbers are within range!\n");
	else
		printf("At least one number is out of range!\n");

	return 0;
}