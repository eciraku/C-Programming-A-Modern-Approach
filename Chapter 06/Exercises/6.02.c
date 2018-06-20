#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	i = 9384;
	do {
	 	printf("%d ", i);
	 	i /= 10;
	 } while (i > 0);

	// Output: 9384 938 93 9

	return 0;
}