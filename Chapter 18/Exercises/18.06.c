/*
	void print_error(const char *message)
	{
		int n = 1;
		printf("Error %d: %s\n", n++, message);
	}

	void print_error(const char *message)
	{
		static int n = 1;
		printf("Error %d: %s\n", n++, message);
	}

	We should make the n variable to have static storage duration. We do this by simply 
	adding static in front of the int n = 1; declaration (and definition).
	Now the value of the n variable will be saved even when the function call finishes.
*/