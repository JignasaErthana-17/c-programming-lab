#include <stdio.h>

long long factorial(int n);

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Factorial = %lld", factorial(n));

    return 0;
}

long long factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}
