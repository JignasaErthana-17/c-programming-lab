#include <stdio.h>

int square(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    printf("Square = %d", square(n));

    return 0;
}

int square(int x)
{
    return x * x;
}
