// int i;
// long int j;
// unsigned int k;

// i + (int) j * k; The first operation is the casting: (int) j, which makes the value of j (not j itself) an int. Then this int is multiplied by an unsigned int.
//					The result of the multiplcation is converted to unsigned int. Then this is added to an int; again the resulting value is converted to an
//					unsigned int. So, the overall type of the expression is unsigned int