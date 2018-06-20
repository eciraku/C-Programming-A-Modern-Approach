/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	getchar(); // Catch the new-line character from the scanf
	for (i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i * i);

		if (i % 24 == 0)
		{
			printf("Pres Enter to continue...");
			while (getchar() != '\n')
						;
		}
	}

	return 0;
}