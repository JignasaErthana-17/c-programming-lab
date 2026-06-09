#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 Elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse Array:\n");

    for(int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
