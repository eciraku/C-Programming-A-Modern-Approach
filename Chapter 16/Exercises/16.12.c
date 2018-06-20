/*
	union {
		double a;
		struct {
			char b[4];
			double c;
			int d;
		} e;
		char f[4];
	} u;

	The size in a union variable is determined by the size of the largest element.
	In our case the element with the largest size is the struct variable.
	So, the size of the union will be (4 + 8 + 4) = 16 bytes.
*/