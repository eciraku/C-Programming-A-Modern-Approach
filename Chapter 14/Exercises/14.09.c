#include <stdio.h>

// (a)
#define CHECK(x, y, n) (((x) >= 0 && (x) <= (n-1)) && ((y) >= 0 && (y) <= (n-1)))

// (b)
#define MEDIAN(x, y, z)	(((x) - (y)) * ((z) - (x)) >= 0 ? (x) : ((y) - (x)) * ((z) - (y)) >= 0 ? y : z)

// (c)
#define POLYNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x) + 2*(x)*(x)*(x)*(x) - 5*(x)*(x)*(x) - (x)*(x) + 7*(x) - 6)

int main(int argc, char const *argv[])
{
	int x = 1, y = 2, n = 5;

	printf("Polynomial(%d) = %d\n", x, POLYNOMIAL(x));
	printf("Median(%d, %d, %d) = %d\n", x, y, n, MEDIAN(x, y, n));
	printf("Check(%d, %d, %d) = %d\n", x, y, n, CHECK(x, y, n));

	return 0;
}