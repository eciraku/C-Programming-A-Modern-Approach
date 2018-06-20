/*
	(a) *str = 0;
	(b) str[0] = '\0';
	(c) strcpy(str, "");
	(d) strcat(str, "");

	The one that is not equivalent to the others is (d) because it adds a null character at the end of the string 
	(which may not be empty) rather then the first character.
*/