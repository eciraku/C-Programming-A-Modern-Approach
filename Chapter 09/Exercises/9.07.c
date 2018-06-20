/*
int f(int a, int b) {...}

(a) i = f(83, 12); 		Legal! The arguments match the type of the parameter, also the return value matches the type of the variable i 
(b) x = f(83, 12);		Legal! The return type will be converted to float
(c) i = f(3.15, 9.28);	Legal! The arguments will be converted to int before they are used
(d) x = f(3.15, 9.28);	Legal! The arguments will be converted to int while the return type will be converted to float
(e) f(83, 12);			Legal! Useless though
*/