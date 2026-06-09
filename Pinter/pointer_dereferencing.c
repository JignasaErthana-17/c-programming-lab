#include <stdio.h>

int main()
{
    int num = 25;
    int *ptr = &num;

    printf("Value Using Pointer = %d", *ptr);

    return 0;
}
