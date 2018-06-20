#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double x;
	double old_y = 1, new_y;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	new_y = (old_y + x / old_y) / 2;
	while (fabs(new_y - old_y) >= 0.00001)
	{
		old_y = new_y;
		new_y = (old_y + x / old_y) / 2;
	}

	printf("Square root: %f\n", new_y);

	return 0;
}