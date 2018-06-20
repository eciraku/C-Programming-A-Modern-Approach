#include <stdio.h>
#include <stdbool.h>	/* C99 only */
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
int evaluate_RPN_expression(const char *expression);
int read_line(char str[], int n);

int main(int argc, char const *argv[])
{
	char expression[STACK_SIZE];

	while (1)
	{
		make_empty();
		printf("Enter RPN expression: ");
		read_line(expression, STACK_SIZE);
		if (strcmp(expression, "q") == 0)
			break;
		printf("Value expression: %d\n", evaluate_RPN_expression(expression));
	}

	return 0;
}

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

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

int evaluate_RPN_expression(const char *expression)
{
	int operand1, operand2;

	for (expression; *expression; expression++)
	{
		if (*expression >= '0' && *expression <= '9')
			push(*expression - '0');
		else if (*expression == '+' || *expression == '-' || *expression == '*' || *expression == '/')
		{
			operand2 = pop();
			operand1 = pop();

			switch(*expression)
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
		else if (*expression == '=')
			return contents[top - 1];
	}
}