#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, fib_numbers[40];
	fib_numbers[0] = 0;
	fib_numbers[1] = 1;

	for (int i = 2; i < 40; i++)
		fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];

	for (int i = 0; i < 40; i++)
		printf("%d\n", fib_numbers[i]);

	return 0;
}