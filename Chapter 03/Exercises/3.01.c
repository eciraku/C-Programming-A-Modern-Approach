#include <stdio.h>

int main(int argc, char const *argv[])
{
	// a) 
	printf("%6d,%4d\n", 86, 1040);	 // Output: ssss86,1040 	(s means space)

	// b)
	printf("%12.5e\n", 30.253);		 // Output: 3.02530e+001

	// c)
	printf("%.4f\n", 83.162);		 // Output: 83.1620

	// d)
	printf("%-6.2g\n", .0000009979); // Output: 1e-006

	return 0;
}