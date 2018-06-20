// (a) The cube of x
#define CUBE(x) ((x)*(x)*(x))

// (b) The remainder when n is divided by 4
#define REMAINDER(n) ((n) % 4)

// (c) 1 if the product of x and y is less than 100, 0 otherwise
#define DECIDE(x, y) ((x) * (y) < 100 ? 1 : 0)

// Macros differently than functions do not check for the type of
// argument, so if we pass char type to the above macros we will get 
// a value, but not desired result because we hardly will need to write
// a program which calculates the cube of a char variable, most likely
// this would have been a logical error on our side.
// In the macro REMAINDER if we pass a value of type double than we
// will get an error, the program will not compile, since the % operator
// requires both operands to be integers.