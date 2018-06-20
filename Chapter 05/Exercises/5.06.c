#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n == 1-10)
		printf("n is between 1 and 10\n");

	// The if statement is legal!
	// The above expression in the if statement is the same as n == -9
	// So, the print statement will be executed only for n = -9
	// When n equals 5, it checks that it is not equal to -9 and ends the program

	return 0;
}