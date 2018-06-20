#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main(int argc, char const *argv[])
{
    printf("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;

    while((*f)(n)) n++;
    return n;
}

int f2(int i)
{
    return i * i + i - 12;
}

/*
    The output is-> Answer: 3
    The program starts at main. Inside the printf statement we have the function call f1(f2)
    This calls the function f1 which in turn calls the function f2. f2 has only a return statement.
    The function f1 has a while statement which executes as long as the result of f2(n) is different than 0, where n = 0 initially.
    If it is different than zero than it increases n. When the return value of f2 becames 0 than the function f1
    returns the value of n. And the value of n for which the function f2 returns a 0 result is n = 3.
*/