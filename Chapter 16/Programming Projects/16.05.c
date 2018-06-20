#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct flight {
	int departure;
	int arrival;
};

int main(int argc, char const *argv[])
{
	struct flight flight_schedule[] = {		{8 * 60,       10 * 60 + 16},	{9 * 60 + 43,  11 * 60 + 52}, {11 * 60 + 19, 13 * 60 + 31}, 
											{12 * 60 + 47, 15 * 60},	    {14 * 60,      16 * 60 + 8},  {15 * 60 + 45, 17 * 60 + 55},
											{19 * 60,      19 * 60 + 20},	{21 * 60 + 45, 23 * 60 + 58}	};

	int hour, minute, total_time;
	int min_index, min_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	total_time = hour * 60 + minute;

	min_time = abs(total_time - flight_schedule[0].departure);
	min_index = 0;
	for (int i = 1; i < 8; ++i)
	{
		if (abs(total_time - flight_schedule[i].departure) < min_time)
		{
			min_index = i;
			min_time = abs(total_time - flight_schedule[min_index].departure);
		}
	}

	if ((flight_schedule[min_index].departure / 60 < 12) && (flight_schedule[min_index].arrival / 60 < 12))
		printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", 
			flight_schedule[min_index].departure / 60, flight_schedule[min_index].departure % 60, flight_schedule[min_index].arrival / 60, flight_schedule[min_index].arrival % 60);
	else if ((flight_schedule[min_index].departure / 60 < 12) && (flight_schedule[min_index].arrival / 60 >= 12))
		{
			if ((flight_schedule[min_index].arrival / 60 == 12))
				printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", 
					flight_schedule[min_index].departure / 60, flight_schedule[min_index].departure % 60, flight_schedule[min_index].arrival / 60, flight_schedule[min_index].arrival % 60);
			else
				printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", 
					flight_schedule[min_index].departure / 60, flight_schedule[min_index].departure % 60, flight_schedule[min_index].arrival / 60 - 12, flight_schedule[min_index].arrival % 60);
		}
	else if ((flight_schedule[min_index].departure / 60 >= 12) && (flight_schedule[min_index].arrival / 60 >= 12))
		{
			if ((flight_schedule[min_index].departure / 60 == 12) && (flight_schedule[min_index].arrival / 60 == 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", 
					flight_schedule[min_index].departure / 60, flight_schedule[min_index].departure % 60, flight_schedule[min_index].arrival / 60, flight_schedule[min_index].arrival % 60);
			else if ((flight_schedule[min_index].departure / 60 == 12) && (flight_schedule[min_index].arrival / 60 != 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", 
					flight_schedule[min_index].departure / 60, flight_schedule[min_index].departure % 60, flight_schedule[min_index].arrival / 60 - 12, flight_schedule[min_index].arrival % 60);
			else if ((flight_schedule[min_index].departure / 60 != 12) && (flight_schedule[min_index].arrival / 60 == 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", 
					flight_schedule[min_index].departure / 60 - 12, flight_schedule[min_index].departure % 60, flight_schedule[min_index].arrival / 60, flight_schedule[min_index].arrival % 60);
			else
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", 
					flight_schedule[min_index].departure / 60 - 12, flight_schedule[min_index].departure % 60, flight_schedule[min_index].arrival / 60 - 12, flight_schedule[min_index].arrival % 60);
		}


	return 0;
}