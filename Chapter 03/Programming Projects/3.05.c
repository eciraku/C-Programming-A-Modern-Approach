#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
	int row_sum1, row_sum2, row_sum3, row_sum4;
	int col_sum1, col_sum2, col_sum3, col_sum4;
	int main_diag, second_diag;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16);

	printf("\n");
	printf("%2d %2d %2d %2d\n", a1, a2, a3, a4);
	printf("%2d %2d %2d %2d\n", a5, a6, a7, a8);
	printf("%2d %2d %2d %2d\n", a9, a10, a11, a12);
	printf("%2d %2d %2d %2d\n\n", a13, a14, a15, a16);

	row_sum1 = a1 + a2 + a3 + a4;
	row_sum2 = a5 + a6 + a7 + a8;
	row_sum3 = a9 + a10 + a11 + a12;
	row_sum4 = a13 + a14 + a15 + a16;
	printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);

	col_sum1 = a1 + a5 + a9 + a13;
	col_sum2 = a2 + a6 + a10 + a14;
	col_sum3 = a3 + a7 + a11 + a15;
	col_sum4 = a4 + a8 + a12 + a16;
	printf("Column sums: %d %d %d %d\n", col_sum1, col_sum2, col_sum3, col_sum4);

	main_diag = a1 + a6 + a11 + a16;
	second_diag = a4 + a7 + a10 + a13;

	printf("Diagonal sums: %d %d\n", main_diag, second_diag);

	return 0;
}