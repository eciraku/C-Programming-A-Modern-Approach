#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n)
{
	int sum = 0;
	float average;

	for (int i = 0; i < n; ++i)
		grades[i] = toupper(grades[i]);

	for (int i = 0; i < n; ++i)
	{
		switch(grades[i])
		{
			case 'A':
					sum += 4;
					break;

			case 'B':
					sum += 3;
					break;

			case 'C':
					sum += 2;
					break;

			case 'D':
					sum += 1;
					break;

			case 'F':
					sum += 0;
					break;

			default:
					sum += 0;
					break;	
		}
	}

	return (float)sum / n;
}

int main(int argc, char const *argv[])
{
	int size;

	printf("Enter number of grades: ");
	scanf("%d", &size);

	char grades[size];

	printf("Enter grades: ");
	for (int i = 0; i < size; ++i)
		scanf(" %c", &grades[i]);

	printf("The GPA is: %.2f\n", compute_GPA(grades, size));

	return 0;
}