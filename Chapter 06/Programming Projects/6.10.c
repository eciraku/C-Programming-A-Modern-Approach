#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int month1, day1, year1;
	int month2, day2, year2;
	int month_min, day_min, year_min;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d", &month1, &day1, &year1);
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d", &month2, &day2, &year2);

	month_min = month1;
	day_min = day1;
	year_min = year1;

	while((month2 != 0) || (day2 != 0) || (year2 != 0))
	{
		if (year_min < year2)
		{
			month_min = month_min;
			day_min = day_min;
			year_min = year_min;
		}
		else if (year_min > year2)
		{
			month_min = month2;
			day_min = day2;
			year_min = year2;
		}
		else
		{
			if (month_min < month2)
			{
				month_min = month_min;
				day_min = day_min;
				year_min = year_min;
			}
			else if (month_min > month2)
			{
				month_min = month2;
				day_min = day2;
				year_min = year2;
			}
			else
			{
				if (day_min < day2)
				{
					month_min = month_min;
					day_min = day_min;
					year_min = year_min;
				}
				else if (day_min > day2)
				{
					month_min = month2;
					day_min = day2;
					year_min = year2;
				}
				else 
				{
					month_min = month2;
					day_min = day2;
					year_min = year2;
				}
			}
		}

		printf("Enter a date (mm/dd/yy): ");
		scanf("%d /%d /%d", &month2, &day2, &year2);
	}

	printf("%d/%d/%.2d is the earliest date\n", month_min, day_min, year_min);

	return 0;
}