#include <stdio.h>

int main(int argc, char const *argv[])
{
	float x, y;
	int i;

	printf("Enter three number: ");
	scanf("%f%d%f", &x, &i, &y);	// Values entered: 12.3 45.6 789

	printf("x=%f, i=%d, y=%f\n", x, i, y);	// Output: x=12.300000, i=45, y=0.600000

	return 0;
}