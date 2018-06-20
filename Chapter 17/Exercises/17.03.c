/*
	int *create_array(int n, int inital_value)
	{
		int *p, *copy_p;

		p = malloc(sizeof(int) * n);
		if (p == NULL)
		{
			printf("Error! Memory could not be allocated!\n");
			return p;
		}
	
		for (copy_p = p; copy_p < p + n; copy_p++)
			*copy_p = initial_value;

		return p;
	}
*/