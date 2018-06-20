#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a1, b1;
	float a2, b2;

	printf("Un-initialited int variables: a1 = %d, b1 = %d\n", a1, b1);
	printf("Un-initialited floating-point variables: a2 = %f, b2 = %f\n", a2, b2);

	return 0;
}

// My result: 	Un-initialited int variables: a1 = 0, b1 = 1
//				Un-initialited floating-point variables: a2 = 0.000000, b2 = 0.000000 