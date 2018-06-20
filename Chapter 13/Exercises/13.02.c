#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *p = "abc";

	// (a) putchar(p);	// Illegal since the expected argument is of type char while supplied argument is of type char *
	// (b) putchar(*p); // Legal! Since p points to the first element of the "array of char" the output will be: a
	// (c) puts(p);		// Legal! Output will be: abc
	// (d) puts(*p);	// Illegal! Expected argument is of type char *, while the supplied argument is of type char	

	return 0;
}