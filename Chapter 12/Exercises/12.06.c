// Original Version:
int sum_array(int a[], int n)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

// Modified Pointer Version
int sum_array(int a[], int n)
{
	int *p, sum;

	sum = 0;
	for (p = a; p < a + n; p++)
		sum += *p;
	return sum;
}