#include <stdio.h>
#include <string.h>

int f(char *s, char *t);

int main(int argc, char const *argv[])
{
	// (a)
	printf("(a) f(abcd, babc): %d\n", f("abcd", "babc"));
	// (b)
	printf("(b) f(abcd, bcd): %d\n", f("abcd", "bcd"));
	// (c)
	// The result for any strings s and t will be the position of the first
	// element in s that is not in t.

	return 0;
}

int f(char *s, char *t)
{
	char *p1, *p2;

	for (p1 = s; *p1; p1++) {
		for (p2 = t; *p2; p2++)
			if (*p1 == *p2) break;
		if (*p2 == '\0') break;
	}
	return p1 - s;
}