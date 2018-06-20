#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(int argc, char const *argv[])
{
	int day_of_year, year, month, day;

	printf("Enter day of year: ");
	scanf("%d", &day_of_year);
	printf("Enter year: ");
	scanf("%d", &year);

	split_date(day_of_year, year, &month, &day);

	printf("You are in day %d of month %d\n", day, month);

	return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
	int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, sum = 0;
	*day = 0;
	*month = 1;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		days_per_month[1]++;

	for (i = 0; i < 12; i++)
	{
		if (sum + days_per_month[i] > day_of_year)
		{
			*day = day_of_year - sum;
			break;
		}

		sum += days_per_month[i];
		*month += 1;
	}
}