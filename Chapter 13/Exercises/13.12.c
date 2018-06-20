#include <stdio.h>
#include <string.h>

#define LEN 100

int read_line(char str[], int n);
void get_extension(const char *file_name, char *extension);

int main(int argc, char const *argv[])
{
	char file_name[LEN], extension[LEN / 10];

	printf("Enter file name: ");
	read_line(file_name, LEN);

	get_extension(file_name, extension);

	printf("Extension: ");
	puts(extension);

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

void get_extension(const char *file_name, char *extension)
 {
 	*extension = '\0';

 	while (*file_name != '\0')
 	{
 		if (*file_name == '.')
 			strcpy(extension, ++file_name);

 		file_name++;
 	}
 }