/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int digit_seen[10] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}

	printf("Digits:		");
	for (int i = 0; i < 10; i++)
		printf("%d   ", i);

	printf("\n");
	printf("Occurrences:	");
	for (int j = 0; j < 10; j++)
		printf("%d   ", digit_seen[j]);

	printf("\n");

	return 0;
}