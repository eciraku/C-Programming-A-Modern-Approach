#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(int argc, char const *argv[])
{
	long total_sec;
	int hour, minute, second;

	printf("Enter number of seconds since midnight: ");
	scanf("%ld", &total_sec);

	split_time(total_sec, &hour, &minute, &second);

	printf("In (hour:minute:second): %.2d:%.2d:%.2d\n", hour, minute, second);


	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr = total_sec / 3600;
	total_sec = total_sec % 3600;
	*min = total_sec / 60;
	total_sec = total_sec % 60;
	*sec = total_sec;
}