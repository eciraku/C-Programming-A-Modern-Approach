#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j;

	// a)
	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d\n", i, j);	// Output: 6 16

	// b)
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d\n", i, j);  	// Output: 6 -7

	// c)
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d\n", i, j); 	// Output: 6 23

	// d)
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d\n", i, j); 	// Output: 6 15

	return 0;
}