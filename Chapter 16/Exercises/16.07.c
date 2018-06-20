#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
};

struct fraction gcd(struct fraction f);
struct fraction sum(struct fraction f1, struct fraction f2);
struct fraction difference(struct fraction f1, struct fraction f2);
struct fraction product(struct fraction f1, struct fraction f2);
struct fraction quotient(struct fraction f1, struct fraction f2);

int main(int argc, char const *argv[])
{
	struct fraction f, f1, f2;
	struct fraction result;

	printf("Enter fraction for f: ");
	scanf("%d /%d", &f.numerator, &f.denominator);
	f = gcd(f);
	printf("In lowest terms: %d/%d\n", f.numerator, f.denominator);

	printf("Enter fraction for f1: ");
	scanf("%d /%d", &f1.numerator, &f1.denominator);
	printf("Enter fraction for f2: ");
	scanf("%d /%d", &f2.numerator, &f2.denominator);

	result = sum(f1, f2);
	printf("The sum of f1 and f2 is: %d/%d\n", result.numerator, result.denominator);
	result = difference(f1, f2);
	printf("The difference of f1 and f2 is: %d/%d\n", result.numerator, result.denominator);
	result = product(f1, f2);
	printf("The product of f1 and f2 is: %d/%d\n", result.numerator, result.denominator);
	result = quotient(f1, f2);
	printf("The quotient of f1 and f2 is: %d/%d\n", result.numerator, result.denominator);

	return 0;
}

struct fraction gcd(struct fraction f)
{
	int remainder;
	int numerator_copy, denominator_copy;

	numerator_copy = f.numerator;
	denominator_copy = f.denominator;

	while (denominator_copy != 0)
	{
		remainder = numerator_copy % denominator_copy;
		numerator_copy = denominator_copy;
		denominator_copy = remainder;
	}

	f.numerator = f.numerator / numerator_copy;
	f.denominator = f.denominator / numerator_copy;

	return f;
}

struct fraction sum(struct fraction f1, struct fraction f2)
{
	struct fraction result;

	result.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
	result.denominator = f1.denominator * f2.denominator;

	return gcd(result);
}

struct fraction difference(struct fraction f1, struct fraction f2)
{
	struct fraction result;

	result.numerator = (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator);
	result.denominator = f1.denominator * f2.denominator;

	return gcd(result);
}

struct fraction product(struct fraction f1, struct fraction f2)
{
	struct fraction result;

	result.numerator = f1.numerator * f2.numerator;
	result.denominator = f1.denominator * f2.denominator;

	return gcd(result);
}

struct fraction quotient(struct fraction f1, struct fraction f2)
{
	struct fraction result;

	result.numerator = f1.numerator * f2.denominator;
	result.denominator = f1.denominator * f2.numerator;

	return gcd(result);
}