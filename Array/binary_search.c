#include <stdio.h>

int main()
{
    int arr[5];
    int key;
    int low = 0, high = 4, mid;
    int found = 0;

    printf("Enter 5 Sorted Elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Element To Search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}
