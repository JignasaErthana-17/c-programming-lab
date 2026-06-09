#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter Number Of Elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocation Failed");
        return 1;
    }

    printf("Memory Allocated Successfully");

    free(ptr);

    return 0;
}
