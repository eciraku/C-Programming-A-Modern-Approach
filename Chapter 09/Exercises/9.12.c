#include <stdio.h>

double inner_product(double a[], double b[], int n)
{
	double sum = 0;

	for (int i = 0; i < n; ++i)
		sum += a[i] * b[i];

	return sum;
}

int main(int argc, char const *argv[])
{
	int size;

	printf("Enter size of vectors: ");
	scanf("%d", &size);

	double a[size], b[size];

	printf("Enter elements of Vecotr 1: ");
	for (int i = 0; i < size; ++i)
		scanf("%lf", &a[i]);

	printf("Enter elements of Vecotr 2: ");
	for (int i = 0; i < size; ++i)
		scanf("%lf", &b[i]);

	printf("The inner product is: %.2f\n", inner_product(a, b, size));

	return 0;
}