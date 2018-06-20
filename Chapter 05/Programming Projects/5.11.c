#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number, tens_digit, ones_digit;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	tens_digit = number / 10;
	ones_digit = number % 10;

	printf("You entered the number ");

	if (tens_digit == 1)
		switch(ones_digit)
		{
			case 0:
					printf("ten.\n");
					return 0;
			case 1:
					printf("eleven.\n");
					return 0;
			case 2:
					printf("twelve.\n");
					return 0;
			case 3:
					printf("thirteen.\n");
					return 0;
			case 4:
					printf("fourteen.\n");
					return 0;
			case 5:
					printf("fifteen.\n");
					return 0;
			case 6:
					printf("sixteen.\n");
					return 0;
			case 7:
					printf("seventen.\n");
					return 0;
			case 8:
					printf("eighteen.\n");
					return 0;
			case 9:
					printf("nineteen.\n");
					return 0;
		}


	switch(tens_digit)
	{
		
		case 2:
				printf("tewnty");
				break;
		case 3:
				printf("thirty");
				break;
		case 4:
				printf("fourty");
				break;
		case 5:
				printf("fifty");
				break;
		case 6:
				printf("sixty");
				break;
		case 7:
				printf("seventy");
				break;
		case 8:
				printf("eighty");
				break;
		case 9:
				printf("ninety");
				break;
	}


	switch(ones_digit)
	{
		case 0:
				printf(".\n");
				break;
		case 1:
				printf("-one.\n");
				break;
		case 2:
				printf("-two.\n");
				break;
		case 3:
				printf("-three.\n");
				break;
		case 4:
				printf("-four.\n");
				break;
		case 5:
				printf("-five.\n");
				break;
		case 6:
				printf("-six.\n");
				break;
		case 7:
				printf("-seven.\n");
				break;
		case 8:
				printf("-eight.\n");
				break;
		case 9:
				printf("-nine.\n");
				break;
	}

	return 0;
}