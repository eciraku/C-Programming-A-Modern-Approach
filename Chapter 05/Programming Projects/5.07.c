#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1, num2, num3, num4;
	int min1, min2, max1, max2;
	int min, max;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	// Compare num1 and num2, find the largest and smallest of the two
	if(num1 < num2)
	{
		min1 = num1;
		max1 = num2;
	}
	else
	{
		min1 = num2;
		max1 = num1;
	}

	// Compare num3 and num4, find the largest and smallest of the two
	if(num3 < num4)
	{
		min2 = num3;
		max2 = num4;
	}
	else
	{
		min2 = num4;
		max2 = num3;
	}

	// Compare the smallest of num1 and num2 with the smallest of num3 and num4
	if(min1 < min2)
		min = min1;
	else 
		min = min2;

	// Compare the largest of num1 and num2 with the largest of num3 and num4
	if(max1 < max2)
		max = max2;
	else 
		max = max1;

	printf("Largest: %d\n", max);
	printf("Smallest: %d\n", min);

	return 0;
}