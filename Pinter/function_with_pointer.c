#include <stdio.h>

void display(int *n);

int main()
{
    int num = 50;

    display(&num);

    return 0;
}

void display(int *n)
{
    printf("Value = %d", *n);
}
