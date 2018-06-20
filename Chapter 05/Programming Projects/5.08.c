#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, minute, total_time;

	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &hour, &minute);

	total_time = hour * 60 + minute;

	// Check if time is less than 8:00 a.m.
	if (total_time <= 8 * 60)
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");

	// Check if time is between 8:00 a.m. and 9:43 a.m.
	else if (total_time <= 9 * 60 + 43)
	{
		if (total_time - (8 * 60) <= 9 * 60 + 43 - total_time)
			printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
		else
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
	}

	// Check if time is between 9:43 a.m. and 11:19 a.m.
	else if (total_time <= 11 * 60 + 19)
	{
		if (total_time - (9 * 60 + 43) <= 11 * 60 + 19 - total_time)
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
		else
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	}

	// Check if time is between 11:19 a.m. and 12:47 a.m.
	else if (total_time <= 12 * 60 + 47)
	{
		if (total_time - (11 * 60 + 19) <= 12 * 60 + 47 - total_time)
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
		else
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	}

	// Check if time is between 12:47 p.m. and 2:00 p.m.
	else if (total_time <= 14 * 60)
	{
		if (total_time - (12 * 60 + 47) <= 14 * 60 - total_time)
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
		else
			printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	}

	// Check if time is between 2:00 p.m. and 3:45 p.m.
	else if (total_time <= 15 * 60 + 45)
	{
		if (total_time - (14 * 60) <= 15 * 60 + 45 - total_time)
			printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
		else
			printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}

	// Check if time is between 3:45 p.m. and 7:00 p.m.
	else if (total_time <= 19 * 60)
	{
		if (total_time - (15 * 60 + 45) <= 19 * 60 - total_time)
			printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
		else
			printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	}

	// Check if time is between 7:00 p.m. and 9:45 p.m.
	else if (total_time <= 21 * 60 + 45)
	{
		if (total_time - (19 * 60) <= 21 * 60 + 45 - total_time)
			printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
		else
			printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
	}

	else
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

	return 0;
}