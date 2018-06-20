#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numerator, denumerator;
	int copy_num, copy_denum;
	int temp;

	printf("Enter a fraction: ");
	scanf("%d /%d", &numerator, &denumerator);

	copy_num = numerator;
	copy_denum = denumerator;

	while (copy_denum != 0)
	{
		temp = copy_num % copy_denum;
		copy_num = copy_denum;
		copy_denum = temp;
	}

	printf("In lowest terms: %d/%d\n", numerator/copy_num, denumerator/copy_num);

	return 0;
}