#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;

	printf("Enter a number to check: ");
	scanf("%d", &n);

	for (d = 2; d * d <= n; d++)
		if (n % d == 0)
			break;

	return 0;
}