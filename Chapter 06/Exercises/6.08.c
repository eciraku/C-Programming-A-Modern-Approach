#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	for (i = 10; i >= 1; i /= 2)
		printf("%d ", i);

	// Output: 10 5 2 1
	
	return 0;
}