/*
	extern float a;

	void f(register double b)
	{
		static int c;
		auto char d;
	}

	----------------------------------------
	|  Storage duration  | Scope | Linkage |
	----------------------------------------
	| a |     static     | file  |    ?    |
	----------------------------------------
	| b |   automatic    | block |  none   |
	----------------------------------------
	| c |     static     | block |  none   |
	----------------------------------------
	| d |   automatic    | block |  none   |
	----------------------------------------

	? - normally external
*/