#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int first, second, third, fourth, fifth;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);

	fifth = number % 8;
	number /= 8;
	fourth = number % 8;
	number /= 8;
	third = number % 8;
	number /= 8;
	second = number % 8;
	number /= 8;
	first = number % 8;

	printf("In octal your number is: %d%d%d%d%d\n", first, second, third, fourth,fifth);

	return 0;
}