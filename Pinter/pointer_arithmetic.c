#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("First Element = %d\n", *ptr);

    ptr++;

    printf("Second Element = %d\n", *ptr);

    ptr++;

    printf("Third Element = %d\n", *ptr);

    return 0;
}
