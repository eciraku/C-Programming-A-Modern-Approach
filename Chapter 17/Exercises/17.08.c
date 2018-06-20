#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

struct node {
	int value;
	struct node *next;
};

struct node *top = NULL;

void make_empty(void)
{
	struct node *temp;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}

bool is_empty(void)
{
	if (top == NULL)
		return true;

	return false;
}

bool push(int ch)
{
	struct node *new_node;

	new_node = malloc(sizeof(struct node));
	if (new_node == NULL)
		return false;

	new_node->value = ch;
	new_node->next = top;
	top = new_node;

	return true;
}

int pop(void)
{
	struct node *temp;
	int i;

	if (is_empty())
	{
		printf("*** Stack underflow; program terminated. ***\n");
    	exit(EXIT_FAILURE);
	}

	i = top->value;
	temp = top;
	top = top->next;
	free(temp);

	return i;
}