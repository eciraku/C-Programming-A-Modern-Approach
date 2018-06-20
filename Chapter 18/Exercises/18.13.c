/*
	(a) char c = 65; 									Legal!
	(b) static int i = 5, j = i * i;					Illegal! The initializer for j (variable with static storage duration) must be a constant expression
	(c) double d = 2 * PI;								Legal!
	(d) double angles[] = {0, PI / 2, PI, 3 * PI / 2};	Legal!
*/