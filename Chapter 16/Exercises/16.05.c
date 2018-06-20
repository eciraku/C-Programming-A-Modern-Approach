#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(int argc, char const *argv[])
{
	struct date d;
	struct date d1, d2;

	printf("Enter date (mm/dd/yyyy): ");
	scanf("%d /%d /%d", &d.month, &d.day, &d.year);

	printf("Day of year is: %d\n\n", day_of_year(d));

	printf("Enter date 1 (mm/dd/yyyy): ");
	scanf("%d /%d /%d", &d1.month, &d1.day, &d1.year);
	printf("Enter date 2 (mm/dd/yyyy): ");
	scanf("%d /%d /%d", &d2.month, &d2.day, &d2.year);

	if (compare_dates(d1, d2) < 0)
		printf("Date 1 is earlier than Date 2\n");
	else if (compare_dates(d1, d2) > 0)
		printf("Date 1 is later than Date 2\n");
	else
		printf("You entered the same date\n");

	return 0;
}

int day_of_year(struct date d)
{
	int days_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day_result = d.day;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
		++days_per_month[1];

	for (int i = 0; i < d.month - 1; ++i)
		day_result += days_per_month[i];

	return day_result;
}

int compare_dates(struct date d1, struct date d2)
{
	if (d1.year < d2.year)
		return -1;
	else if (d1.year > d2.year)
		return 1;
	else
	{
		if (d1.month < d2.month)
			return -1;
		else if (d1.month > d2.month)
			return 1;
		else
		{
			if (d1.day < d2.day)
				return -1;
			else if (d1.day > d2.day)
				return 1;
			else
				return 0;
		}
	}
}