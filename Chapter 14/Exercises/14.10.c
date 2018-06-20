/*
	The characteristic that would make macros unusable as a function is
	the type check for arguments. It may sometimes be essential to use
	exaclty one type of argument, but in macros there is no such check.

	Another problem arises with arguments which have side-effects.
	The macro simply copies the exact way an argument is received
	in all the instances of the definition. So, the ++ and -- operators
	will not work as we want them too.
*/