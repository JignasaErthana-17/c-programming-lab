#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    float avg;

    printf("Enter 5 Elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / 5;

    printf("Average = %.2f", avg);

    return 0;
}
