#include <stdio.h>

double median(double x, double y, double z)
{
  double result;

  if (x <= y)
    if (y <= z) result = y;
    else if (x <= z) result = z;
    else result = x;
  else {
    if (z <= y) result = y;
    else if (x <= z) result = x;
    else result = z;
  }

  return result;
}

int main(int argc, char const *argv[])
{
  double x, y, z;

  printf("Enter x: ");
  scanf("%lf", &x);
  printf("Enter y: ");
  scanf("%lf", &y);
  printf("Enter z: ");
  scanf("%lf", &z);

  printf("The median is: %f\n", median(x, y, z));

  return 0;
}