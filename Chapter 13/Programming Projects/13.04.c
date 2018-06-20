#include <stdio.h>

int main(int argc, char *argv[])
{
	/*
	char **p;

	for (p = &argv[argc - 1]; p > argv; --p)
		printf("%s ", *p);
	*/

	for (int i = argc - 1; i > 0; i--)
		printf("%s ", argv[i]);

	return 0;
}