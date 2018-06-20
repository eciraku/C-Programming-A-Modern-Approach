/* Finds the largest and smallest elements in an array */

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(int argc, char const *argv[])
{
	int b[N], i, big, small;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &b[i]);

	max_min(b, N, &big, &small);

	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);

	return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
	int *a_ptr;

	*max = *min = a[0];
	for (a_ptr = a; a_ptr < a + n; a_ptr++) {
		if (*a_ptr > *max)
			*max = *a_ptr;
		else if (*a_ptr < *min)
			*min = *a_ptr;
	}
}