// Original version
int count_spaces(const char s[])
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ' ')
			count++;
	return count;
}

// Short-hand version
int count_spaces(const char s[])
{
	int count = 0;

	while (*s)
		if (*s++ == ' ')
			count++;
	return count;
}