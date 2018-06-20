#include <stdio.h>

int main(int argc, char const *argv[])
{
	// a)
	printf("%d\n", 8 % 5); 	 // Output: 3

	// b)
	printf("%d\n", -8 % 5);	 // Output: -3

	// c)
	printf("%d\n", 8 % -5);	 // Output: 3

	// d)
	printf("%d\n", -8 % -5); // Output: -3
	return 0;
}