// (a)
#define AVG(x, y)	(x+y)/2
// Suppose we have x = 1, and y = 1. What we get is AVG(1, 1) = (1 + 1) / 2 = 1
// Now suppose we use AVG(x, y) in the following expression: 4 / AVG(x, y)
// We have: 4 / (1 + 1) / 2, which is evaluated from left to right: 2 / 2 = 1
// But we had AVG(1, 1) = 1, so 4 / AVG(1, 1) should have given us 4 / 1 = 4
// A correct version would be:
#define AVG(x, y) (((x) + (y)) / 2)

// (b)
#define AREA(x, y) (x)*(y)
// If we do not use parentheses around (x)*(y) we will have the same problem as in case (a)
// Suppose we have AREA(2, 2) = (2)*(2) = 4.
// Now the expression: 4 / AREA(2, 2) = 4 / (2) * (2) = 4
// But AREA(2, 2) is 4 and we want to get 4 / 4 = 1
// A correct version would be:
#define AREA(x, y) ((x)*(y))