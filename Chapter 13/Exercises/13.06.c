#include <stdio.h>

#define LEN 100

int read_line(char str[], int n);
void censor(char str[]);

int main(int argc, char const *argv[])
{
	char sentence[LEN];

	printf("Enter sentence: ");
	read_line(sentence, LEN);

	printf("New version: ");
	censor(sentence);

	puts(sentence);

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

void censor(char str[])
{
	while (*str != '\0')
	{
		if (*str == 'f' && (*(str + 1) == 'o') && (*(str + 2) == 'o'))
		{
			*str = 'x';
			*(str + 1) = 'x';
			*(str + 2) = 'x';

			str += 2;
		}

		str++;
	}
}