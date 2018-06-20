#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(int argc, char const *argv[])
{
	int size;

	printf("Enter size of array: ");
	scanf("%d", &size);

	double array_a[size], array_b[size];

	printf("Enter elements of array 1: ");
	for (int i = 0; i < size; ++i)
		scanf("%lf", &array_a[i]);
	printf("Enter elements of array 2: ");
	for (int i = 0; i < size; ++i)
		scanf("%lf", &array_b[i]);

	printf("The inner product is: %f\n", inner_product(array_a, array_b, size));

	return 0;
}

double inner_product(const double *a, const double *b, int n)
{
	double sum = 0.00;
	const double *p, *q;

	for(p = a, q = b; p < a + n && q < b + n; p++, q++)
		sum += *p * *q;

	return sum;
}