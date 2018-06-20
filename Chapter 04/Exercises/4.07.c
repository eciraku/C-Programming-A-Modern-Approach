//	9 - ((total - 1) % 10)
//	10 - (total % 10)

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int total;

	for(total = 0; total <= 100; total++)
	{
		printf("%d\t%d\t%d\n", 9 - ((total - 1) % 10), 10 - (total % 10), total);
	}

	return 0;
}

// From the table produced by the above piece of code we can see where the result is not the same.
// For multiples of 10 the first expression produces 0, while the seconds produces 10.
// We can also see analytically that the largest number in the first expression is 9 while in the second it is 10,
// so they cannot be the same.