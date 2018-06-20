#include <stdio.h>

int comp_polynom(int x)
{
	return (3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6);
}

int main(int argc, char const *argv[])
{
	int x;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	printf("For x=%d the value of the polynomial is: %d\n", x, comp_polynom(x));

	return 0;
}