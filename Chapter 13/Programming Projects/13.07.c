#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number, tens_digit, ones_digit;
  char *tens_arr[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventen", "eighteen", "nineteen"};
  char *tens_arr2[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  char *tens_arr3[] = {"", "-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine"};

  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  if (number < 10 || number > 99)
  {
    printf("Please enter a two-digit number!\n");
    return 0;
  }

  tens_digit = number / 10;
  ones_digit = number % 10;

  printf("You entered the number ");

  if (tens_digit == 1)
  {
    printf("%s.\n", tens_arr[ones_digit]);
    return 0;
  }

  printf("%s%s.\n", tens_arr2[tens_digit - 2], tens_arr3[ones_digit]);

  return 0;
}