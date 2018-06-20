/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_PLANETS 9

bool my_strcmp(char *cmd_arg, char *planet);

int main(int argc, char *argv[])
{
	char *planets[] = {"Mercury", "Venus", "Earth", 
					   "Mars", "Jupiter", "Saturn",
					   "Uranus", "Neptune", "Pluto"};

	int i, j;

	for (i = 1; i < argc; i++) {
		for (j = 0; j < NUM_PLANETS; j++)
			if (my_strcmp(argv[i], planets[j])) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}

		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}

	return 0;
}

bool my_strcmp(char *cmd_arg, char *planet)
{
	for (cmd_arg, planet; *cmd_arg != '\0' || *planet != '\0'; cmd_arg++, planet++)
		if (toupper(*cmd_arg) != toupper(*planet))
			return false;

	return true;
}