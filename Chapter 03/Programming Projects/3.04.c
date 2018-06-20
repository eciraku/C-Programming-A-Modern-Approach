#include <stdio.h>

int main(int argc, char const *argv[])
{	
	int group_1, group_2, group_3;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &group_1, &group_2, &group_3);

	printf("You entered %d.%d.%d\n", group_1, group_2, group_3);

	return 0;
}