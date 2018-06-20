#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdbool.h>	/* C99 only */
#include <stdlib.h>
#include <ctype.h>

/* function declarations */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int ch);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

#endif