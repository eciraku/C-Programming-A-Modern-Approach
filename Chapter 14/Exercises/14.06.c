#include <stdio.h>
#include <math.h>

// (a)
#define DISP(f, x)	(printf(#f "(%g) = %g\n", x, f(x)))

// (b)
#define DISP2(f, x, y)	(printf(#f "(%g, %g) = %g\n", x, y, f(x, y)))

int main(int argc, char const *argv[])
{
	double x = 3.0, y = 4.0;
	
	DISP(sqrt, x);
	DISP2(pow, x, y);

	return 0;
}