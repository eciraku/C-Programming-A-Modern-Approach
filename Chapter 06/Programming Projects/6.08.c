#include <stdio.h>

int main(int argc, char const *argv[])
{
	int day_month, day_start;
	int i;

	printf("Enter number of days in month: ");
	scanf("%d", &day_month);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &day_start);

	for (i = 1; i <= day_start - 1; i++)
		printf("   ");

	for (i = 1; i <= day_month; i++)
	{
		printf("%2d ", i);

		if ((i + day_start - 1) % 7 == 0)
			printf("\n");
	}

	return 0;
}