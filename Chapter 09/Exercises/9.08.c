/* 
Function that returns nothing and has one double parameter

(a) void f(double x);	Yes! Valid
(b) void f(double);		Yes! Valid, even though the name of the parameter is missing
(c) void f(x);			No! Invalid, because the type of the parameter is missing
(d) f (double x);		No! Invalid, because when the return type of the function is missing it is assumed to be int not void (In C99 it is illegal to omit it)
*/