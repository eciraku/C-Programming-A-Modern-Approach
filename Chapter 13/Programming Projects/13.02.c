/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50	/* maximum number of reminders */
#define MSG_LEN 60		/* max length of reminder message */

int read_line(char str[], int n);

int main(int argc, char const *argv[])
{
	char reminders[MAX_REMIND][MSG_LEN + 3];
	char day_str[12], msg_str[MSG_LEN + 1];
	int day, month, i, j, num_remind = 0;
	int hour, minute;
	char hour_str[6];

	for (;;) {

		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}

		printf("Enter month/day, 24-hour time and reminder: ");
		scanf("%d /%d", &month, &day);
		if (day == 0)
			break;
		// (a)
		else if (day > 31 || day < 0)
		{
			printf("Illegal day! Try again!\n");
			continue;
		}
		// (c)
		sprintf(day_str, "%2d/%2d", month, day);
		// (b)
		scanf("%d :%d", &hour, &minute);
		sprintf(hour_str, "%2d:%.2d", hour, minute);
		strcat(day_str, " ");
		strcat(day_str, hour_str);

		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j - 1]);

		strcpy(reminders[i], day_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nM./Day Time  Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);

	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}