#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(int argc, char const *argv[])
{
	int hour, minute, desired_time;
	int departure_time, arrival_time;

	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &hour, &minute);

	desired_time = hour * 60 + minute;

	find_closest_flight(desired_time, &departure_time, &arrival_time);	

	if ((departure_time / 60 < 12) && (arrival_time / 60 < 12))
		printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", departure_time / 60, departure_time % 60, arrival_time / 60, arrival_time % 60);
	else if ((departure_time / 60 < 12) && (arrival_time / 60 >= 12))
		{
			if ((arrival_time / 60 == 12))
				printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", departure_time / 60, departure_time % 60, arrival_time / 60, arrival_time % 60);
			else
				printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", departure_time / 60, departure_time % 60, arrival_time / 60 - 12, arrival_time % 60);
		}
	else if ((departure_time / 60 >= 12) && (arrival_time / 60 >= 12))
		{
			if ((departure_time / 60 == 12) && (arrival_time / 60 == 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", departure_time / 60, departure_time % 60, arrival_time / 60, arrival_time % 60);
			else if ((departure_time / 60 == 12) && (arrival_time / 60 != 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", departure_time / 60, departure_time % 60, arrival_time / 60 - 12, arrival_time % 60);
			else if ((departure_time / 60 != 12) && (arrival_time / 60 == 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", departure_time / 60 - 12, departure_time % 60, arrival_time / 60, arrival_time % 60);
			else
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", departure_time / 60 - 12, departure_time % 60, arrival_time / 60 - 12, arrival_time % 60);
		}

	return 0;
}



void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	// Check if time is less than 8:00 a.m.
	if (desired_time <= 8 * 60)
	{
		*departure_time = 8 * 60;
		*arrival_time = 10 * 60 + 16;
	}

	// Check if time is between 8:00 a.m. and 9:43 a.m.
	else if (desired_time <= 9 * 60 + 43)
	{
		if (desired_time - (8 * 60) <= 9 * 60 + 43 - desired_time)
		{
			*departure_time = 8 * 60;
			*arrival_time = 10 * 60 + 16;
		}
		else
		{
			*departure_time = 9 * 60 + 43;
			*arrival_time = 11 * 60 + 52;
		}
	}

	// Check if time is between 9:43 a.m. and 11:19 a.m.
	else if (desired_time <= 11 * 60 + 19)
	{
		if (desired_time - (9 * 60 + 43) <= 11 * 60 + 19 - desired_time)
		{
			*departure_time = 9 * 60 + 43;
			*arrival_time = 11 * 60 + 52;
		}
		else
		{
			*departure_time = 11 * 60 + 19;
			*arrival_time = 13 * 60 + 31;
		}
	}

	// Check if time is between 11:19 a.m. and 12:47 a.m.
	else if (desired_time <= 12 * 60 + 47)
	{
		if (desired_time - (11 * 60 + 19) <= 12 * 60 + 47 - desired_time)
		{
			*departure_time = 11 * 60 + 19;
			*arrival_time = 13 * 60 + 31;
		}
		else
		{
			*departure_time = 12 * 60 + 47;
			*arrival_time = 15 * 60;
		}
	}

	// Check if time is between 12:47 p.m. and 2:00 p.m.
	else if (desired_time <= 14 * 60)
	{
		if (desired_time - (12 * 60 + 47) <= 14 * 60 - desired_time)
		{
			*departure_time = 12 * 60 + 47;
			*arrival_time = 15 * 60;
		}
		else
		{
			*departure_time = 14 * 60;
			*arrival_time = 16 * 60 + 8;
		}
	}

	// Check if time is between 2:00 p.m. and 3:45 p.m.
	else if (desired_time <= 15 * 60 + 45)
	{
		if (desired_time - (14 * 60) <= 15 * 60 + 45 - desired_time)
		{
			*departure_time = 14 * 60;
			*arrival_time = 16 * 60 + 8;
		}
		else
		{
			*departure_time = 15 * 60 + 45;
			*arrival_time = 17 * 60 + 55;
		}
	}

	// Check if time is between 3:45 p.m. and 7:00 p.m.
	else if (desired_time <= 19 * 60)
	{
		if (desired_time - (15 * 60 + 45) <= 19 * 60 - desired_time)
		{
			*departure_time = 15 * 60 + 45;
			*arrival_time = 17 * 60 + 55;
		}
		else
		{
			*departure_time = 19 * 60;
			*arrival_time = 21 * 60 + 20;
		}
	}

	// Check if time is between 7:00 p.m. and 9:45 p.m.
	else if (desired_time <= 21 * 60 + 45)
	{
		if (desired_time - (19 * 60) <= 21 * 60 + 45 - desired_time)
		{
			*departure_time = 19 * 60;
			*arrival_time = 21 * 60 + 20;
		}
		else
		{
			*departure_time = 21 * 60 + 45;
			*arrival_time = 23 * 60 + 58;
		}
	}

	else
	{
		*departure_time = 21 * 60 + 45;
		*arrival_time = 23 * 60 + 58;
	}
}