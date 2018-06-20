#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
		sum += atoi(argv[i]);

	printf("Sum: %d\n", sum);

	return 0;
}