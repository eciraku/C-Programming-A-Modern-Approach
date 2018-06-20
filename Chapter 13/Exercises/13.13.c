#include <stdio.h>
#include <string.h>

#define LEN 100

int read_line(char str[], int n);
void build_index_url(const char *domain, char *index_url);

int main(int argc, char const *argv[])
{
	char domain[LEN], index_url[LEN];

	printf("Enter domain name: ");
	read_line(domain, LEN);

	build_index_url(domain, index_url);

	printf("Index url: ");
	puts(index_url);

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

void build_index_url(const char *domain, char *index_url)
{
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
}