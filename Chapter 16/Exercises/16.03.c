/*
	(a)
	struct complex {
		double real;
		double imaginary;
	};

	(b)
	struct complex c1, c2, c3;

	(c)
	struct complex make_complex(double arg1, double arg2)
	{
		struct complex new_c;

		new_c.real = arg1;
		new_c.imaginary = arg2;

		return new_c;
	}

	(d)
	struct complex add_complex(struct complex arg1, struct complex arg2)
	{
		struct complex result;

		result.real = arg1.real + arg2.real;
		result.imaginary = arg1.imaginary + arg2.imaginary;

		return result;
	}
*/