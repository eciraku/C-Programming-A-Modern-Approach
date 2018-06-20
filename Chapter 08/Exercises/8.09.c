#include <stdio.h>

#define DAYS_IN_MONTH 30
#define HOURS_PER_DAY 24

int main(int argc, char const *argv[])
{
	float temperature_readings[DAYS_IN_MONTH][HOURS_PER_DAY];
	float average_month_temp = 0.00f, average_day_temp = 0.00f, sum = 0.00f, sum_day[DAYS_IN_MONTH] = {0.00f};
	int i, j;

	for (i = 0; i < DAYS_IN_MONTH; i++)
	{
		printf("Enter Day %d temperatures:\n", i + 1);
		for (j = 0; j < HOURS_PER_DAY; j++)
		{
			printf("Hour %d temperature: ", j + 1);
			scanf("%f", &temperature_readings[i][j]);
		}

		printf("\n");
	}

	for (i = 0; i < DAYS_IN_MONTH; i++)
	{
		for (j = 0; j < HOURS_PER_DAY; j++)
		{
			sum_day[i] += temperature_readings[i][j];
		}

		printf("Day %d average temperature: %.2f\n", i + 1, sum_day[i] / HOURS_PER_DAY);
	}

	for (i = 0; i < DAYS_IN_MONTH; i++)
		sum += sum_day[i] / HOURS_PER_DAY;

	printf("\nMonth average is: %.2f\n", sum / DAYS_IN_MONTH);

	return 0;
}