#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	i = 1;
	switch(i % 3)
	{
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}

	// Output: onetwo
	// Because we lack a break statement the flow control will "fall through"

	return 0;
}