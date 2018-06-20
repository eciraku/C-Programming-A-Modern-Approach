#include <stdio.h>

#define N 10

int main(int argc, char const *argv[])
{
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = &a[0], *q = &a[N - 1], temp;

	printf("The original contents of a: ");
	for (int i = 0; i < N; i++)
		printf("%d ", a[i]);

	while (p < q) {
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}

	printf("\nThe new contents of a: ");
	for (int i = 0; i < N; i++)
		printf("%d ", a[i]);

	return 0;
}

// As we can also see from the program output, the contents of the array
// is reversed. The first element is now last, last is firt; the second element
// is second from last, the second from last is second and so on.
// a[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};