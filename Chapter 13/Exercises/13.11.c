#include <stdio.h>

#define LEN 100

int my_strcmp(char *s, char *t);
int read_line(char str[], int n);

int main(int argc, char const *argv[])
{
	char str1[LEN], str2[LEN];

	printf("Enter first string: ");
	read_line(str1, LEN);
	printf("Enter second string: ");
	read_line(str2, LEN);

	if (my_strcmp(str1, str2) < 0)
		printf("%s is alphabetically lower than %s\n", str1, str2);
	else if (my_strcmp(str1, str2) > 0)
		printf("%s is alphabetically higher than %s\n", str1, str2);
	else
		printf("You enterd the same thing!\n");

	return 0;
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

// Pointer arithmetic
int my_strcmp(char *s, char *t)
{
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}