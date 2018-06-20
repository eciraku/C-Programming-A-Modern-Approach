#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node {
    struct node *next;
    char word[];
};

struct node *line = NULL;

int line_len = 0;
int num_words = 0;

void clear_line(void)
{
	struct node *temp;

	while (line != NULL)
	{
		temp = line;
		line = line->next;
		free(temp);
	}

	line_len = 0;
	num_words = 0;
}

void add_word(const char *word)
{
	struct node *cur;
	struct node *new_node;

	new_node = malloc(sizeof(struct node) + strlen(word)  + 1); // Flexible array members (C99)
	if (new_node == NULL)
	{
		printf("Allocation failed!\n");
		exit(EXIT_FAILURE);
	}

	strcpy(new_node->word, word);
	new_node->next = NULL;

	if (line == NULL)
	{
		line = new_node;
		line_len += strlen(word);
		num_words++;
		return;
	}

	for (cur = line; cur->next != NULL; cur = cur->next)
		;

	cur->next = new_node;
	line_len += strlen(word) + 1;
	num_words++;
}

int space_remaining(void)
{
	return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
	struct node *copy_line;
	int extra_spaces, spaces_to_insert, i, j;
	int count = 0;

	extra_spaces = MAX_LINE_LEN - line_len;
	for (copy_line = line; copy_line != NULL && count < line_len; copy_line = copy_line->next) {
			printf("%s", copy_line->word);
			if (num_words > 1)
			{
				spaces_to_insert = extra_spaces / (num_words - 1);
				for (j = 1; j <= spaces_to_insert + 1; j++)
					putchar(' ');
				extra_spaces -= spaces_to_insert;
			}

			count += strlen(copy_line->word) + 1;
			num_words--;
	}
	putchar('\n');
}

void flush_line(void)
{
	struct node *copy_line;

	if (line_len > 0)
		for (copy_line = line; copy_line != NULL; copy_line = copy_line->next)
			printf("%s ", copy_line->word);
}