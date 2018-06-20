#include <stdio.h>
#include <string.h>

#define LEN 100

int read_line(char str[], int n);
void remove_file_name(char *url);

int main(int argc, char const *argv[])
{
	char url[LEN];

	printf("Enter url: ");
	read_line(url, LEN);

	remove_file_name(url);
	printf("Hello\n");
	printf("%s\n", url);

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

 void remove_file_name(char *url)
 {
 	/*
 	while (*url != '\0')
 	{
 		if (*url == '/' && *(url + 1) != '/' && *(url - 1) != '/')
 		{
 			*url = '\0';
 			break;
 		}

 		url++;
 	}
 	*/

 	for (url = url + strlen(url); *url != '/'; url--)
 		;

 	*url = '\0';
 }