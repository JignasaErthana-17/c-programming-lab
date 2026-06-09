#include <stdio.h>

void display(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    display(n);

    return 0;
}

void display(int x)
{
    printf("Number = %d", x);
}
