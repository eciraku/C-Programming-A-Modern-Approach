#include <stdio.h>
#include <string.h>

#define LEN 100
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(int argc, char const *argv[])
{
	char s[LEN];
	int i;

	// (a) 
	strcpy(s, "abcd");
	i = 0;
	putchar(TOUPPER(s[++i]));	// Output: D

	printf("\n");

	//(b)
	strcpy(s, "0123");
	i = 0;
	putchar(TOUPPER(s[++i]));	// Output: 2

	return 0;
}