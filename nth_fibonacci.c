#include <stdio.h>

int fib(int i)
{
    if(i<=1) return i;
    else return fib(i-1) + fib(i-2);
}

int main(void)
{
    int n=6;
    printf("\n%d", fib(n));
    return 0;
}