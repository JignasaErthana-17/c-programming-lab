#include <stdio.h>

int main()
{
    int arr[5];
    int key, found = 0;

    printf("Enter 5 Elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Element To Search: ");
    scanf("%d", &key);

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found At Position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found");
    }

    return 0;
}
