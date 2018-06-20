#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define LEN 100

int read_line(char str[], int n);
bool test_extension(const char *file_name, const char *extension);

int main(int argc, char const *argv[])
{
	char file_name[LEN], extension[LEN];

	printf("Enter name of file: ");
	read_line(file_name, LEN);
	printf("Enter extension: ");
	read_line(extension, LEN);

	test_extension(file_name, extension);

	if (test_extension(file_name, extension))
		printf("True!\n");
	else
		printf("False!\n");
	
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

 bool test_extension(const char *file_name, const char *extension)
 {
 	while (*file_name)
 	{
 		if (*file_name == '.')
 		{
 			for (++file_name; *file_name; file_name++) 
 			{
 				if (toupper(*file_name) != toupper(*extension))
 					break;

 				extension++;
 			}

 			if (*file_name == '\0')
 				return true;
 			else
 				return false;
 		}

 		file_name++;
 	}
 }