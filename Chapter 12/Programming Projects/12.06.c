/* Sorts an array of integers using Quicksort algorithm */

#include <stdio.h>

#define N 10

void quciksort(int *a, int *low, int *high);
int *split(int *a, int *low, int *high);

int main(int argc, char const *argv[])
{
	int a[N], i;
	int *low, *high;

	printf("Enter %d numbers to be sorted: ", N);
	for (i = 0; i < N; ++i)
		scanf("%d", &a[i]);

	low = a;
	high = a + N - 1;

	quciksort(a, low, high);

	printf("In sorted order: ");
	for (i = 0; i < N; ++i)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}


void quciksort(int *a, int *low, int *high)
{
	int *middle;

	if (low >= high) return;
	middle = split(a, low, high);
	quciksort(a, low, middle - 1);
	quciksort(a, middle + 1, high);
}

int *split(int *a, int *low, int *high)
{
	int part_element = *low;

	for(;;) {
		while(low < high && part_element <= *high)
			high--;
		if (low >= high) break;
		*low++ = *high;

		while (low < high && *low <= part_element)
			low++;
		if (low >= high) break;
		*high-- = *low;
	}

	*high = part_element;
	return high;
}