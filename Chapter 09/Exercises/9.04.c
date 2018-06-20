#include <stdio.h>

int day_of_year(int month, int day, int year)
{
	int total_days = 0;
	int days_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
		days_per_month[1] = 29;

	for (int i = 0; i < month - 1; ++i)
		total_days += days_per_month[i];

	total_days += day;

	return total_days;
}

int main(int argc, char const *argv[])
{
	int day, month, year;

	printf("Enter month: ");
	scanf("%d", &month);
	printf("Enter day: ");
	scanf("%d", &day);
	printf("Enter year: ");
	scanf("%d", &year);

	printf("The day of the year is: %d\n", day_of_year(month, day, year));

	return 0;
}