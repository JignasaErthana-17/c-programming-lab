#include <stdio.h>

int main()
{
    int num = 100;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("Value = %d\n", num);
    printf("Using Pointer = %d\n", *ptr);
    printf("Using Pointer To Pointer = %d", **pptr);

    return 0;
}
