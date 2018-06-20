/*
	enum {FALSE, TRUE} b;
	int i;

	(a) b = FALSE;		Legal and safe
	(b) b = i;			Legal but unsafe (not a meaningful result if i has values other than 0 or 1)
	(c) b++;			Legal but unsafe (if b = 1 then b++ would make b = 2, which is not meaningful)
	(d) i = b;			Legal and safe
	(e) i = 2 * b + 1;	Legal and safe
*/