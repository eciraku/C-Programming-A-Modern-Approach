/*
	(a) int f(int)[];		functions can't return arrays
		int *f(int);

	(b) int g(int) (int);	functions can't return functions
		int (*g(int))(int);

	(c) int a[10] (int);	array elements can't be functions
		int (*a[10])(int);
*/