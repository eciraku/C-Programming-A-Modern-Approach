#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x, polynom;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	polynom = ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("For x=%d the value of the polynomial is: %d\n", x, polynom);

	return 0;
}