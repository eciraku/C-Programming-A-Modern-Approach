/*
	(a) char (*x[10])(int);
	Array of pointers to functions that have int argument and return char

	(b) int (*x(int)) [5];
	Function that returns a pointer to an array of integers

	(c) float *(*x(void))(int);
	Function with no arguments that returns a pointer to a function with with an int argument
	that returns a pointer to a float value

	(d) void (*x(int, void (*y)(int))) (int);
	x is a function with two arguments, one of which is an int while the other a pointer to a function
	with int argument that returns nothing, that points to a function with int argument that returns nothing
*/