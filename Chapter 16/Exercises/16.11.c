/*
	struct {
		double a;
		union {
			char b[4];
			double c;
			int d;
		} e;
		char f[4];
	} s;

	The compiler will allocate 20 bytes of space.
	For struct variables the compiler allocates memory for each member
	in the order they are written.
	For union variables the compiler allocates space for only one member
	but each member can be stored in the space allocated. Which means that
	the space allocated will be determined by the variable with the largest size.

	Starting from the struct we have:
	double a; (8 bytes)
	In the union variable e, the largest variable size is double c; (8 bytes)
	char f[4]; (4 bytes)

	So, (8 + 8 + 4) bytes = 20 bytes
*/