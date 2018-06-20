// (a)
void f(void);

int main(int argc, char const *argv[])
{
	f();

	return 0;
}

void f(void)
{
	printf("N is undefined\n");
}

// (b)
// The output is: N is undefined