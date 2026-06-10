#include <stdio.h>

void display(int *num) {
    printf("Value = %d\n", *num);
}

int main() {
    int x = 50;

    display(&x);

    return 0;
}
