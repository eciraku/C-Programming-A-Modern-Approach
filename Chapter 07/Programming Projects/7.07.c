/* Adds, subtracts, multiplies or divides two fractions */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1, denom1, num2, denom2;
	int result_num, result_denom;
	char operator;

	printf("Enter two fractions separated by operator: ");
	scanf("%d /%d %c %d /%d", &num1, &denom1, &operator, &num2, &denom2);

	switch(operator)
	{
		case '+':
				result_num = num1 * denom2 + num2 * denom1;
				result_denom = denom1 * denom2;
				printf("The sum is %d/%d\n", result_num, result_denom);
				break;

		case '-':
				result_num = num1 * denom2 - num2 * denom1;
				result_denom = denom1 * denom2;
				printf("The difference is %d/%d\n", result_num, result_denom);
				break;

		case '*':
				result_num = num1 * num2;
				result_denom = denom1 * denom2;
				printf("The product is %d/%d\n", result_num, result_denom);
				break;

		case '/':
				result_num = num1 * denom2;
				result_denom = num2 * denom1;
				printf("The quotient is %d/%d\n",result_num, result_denom);
				break;

		default:
				result_num = 0;
				result_denom = 0;
				break;

	}


	return 0;
}