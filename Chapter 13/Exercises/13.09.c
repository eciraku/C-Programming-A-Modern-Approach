#include <stdio.h>
#include <string.h>

#define LEN 100

int main(int argc, char const *argv[])
{
	char s1[LEN], s2[LEN];

	strcpy(s1, "computer");
	strcpy(s2, "science");
	if (strcmp(s1, s2) < 0)
		strcat(s1, s2);
	else
		strcat(s2, s1);
	s1[strlen(s1) - 6] = '\0';

	puts(s1);	// Output: computers

	return 0;
}