#define GENERIC_MAX(type)		\
type type##_max(type x, type y) \
{								\
	return x > y ? x : y		\
}

// (a)
		
long long_max(long x, long y)
{
	return x > y ? x : y
}

// (b)
// The problem is with the function name type##_max. This would expand to:
// unsigned long unsigned long_max(unsigned long x, unsigned long y)
// We have an extra unsigned word which makes it illegal

//(c)
// We can use typedef to rename the type:
// typedef unsigned long ULONG