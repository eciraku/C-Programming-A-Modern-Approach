#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	printf("Enter the value of i: ");
	scanf("%d", &i);

	printf("%d\n", i >= 0 ? i : -i);
	// It always prints the positive value of a number

	return 0;
}