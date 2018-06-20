/*
	struct point { int x, y; };
	struct rectangle { struct point upper_left, lower_right; };
	struct rectangle *p;

	p = malloc(sizeof(struct rectangle));	// Take care in case when malloc returns a NULL pointer
	if (p == NULL)
	{
		printf("Memory allocation failed!\n");
		exit(EXIT_FAILURE);	// Or return p; if we are inside a function other than main
	}

	p->upper_left.x = 10;
	p->upper_left.y = 25;
	p->lower_right.x = 20;
	p->lower_right.y = 15;
*/