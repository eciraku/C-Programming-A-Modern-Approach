/*
	(a) printf("%c", '\n');	Correct!
	(b) printf("%c", "\n");	Incorrect! The %c specifier means that the argument will be a char type not char *
	(c) printf("%s", '\n'); Incorrect! The %s means the supplied value should be char * not a char
	(d) printf("%s", "\n");	Correct!
	(e) printf('\n');		Incorrect! Argument is of type char while the expected argument is of type char *
	(f) printf("\n");		Correct!
	(g) putchar('\n');		Correct!
	(h) putchar("\n");		Incorrect! Argument must be of type int while supplied argument is of type char *
	(i) puts('\n');			Incorrect! Argument is of type int while the expected argument is of type char *	
	(j) puts("\n");			Legal but prints two new-line characters; one supplied as argument end one as result of implementation
	(k) puts("");			Correct!
*/