#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, k;

	// a)
	i = 3;
	j = 4;
	k = 5;
	printf("%d ", i < j || ++j < k); 
	printf("%d %d %d\n", i, j, k);	// Output 1 3 4 5

	// b)
	i = 7;
	j = 8;
	k = 9;
	printf("%d ", i - 7 && j++ < k); 
	printf("%d %d %d\n", i, j, k); // Output 0 7 8 9

	// c)
	i = 7;
	j = 8;
	k = 9;
	printf("%d ", (i = j) || (j = k)); 
	printf("%d %d %d\n", i, j, k);	// Output 1 8 8 9

	// d)
	i = 1;
	j = 1;
	k = 1;
	printf("%d ", ++i || ++j && ++k);
	printf("%d %d %d\n", i, j, k);	// Output 1 2 1 1

	return 0;
}