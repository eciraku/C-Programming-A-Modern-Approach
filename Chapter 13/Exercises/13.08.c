#include <stdio.h>
#include <string.h>

#define LEN 100

int main(int argc, char const *argv[])
{
	char str[LEN];

	strcpy(str, "tire-bouchon");
	strcpy(&str[4], "d-or-wi");
	strcat(str, "red?");

	puts(str);	// Output: tired-or-wired?

	return 0;
}