#include <stdio.h>
#include <stdbool.h>	/* C99 only */
#include <stdlib.h>
#include <ctype.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* function declarations */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int ch);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

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
			printf("Value of expression: %d\n", contents[top - 1]);
			make_empty();
			printf("Enter an RPN expression: ");
		}

		scanf(" %c", &ch);

	}

	return 0;
}

/* function definitions */

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int ch)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = ch;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void)
{
	printf("Expression is too complex!\n");
	exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
	printf("Not enough operands in expression!\n");
	exit(EXIT_SUCCESS);
}