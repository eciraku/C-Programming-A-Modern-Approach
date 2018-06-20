// (a) i += c;	/* i has type int */ -> Legal
// (b) c = 2 * c - 1;				 -> Legal
// (c) putchar(c);					 -> Legal
// (d) printf(c);					 -> Illegal (wrong format (it takes string as argument); must include %c as placeholder and then c as the value: printf("%c", c))