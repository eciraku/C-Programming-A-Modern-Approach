#include <stdio.h>

#define DOUBLE(x) 2*x

int main(int argc, char const *argv[])
{
	// (a) What is the value of DOUBLE(1+2)
	printf("Value of DOUBLE(1+2) = %d\n", DOUBLE(1+2));	// Result: 4

	// (b) What is the value of 4/DOUBLE(2)
	printf("Value of 4/DOUBLE(2) = %d\n", 4 / DOUBLE(2)); // Result: 4

	// (c) Fix the definition of DOUBLE
	// #define DOUBLE(x) (2*(x))

	return 0;
}