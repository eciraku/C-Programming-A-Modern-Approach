#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 10; i++) {
		if (i % 2 == 0)
			continue;
		sum += i;
	}

	printf("%d\n", sum);	// Output: 25

	return 0;
}