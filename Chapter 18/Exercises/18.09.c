/*
	(a) char (*x[10])(int);
	
	typedef char 	Fcn(int)
	typedef Fcn 	*Fcn_ptr;
	typedef Fcn_ptr Fcn_ptr_array[10];

	Fcn_ptr_array x;


	(b) int (*x(int)) [5];
	
	typedef int 		Array[5];
	typedef Array 		*Fcn_ptr;
	typedef Fcn_ptr 	Fcn_array_ptr(int);

	Fcn_array_ptr x;


	(c) float *(*x(void))(int);
	
	typedef float 		*Fcn_out(int);
	typedef Fcn_out 	*Fcn_out_ptr;
	typedef Fcn_out_ptr  Fcn(void);

	Fcn x;


	(d) void (*x(int, void (*y)(int))) (int);

	typedef void 		Fcn_out(int);

	typedef void 		Fcn_in(int);
	typedef Fcn_in 		*Fcn_in;

	typedef Fcn_out 	*Fcn_in_ptr;
	typedef Fcn_in_ptr 	Fcn(int, Fcn_in y);


	Fcn x;
*/