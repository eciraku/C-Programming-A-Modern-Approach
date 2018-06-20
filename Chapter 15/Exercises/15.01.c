/*
	(a)
		1. Grouping related functions and variables into a single file
		   helps clarify the structure of the progam.
		2. Each source file can be compiled separately - a great time saver
		   if the program is large and must be changed frequently (which is
		   common during program development).
		3. Functions are more easily reused in other programs when grouped
		   in separate source files. In our example, splitting off stack.c 
		   and token.c from the main function makes it simpler to reuse the 
		   stack functions and token functions in the future.
	(b)
		1. Having multiple files may cause compilation errors when a header 
		   file is included more than once in a source file. For example if
		   the header contains a type definition there will be problems. 
		   This can be avoided by protecting the header file
		   with #ifndef directive.
		2. After a change made to a program, it may be hard to determine
		   which files need to be re-compiled. For example when a header
		   file is changed source file of header and the source file of
		   the main program both need to be re-compiled. Makefile surely
		   helps, but they may be often difficult to write.
*/