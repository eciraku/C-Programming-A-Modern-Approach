#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m, n, copy_m, copy_n;
	int temp;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	// The two variables copy_m and copy_n are created in order to retain the original values 
	// of m and n, since they are changed during the program. You could use m in place of copy_m
	// and n in place of copy_n anywhere in the program, if you feel like it. 
	copy_m = m;
	copy_n = n;

	while (copy_n != 0)
	{
		temp = copy_m % copy_n;
		copy_m = copy_n;
		copy_n = temp;
	}

	printf("Greatest common divisor: %d\n", copy_m);
	return 0;
}