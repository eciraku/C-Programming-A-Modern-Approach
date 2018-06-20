#include <stdio.h>

#define LEN 100

int main(int argc, char const *argv[])
{
	int i, j;
	char s[LEN];

	printf("Enter value (12abc34 56def78): ");
	scanf("%d%s%d", &i, s, &j);

	printf("i = %d, s = %s, j = %d\n", i, s, j);
	// Output: i = 12, s = abc34, j = 56
	
	return 0;
}