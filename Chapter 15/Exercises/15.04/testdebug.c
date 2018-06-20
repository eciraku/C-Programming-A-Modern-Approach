#include <stdio.h>

#include "debug.h"
#define DEBUG

int main(int argc, char const *argv[])
{
	int i = 1, j = 2, k = 3;

#ifdef DEBUG
	printf("Output if DEBUG is defined:\n");
#else
	printf("Output if DEBUG is not defined:\n");
#endif

	PRINT_DEBUG(i);
	PRINT_DEBUG(j);
	PRINT_DEBUG(k);
	PRINT_DEBUG(i + j);
	PRINT_DEBUG(2 * i + j - k);

	return 0;
}

/*
	(a)
		Output if DEBUG is defined:
		Value of  i: 1
		Value of  j: 2
		Value of  k: 3
		Value of  i + j: 3
		Value of  2 * i + j - k: 1
*/

/*
	(b)
		Output if DEBUG is not defined:
*/

/*
	(c)
		The output is different because in part (a) we have
		#define DEBUG directive, which means two things:
		1. The PRINT_DEBUG(n) macro is defined as printf("Value of " #n ": %d\n", n)
		2. printf("Output if DEBUG is defined:\n"); will be executed

		In part (b) DEBUG is not defined, which also means two things:
		1. The PRINT_DEBUG(n) macro is just empty
		2. printf("Output if DEBUG is not defined:\n"); will be executed
*/

/*
	(d)
		Yes, the #define DEBUG should come before the #include directive bacuase
		the preprocessor processes the preprocessing directives in sequential order.
		If we write #include directive before the #define than the #include will have
		no knowledge of #define DEBUG, so it will define the macro as empty.
*/