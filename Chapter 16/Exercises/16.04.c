/*
	(a)
	typedef struct {
		double real;
		double imaginary;
	} Complex;

	(b)
	Complex c1, c2, c3;

	(c)
	Complex make_complex(double arg1, double arg2)
	{
		Complex new_c;

		new_c.real = arg1;
		new_c.imaginary = arg2;

		return new_c;
	}

	(d)
	Complex add_complex(Complex arg1, Complex arg2)
	{
		Complex result;

		result.real = arg1.real + arg2.real;
		result.imaginary = arg1.imaginary + arg2.imaginary;

		return result;
	}
*/