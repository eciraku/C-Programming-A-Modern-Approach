#include <stdio.h>
#include <ctype.h>

#define LEN 100

int read_line(char str[], int n);
void capitalize(char str[]);

int main(int argc, char const *argv[])
{
	char sentence[LEN];

	printf("Enter sentence: ");
	read_line(sentence, LEN);

	printf("All uppercase: ");
	capitalize(sentence);

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

 void capitalize(char str[])
 {
 	int i = 0;

 	while (str[i] != '\0')
 	{
 		if (toupper(str[i]) >= 'A' && toupper(str[i]) <= 'Z')
 			str[i] = toupper(str[i]);

 		i++;
 	}
 }