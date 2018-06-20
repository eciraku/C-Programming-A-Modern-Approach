#include <stdio.h>
#include <stdbool.h>	/* C99 only */
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* function declarations */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(int argc, char const *argv[])
{
	char ch;
	char check;

	printf("Enter parentheses and/or braces: ");
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == '(' || ch == '{')
			push(ch);
		else if (ch == ')' || ch == '}')
		{
			check = pop();
			if ((check == '(' && ch != ')') || (check == '{' && ch != '}'))
			{
				printf("Parentheses/braces are not nested properly.\n");
				exit(EXIT_SUCCESS);
			}
		}

		ch = getchar();
	}

	if (is_empty())
		printf("Parentheses/braces are nested properly.\n");
	else 
		printf("Parentheses/braces are not nested properly.\n");

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

void push(char ch)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = ch;
}

char pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void)
{
	printf("Stack Overflow!\n");
	exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
	printf("Parentheses/braces are not nested properly. Stack Underflow!\n");
	exit(EXIT_SUCCESS);
}