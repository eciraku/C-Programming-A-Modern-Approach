/*
	int (*f(float (*)(long), char *))(double);

	(a) f is a function with two arguments: one is a pointer to a function with long int argument that returns a float value,
	and the other is a pointer to char argument. f than returns a pointer to a function with one double argument that returns an int value.

	(b) float arg1_function(long n)
		{
			return (float) n;
		}

		int out_function(double x)
		{
			return (int) x;
		}

		int (*f(float (*function)(long), char *ch))(double)
		{
			int total = *ch + function(0);
			return out_function;
		}

		int main(void)
		{
			char ch = 'A';
			double d = 0.5;

			n = (f(arg1_function, &ch))(d);
		}
*/