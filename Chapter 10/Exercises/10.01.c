int a;

void f(int b)
{
	int c;
}

void g(void)
{
	int d;
	{
		int e;
	}
}

int main(void)
{
	int f;
}

// (a) The function f -> Visible variables: a, b, c
// (b) The function g -> Visible variables: a, d
// (c) The block in which e is declared -> Visible variables: a, d, e
// (d) The main function -> a, f