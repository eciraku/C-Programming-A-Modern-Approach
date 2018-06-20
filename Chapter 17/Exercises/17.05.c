/*
	struct {
		union {
			char a, b;
			int c;
		} d;
		int e[5];
	} f, *p = &f;

	(a) p->b = ' ';     Illegal! Should be: p->d.b = ' ';
	(b) p->e[3] = 10; 	Legal
	(c) (*p).d.a = '*';	Legal
	(d) p->d->c = 20;	Illegal! Should be: p->d.c = 20;
*/