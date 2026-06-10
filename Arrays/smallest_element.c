#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 elements:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Smallest Element = %d", smallest);

    return 0;
}
