/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	short i;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%10hd%10hd\n", i, i * i);

	// It will print correctly until i = 181 and i * i = 32761, then it will print non-sense values. This means short 
	// stores values in 16-bits, and the largest value it can hold is 32766.

	return 0;
}