#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	i = 10;
	while (i >= 1)
	{
		printf("%d ", i);
		i /= 2;
	}

	// Output: 10 5 2 1
	
	return 0;
}