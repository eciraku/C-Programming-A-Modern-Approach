#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j;

	// a)
	i = 1;
	j = 2;
	printf("Before: i=%d, j=%d\n", i, j); // Output -> Before: i=1, j=2
	i += j;
	printf("After: i=%d, j=%d\n\n", i, j); // Output -> After: i=3, j=2

	// b)
	i = 1;
	j = 2;
	printf("Before: i=%d, j=%d\n", i, j); // Output -> Before: i=1, j=2
	i--;
	printf("After: i=%d, j=%d\n\n", i, j); // Output -> After: i=0, j=2

	// c)
	i = 1;
	j = 2;
	printf("Before: i=%d, j=%d\n", i, j); // Output -> Before: i=1, j=2
	i * j / i;
	printf("After: i=%d, j=%d\n\n", i, j); // Output -> After: i=1, j=2

	// d)
	i = 1;
	j = 2;
	printf("Before: i=%d, j=%d\n", i, j); // Output -> Before: i=1, j=2
	i % ++j;
	printf("After: i=%d, j=%d\n\n", i, j); // Output -> After: i=1, j=3

	return 0;
}