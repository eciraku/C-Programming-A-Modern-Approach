#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s[] = "Hsjodi", *p;

	for (p = s; *p; p++)
		--*p;
	puts(s);	// Output: Grinch

	// The --*p subtracts one from the value of the character and since characters are stored as
	// integers, then --*p will be the value of the alphabetically previous character; H -> G
	// s -> r and so on
	return 0;
}