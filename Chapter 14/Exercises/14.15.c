#include <stdio.h>

#define FRENCH

int main(int argc, char const *argv[])
{
	#if defined(ENGLISH)
		printf("Insert Disk 1\n");
	#elif defined(FRENCH)
		printf("Inserez Le Disque 1\n");
	#elif defined(SPANISH)
		printf("Inserte El Disco 1\n");
	#endif

	return 0;
}