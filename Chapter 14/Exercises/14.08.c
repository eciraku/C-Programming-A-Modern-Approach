#include <stdio.h>

#define STRINGIZE(x) #x
#define GET_VALUE(x) STRINGIZE(x)
// We need the GET_VALUE(x) macro to get the actual value of x, not x as a character
// Then we use STRINGIZE(x) to convert the value to a string

#define LINE_FILE "Line " GET_VALUE(__LINE__) " of file " __FILE__

int main(int argc, char const *argv[])
{
	const char *str = LINE_FILE;

	printf("%s\n", str);

	return 0;
}