#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	char phone_char[15];


	printf("Enter phone number: ");
	for (i = 0; ((phone_char[i] = getchar()) != '\n') && (i < 15); ++i)
					;	// Empty loop body

	printf("In numeric form: ");
	for (int j = 0; j < i; ++j)
	{
		switch(phone_char[j])
		{
			case 'A':
			case 'B':
			case 'C':
					putchar('2');
					break;

			case 'D':
			case 'E':
			case 'F':
					putchar('3');
					break;

			case 'G':
			case 'H':
			case 'I':
					putchar('4');
					break;

			case 'J':
			case 'K':
			case 'L':
					putchar('5');
					break;

			case 'M':
			case 'N':
			case 'O':
					putchar('6');
					break;

			case 'P':
			case 'R':
			case 'S':
					putchar('7');
					break;

			case 'T':
			case 'U':
			case 'V':
					putchar('8');
					break;

			case 'W':
			case 'X':
			case 'Y':
					putchar('9');
					break;

			default:
					putchar(phone_char[j]);
					break;
		}

	}

	return 0;
}