#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour_24, minute;
	int hour_12;

	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &hour_24, &minute);

	if(hour_24 == 0 || hour_24 == 24)
	{
		hour_12 = 12;
		printf("Equivalent 12-hour time: %d:%.2d AM\n", hour_12, minute);
	}
	else if(hour_24 > 0 && hour_24 < 12)
	{
		hour_12 = hour_24;
		printf("Equivalent 12-hour time: %d:%.2d AM\n", hour_12, minute);
	}
	else if(hour_24 == 12)
	{
		hour_12 = hour_24;
		printf("Equivalent 12-hour time: %d:%.2d PM\n", hour_12, minute);
	}
	else if(hour_24 > 12 && hour_24 < 24)
	{
		hour_12 = hour_24 - 12;
		printf("Equivalent 12-hour time: %d:%.2d PM\n", hour_12, minute);
	}

	return 0;
}