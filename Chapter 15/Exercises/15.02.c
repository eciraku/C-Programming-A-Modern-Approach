/*
	(a) Function prototypes 	- Can/should be included
	(b) Function definitions 	- Should not be included, becuase if the same header is included in 
								  more than one file the file can't be linked because it will see two 
								  copies of the function.
	(c) Macro definitions 		- Can be included
	(d) Type definitions		- Can but be careful against mulitiple inclusions of the header
*/