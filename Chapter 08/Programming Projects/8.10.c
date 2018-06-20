#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int departure[8] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45};
	int arrival[8] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 19 * 60 + 20, 23 * 60 + 58};
	int hour, minute, total_time;
	int min_index, min_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	total_time = hour * 60 + minute;

	min_time = abs(total_time - departure[0]);
	min_index = 0;
	for (int i = 1; i < 8; ++i)
	{
		if (abs(total_time - departure[i]) < min_time)
		{
			min_index = i;
			min_time = abs(total_time - departure[min_index]);
		}
	}

	if ((departure[min_index] / 60 < 12) && (arrival[min_index] / 60 < 12))
		printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", departure[min_index] / 60, departure[min_index] % 60, arrival[min_index] / 60, arrival[min_index] % 60);
	else if ((departure[min_index] / 60 < 12) && (arrival[min_index] / 60 >= 12))
		{
			if ((arrival[min_index] / 60 == 12))
				printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", departure[min_index] / 60, departure[min_index] % 60, arrival[min_index] / 60, arrival[min_index] % 60);
			else
				printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", departure[min_index] / 60, departure[min_index] % 60, arrival[min_index] / 60 - 12, arrival[min_index] % 60);
		}
	else if ((departure[min_index] / 60 >= 12) && (arrival[min_index] / 60 >= 12))
		{
			if ((departure[min_index] / 60 == 12) && (arrival[min_index] / 60 == 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", departure[min_index] / 60, departure[min_index] % 60, arrival[min_index] / 60, arrival[min_index] % 60);
			else if ((departure[min_index] / 60 == 12) && (arrival[min_index] / 60 != 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", departure[min_index] / 60, departure[min_index] % 60, arrival[min_index] / 60 - 12, arrival[min_index] % 60);
			else if ((departure[min_index] / 60 != 12) && (arrival[min_index] / 60 == 12))
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", departure[min_index] / 60 - 12, departure[min_index] % 60, arrival[min_index] / 60, arrival[min_index] % 60);
			else
				printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", departure[min_index] / 60 - 12, departure[min_index] % 60, arrival[min_index] / 60 - 12, arrival[min_index] % 60);
		}

	return 0;
}