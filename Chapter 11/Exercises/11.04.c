#include <stdio.h>

void swap(int *p, int *q);

int main(int argc, char const *argv[])
{
	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	printf("Values before swap: a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("Values after swap: a = %d, b = %d\n", a, b);
	
	return 0;
}

void swap(int *p, int *q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}