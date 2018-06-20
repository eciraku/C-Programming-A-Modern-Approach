#include <stdio.h>

#define N 5

int main(int argc, char const *argv[])
{
	double ident[N][N], *p;
	int num_zeros = N;

	for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++)
		if (num_zeros == N) 
	  	{
	  		*p = 1.0;
		    num_zeros = 0;
		} 
		else 
		{
			*p = 0.0;
		    num_zeros++;
		}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
			printf("%lf   ", ident[i][j]);

		printf("\n");
	}


	return 0;
}