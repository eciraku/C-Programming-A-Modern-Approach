#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n;

	printf("Enter the number n: ");
	scanf("%d", &n);

	printf("The even squares up to %d:\n", n);
	for (i = 2; i * i <= n; i += 2)
		printf("%d\n", i * i);

	return 0;
}