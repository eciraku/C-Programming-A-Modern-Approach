int b, c;

void f(void)
{
	int b, d;
}

void g(int a)
{
	int c;
	{
		int a, d;
	}
}

int main(void)
{
	int c, d;
}

// (a) The function f -> Visible variables: b (the b inside the function), c, d
// (b) The function g -> Visible variables: a (parameter), b, c (the c inside the function)
// (c) The block in which a and d are declared -> Visible variables: a (the a inside the block), b, c (the c inside the function), d
// (d) The main function -> b, c (the c inside main), d