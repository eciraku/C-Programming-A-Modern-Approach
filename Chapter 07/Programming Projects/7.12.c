#include <stdio.h>

int main(int argc, char const *argv[])
{
	float op1, result;
	char ch;

	printf("Enter an expression: ");
	scanf("%f", &result);
	ch = getchar();
	while (ch != '\n')
	{
		scanf("%f", &op1);

		if (ch == '+')
			result += op1;
		else if (ch == '-')
			result -= op1;
		else if (ch == '*')
			result *= op1;
		else if (ch == '/')
			result /= op1;

		ch = getchar();

	}

	printf("Value of expression: %g\n", result);

	return 0;
}