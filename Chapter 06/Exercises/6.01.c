#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	i = 1;
	while (i <= 128) {
		printf("%d ", i);
		i *= 2;
	}

	// Output: 1 2 4 8 16 32 64 128

	return 0;
}