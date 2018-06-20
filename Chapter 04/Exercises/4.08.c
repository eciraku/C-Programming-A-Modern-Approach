//	9 - ((total - 1) % 10)
//	(10 - (total % 10)) % 10

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int total;

	for(total = 0; total <= 100; total++)
	{
		printf("%d\t%d\t%d\n", 9 - ((total - 1) % 10), (10 - (total % 10)) % 10, total);
	}

	return 0;
}

// Yes, the results are identical!