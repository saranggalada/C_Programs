#include <stdio.h>

long int gcd(long int, long int);

int main(void)
{
    long int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%ld %ld", &num1, &num2);   
    printf("\n= %ld\n\n", gcd(num1, num2));
    return 0;
}

long int gcd(long int a, long int b)
{
    printf("\nGCD of %ld and %ld =>", a, b);
    if(a%b==0) return b;
    else return gcd(b, a%b);
}