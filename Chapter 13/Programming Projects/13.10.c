#include <stdio.h>
#include <string.h>

#define LEN 100

int read_line(char str[], int n);
void reverse_name(char *name);

int main(int argc, char const *argv[])
{
	char full_name[LEN];

	printf("Enter a first and last name: ");
	read_line(full_name, LEN);

	reverse_name(full_name);

	printf("%s\n", full_name);

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

void reverse_name(char *name)
{
	int i = 0;
	char initial, *copy = name;
	char name_str[LEN];
	char initial_str[4];

	// Check for initial space; if there are spaces do nothing, just skip them
	while(*copy == ' ')
		copy++;

	initial = *copy; // The first non-space character read will be the initial of the name

	// Read the remaining characters of the name and do nothing
	while(*copy != ' ')
		copy++;

	// Skip space(s) after the name
	while(*copy == ' ')
		copy++;
							
	name_str[i++] = *copy++;	// The first non-space character read will be the initial of the last name
	while(*copy != '\0')
	{
		if(*++copy == ' ')
			continue; // Or break;

		name_str[i++] = *copy;
	}

	strcat(name_str, ", ");
	sprintf(initial_str, "%c.", initial);
	strcat(name_str, initial_str);
	strcpy(name, name_str);

}