#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j); // Output: i = 1, j = 2
    return 0;
}

void swap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// The output of the program will be i = 1, j = 2 the same values they had before the function call.
// The function is correct in swapping the values of the two parameters but this is not reflected 
// in the output because the arguments are passed by value, not by reference, so any changes to the
// variables by this function will not be reflected on the variables themselves.