#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, minute;
	char am_pm;

	printf("Enter a 12-hour time: ");
	scanf("%d :%d %c", &hour, &minute, &am_pm);

	if (am_pm == 'p' || am_pm == 'P')
		hour = hour + 12;

	printf("Equivalent 24-hour time: %d:%2d\n", hour, minute);

	return 0;
}