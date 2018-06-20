/*
	The #include "filename" according to definition will search the current 
	directory, then search the directory (directories) in which system
	header files reside. So, it is fine to use #include "filename" instead of
	#include <filename> for system header files. 
	The only issue may arise if a file in current directory may have the same
	name as a system header file.
*/