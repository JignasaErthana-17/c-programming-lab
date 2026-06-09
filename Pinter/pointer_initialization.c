#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("Value = %d\n", num);
    printf("Address = %p", ptr);

    return 0;
}
