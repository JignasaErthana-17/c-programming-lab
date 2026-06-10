#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Current Value = %d\n", *ptr);

    ptr++;

    printf("Next Value = %d\n", *ptr);

    return 0;
}
