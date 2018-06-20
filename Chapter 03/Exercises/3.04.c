#include <stdio.h>

int main(int argc, char const *argv[])
{
	float x;
	int i, j;

	printf("Enter three number: ");
	scanf("%d%f%d", &i, &x, &j);	// Values entered: 10.3 5 6

	printf("i=%d, x=%f, j=%d\n", i, x, j);	// Output: i=10, x=0.300000, j=5

	return 0;
}