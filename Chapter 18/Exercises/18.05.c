/*
	(a) Each variable with static storage duration has file scope. False
	    A variable declared as static in a block will have block scope eventhough its memory is
	    not deallocated after the block finishes. The variable can be used only inside the block it is defined.

	(b) Every variable declared inside a function has no linkage. False
	    If a variable is declared as extern than it has external linkage

	(c) Every variable with internal linkage has static storage duration. True
		For a variable to have internal linkage it should be declared as static.
		So, automatically every variable with interal linkage has static storage duration

	(d) Every parameter has block scope. True
		A paramter is a new variable in a function definition, so it will be visible only to that scope
*/