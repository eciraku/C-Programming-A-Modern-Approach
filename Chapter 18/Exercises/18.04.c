/*
	int f(int i)
	{
		static int j = 0;
		return i * j++;
	}

	f(10) will be 0; since f has never been called before than j will be zero. Then we wll have: 10 * 0 = 0
	If f has been called five times previously we wull have:
	1. First call of f. j will become 1
	2. Second call of f. j will become 2
	3. .................. j will become 3
	4. ................... j will become 4
	5. .................... j will become 5
	After calling f five times j is five. When we call f(10) then the vale will be 10 * 5 = 50
	So, f(10) = 50, if f has been called five times previously
*/