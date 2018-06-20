#include <stdio.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time split_time(long total_seconds);

int main(int argc, char const *argv[])
{
	long total_seconds;
	struct time formal_time;

	printf("Enter number of seconds since midnight: ");
	scanf("%ld", &total_seconds);

	while (total_seconds < 0 || total_seconds >= 24 * 60 * 60) 
	{
        printf("Enter a legal time (between 0 and 86400): ");
        scanf("%ld", &total_seconds);
    }

	formal_time = split_time(total_seconds);
	printf("In hours, minutes and seconds (hh:mm:ss): %.2d:%.2d:%.2d\n",formal_time.hours, formal_time.minutes, formal_time.seconds);

	return 0;
}

struct time split_time(long total_seconds)
{
	struct time formal_time;

	formal_time.hours = total_seconds / (60 * 60);
	total_seconds = total_seconds - (formal_time.hours * (60 * 60));
	formal_time.minutes = total_seconds / 60;
	formal_time.seconds = total_seconds - (formal_time.minutes * 60);

	return formal_time;
}