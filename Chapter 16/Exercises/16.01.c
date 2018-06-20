/*
	struct { int x, y; } x;
	struct { int x, y; } y;

	Yes it is legal to declare the struct variables as above
	both on an individual basis and together in one program.

	First on an individual basis:
	The member name and the struct variable name can be
	the same,as this does not cause any conflicts,
	since the only way to call member x of the struct x
	variable is to write x.x, so we are not using x by itself.
	In that case there would be ambiguity as to which x we are
	referring to.

	Second, together in the same program:
	The names of the member variables are local to the struct.
	This means that the x and y of the x variable will not
	conflict with the x and y of the y variable. Furthermore,
	the x member of struct x is called as x.x and 
	the x member of struct y is called as y.x

	Another thing to notice is the declaration int x, y
	Normally in struct we would write:
	int x;
	int y;
	But the given declaration is also legal
*/