#include "stack.h"

int main(int argc, char const *argv[])
{
	char ch;
	int value;
	int operand1, operand2;

	printf("Enter an RPN expression: ");
	scanf(" %c", &ch);
	while (ch != 'q')
	{
		if (ch >= '0' && ch <= '9')
		{
			value = ch - '0';
			push(value);
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			operand2 = pop();
			operand1 = pop();

			switch(ch)
			{
				case '+':
						push(operand1 + operand2);
						break;
				case '-':
						push(operand1 - operand2);
						break;
				case '*':
						push(operand1 * operand2);
						break;
				case '/':
						push(operand1 / operand2);
						break;
			}
		}
		else if (ch == '=')
		{
			printf("Value of expression: %d\n", pop());
			make_empty();
			printf("Enter an RPN expression: ");
		}

		scanf(" %c", &ch);

	}

	return 0;
}