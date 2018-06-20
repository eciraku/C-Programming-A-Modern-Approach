#include <stdio.h>

int main(int argc, char const *argv[])
{
	int prefix, identifier, code, item_num, check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &item_num, &check_digit);

	printf("GS1 prefix: %d\n", prefix);
	printf("Group identifier: %d\n", identifier);
	printf("Publisher code: %d\n", code);
	printf("Item number: %d\n", item_num);
	printf("Check digit: %d\n", check_digit);

	return 0;
}