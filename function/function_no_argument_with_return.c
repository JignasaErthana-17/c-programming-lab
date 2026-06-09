#include <stdio.h>

int getNumber();

int main()
{
    int n;

    n = getNumber();

    printf("Number = %d", n);

    return 0;
}

int getNumber()
{
    return 100;
}
