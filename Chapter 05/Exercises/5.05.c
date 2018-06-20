#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");

	// The if statement is legal, but is meaningless since it will always be true.
	// The reason is becuase the comparison operators are left associative, so we could write the above as:
	// (n >= 1) <= 10; whatever the value of n the result n >= 1 will always be 0 or 1. 0 or 1 is always <= to 10
	// so, the result is always true and the printf statement will be executed.

	return 0;
}