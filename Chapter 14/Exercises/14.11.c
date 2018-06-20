#include <stdio.h>

#define ERROR(str, arg)	(fprintf(stderr, (str), (arg)))

int main(int argc, char const *argv[])
{
	int index = 1;
	
	ERROR("Range error: index = %d\n", index);

	return 0;
}